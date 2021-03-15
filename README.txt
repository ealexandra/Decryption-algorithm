	Modulul decryption_regfile:
	In cadrul acestui modul am implementat un banc de 4 registrii pe 16 biti. Intr-un bloc secvential, la frontul crescator al 
clock-ului sau descrescator al rst_n-ului am verificat daca semnalul rest_n e valid, iar in acest caz am pus cei 4 registri pe valoarea de 
reset din tabel. Altfel, daca semnalul write este valid, vom pune in functie de addr in registrul auxiliar valoarea wdata si vom ridica 
semnalul de done. In cazul in care write este 0, iar read este 1, vom pune in rdata ceea ce se gaseste in registrul dat de adresa din addr 
si validam semnalul done. In cazul registrului select-register vom utiliza doar primii 2 biti, deoarece restul sunt ignorati. Atat in cazul
in care write este valid sau in cazul in care read este valid,exita si un caz default in care semnalele error si done sunt validate,
deoarece adresa addr nu existenta in bancul de registri. In caul in care atat semnalul write, cat si semnalul read sunt 0, semnalul done
va ramane pe 0. In blocul combinational am assignat semnalelor select, caesar_key, scytale_key si zigzag_key valoarile ce se gasesc in
registrii auxiliari.



	Modulul caesar_decryption:
	Intr-un always secvential am resetat valorile auxiliare pentru data_o si valid_o atunci cand rst_n este pe 0, altfel am verificat 
semnalul valid_i, iar in cazul in care acesta era 1 am decriptat input-urile scazand din data_i cheia pe care am primit-o tot ca input.
Cheia fiind pe 16 biti, am concatenat semnalului de intrare, data_i, inca 8 biti pentru a avea amandoua acelasi numar de biti. In cazul in
care semnalul valid_i nu era valid semnalul de validare ramane pe 0, iar in data_o nu pun nimic. Intr-un always combinational am assignat
semnalelor de output valorile auxiliare  ce se gasesc in data_aux si valid_aux, iar pe busy l-am facut 0 conform cerintei.



	Modulul scytale_decryption:
	Pentru acest modul am avut nevoie sa declar un vector array cu 50  de elemente, fiecare element pe cate 8 biti si 3 indecsi cu 
ajutorul carora voi decripta input-urile. Mai intai de toate am resetat toate semnalele in cazul in care rst_n este pus pe 0, altfel am 
verificat semnalu valid_i. Daca acesta era pus pe 1, am verificat ca input-ul sa nu fie caracterul special care marca momentul când s-a 
terminat un transfer de date. Daca ambele cerinte erau indeplinite, am pus in vectorul array datele de intrare pe care mai apoi le-am 
decriptat si am incrementat indexul i cu ajutoru caruia am parcurs vectorul. De asemenea am pus semnalele de output pe 0, deoarece in 
cadrul unei transfer de date nu se decripteaza nimic. In cazul in care am primit ca input caracterul special, am ridicat semnalul de
busy si am initializat indecsii j si k cu 0 pentru a putea parcurge vectorul pe care tocmai l-am populat sub forma matriceala. In vector
datele sunt primite pe coloane, iar decodificarea trebuie facuta pe linii. Daca semnalul valid_i este nevalid, inseamna ca poate incepe
decriptarea datelor. Atata timp cat j este mai mic decat cheia  N, semnalul de valid_o este validat si se verifica daca k este de asemenea
mai mic decat cheia N. In acest caz output-ul data_o va lua valoarea din vector care se afla pe pozitia j + (k * key_N) si se va incrementa
k. Deoarece am stocat input-urile sub forma vectoriala, acesta trebuie parcurs ca o matrice pentru a putea fi decodificat, sarind in vector
din N in N pozitii, incepand cu pozitia lui j. Cand k a ajuns la valoarea cheii N inseamna ca am parcurs o linie din matrice si se va 
incrementa j si se va reinitializa valoarea lui  k cu 0 pentru a putea trece pe linia urmatoare. Atunci cand conditia j < key_N nu
mai este indeplinita, inseamna ca toate datele au fost decriptate, deci semnalele de valid_o si busy vor fi puse pe 0 pentru a putea
primi noi date de  intrare. In blocul combinational am assignat valorile auxilare pe care le-am folosit in blocul secvential datelor
de iesire busy, data_o si valid_o.



	Modulul demux:
	Pentru demultiplexor am folosit un automat de stari. Demupltiplexorul va primi un set de date format dintr-un input ce reprezinta
mesajul codificat pe 32 de biti si un semnal de validare care anunta inceperea transferului de date. Acesta are un grup de cate 3 output-
uri, fiecare avand cate 2 semnale de iesire. Primul semnal reprezinta datele ce urmeaza a fi decodificate in functie de semnalul select
si cate un semnal de valid care este pus pe 1 atunci cand datele sunt date catre iesire. Am declarat 2 registrii pe 8 biti pentru state 
si next_state si un registru pe 32 de biti in care voi retine datele de intrare. In partea secventiala am verificat daca rst_n este pe 0.
In acest caz vom reinitializa starea cu cea de inceput, altfel vom trece la starea urmatoare. In partea combinationala am implementat starile:
-8'h00: este o stare de inceput in care vom reinitializa toate semnalele cu 0 si din care vom trece in starea 8'h10
-8'h10: in aceasta stare reinitializam semnalul de valid pentru fiecare modul de decriptare cu 0 si verificam daca semnalul de
citirire, valid_i, este pe 1 pentru a putea primi date de intrare. Daca semnalul este valid salvam in reg_aux datele de intrare 
pentru a nu fi pierdute odata cu terminarea transferului de date si trecem in urmatoarea stare 8'h20. In caz contrat ramanem in aceeasi 
stare pana cand semnalul valid_i va fi validat si se vor primi datele de intrare.
-8'h20: dupa ce am primit datele de intrare, le-am impartit in grupuri de cate 4 pe cate 8 biti fiecare, fiind transmisi pe
cicli de ceas consecutivi. Am verificat daca semnalul valid_i este pe 0 pentru a putea transmite primii 8 biti din datele de intrare mai
departe si in functie de semnalul select primit ca input am stabilit care este modul de decriptare: caesar, scytale sau zigzag. Odata ales
modul de decriptare cu ajutorul unui case care verifica valorea semnalului select, am ridicat semnalul de valid corespunzator modului de
decriptare ales si am pus pe output primul grup de date si am trecut in satrea urmatoare 8'h21. In cazul in care semnalul valid_i nu 
este 0 vom ramane in acesta stare pana cand semnalul va fi coborat si vom putea incepe transmiterea grupurilor de date.
-8'h21: aceasta stare este similiara cu cea anterioara. Diferenta dintre cele 2 find aceea ca nu mai este nevoie sa verificam semnalul 
valid_i, deoarece stim ca odata coborat va trebui sa transmitem 4 grupuri de date pe cicli de ceas consecutivi, acasta stare transmitand 
cel de-al doilea grup si trecand in strea 8'h22
-8'h22: transmite cel de-al 3 grup de date pe iesirea corespunzatoare si valideaza semnalul valid in functie de input-ul select si trece in
starea 8'h23
-8'h23: transmite cel de-al 4 grup de date pe iesirea corespunzatoare si valideaza semnalul valid in functie de input-ul select si trece in
starea initiala, deoarece transferul de date s-a terminat



	Modulul mux:
	La fel ca in cazul demultiplexorului, am folosit tot un automat de stari pentru a implementa multiplexorul. In cazul multiplexorului
avem 3 posibile grupuri de intrari cu cate 2  semnale fiecare. Cele 3 grupuri reprezinta datele decodificate cu ajutorul modulului 
caesar_decryption, scytale_decryption si zigzag_decryption. In functie de input-ul select sunt alese datele de input apoi rutate catre
iesire. In partea secventiala am verificat daca rst_n este pe 0. In acest caz am reinitializat starea cu cea de inceput,
altfel am trecut in starea urmatoare. In partea combinationala am implementat starile:
-8'h00: stare de inceput in care am reinitializat output-urile si am trecut la starea urmatoare 8'h10
-8'h10: in cadrul acestei stari am pus output-ul valid pe 0 si am verificat cu un case valorea lui select pentru a stii care este modul de
decriptare a datelor. Dupa ce am ales modul in care a fost facuta decriptarea am verificat daca semnalul de valid corespunzator fiecarui
mod este pe 1 si am pus datele de intrare intr-o variabila auxiliara si am trecut in strea urmatoare 8'h20
-8'h20: am validat semnalul valid_o si am pus pe output-ul data_o valorea din variabia auxilira, adica mesajul decriptat, apoi am 
trecut din nou in starea de inceput.



	Modulul decryption_top:
	In cadrul acestui modul am implementat toate modulele de mai sus necesare pentru decodificarea mesajelor criptate. Am instantiat si
un modul or care va pune semnalul busy pe 1 daca un modul este ocupat sa decripteze datele primte, nepermitand primirea altor date criptate
din exterior.
