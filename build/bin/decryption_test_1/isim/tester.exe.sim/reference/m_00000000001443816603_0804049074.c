/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/Alexandra/Desktop/tema2_task3_integration_tester/tema2_task3_checker/build/bin/reference/ref_mux.v";
static int ng1[] = {0, 0};
static int ng2[] = {3, 0};
static int ng3[] = {1, 0};
static int ng4[] = {2, 0};



static void Always_61_0(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;

LAB0:    t1 = (t0 + 5248U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 5816);
    *((int *)t2) = 1;
    t3 = (t0 + 5280);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(61, ng0);

LAB5:    xsi_set_current_line(62, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(77, ng0);

LAB14:    xsi_set_current_line(78, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 8, 0LL);
    xsi_set_current_line(79, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(81, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    t2 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 8, 0LL);
    xsi_set_current_line(82, ng0);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    t2 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(84, ng0);
    t2 = (t0 + 2168U);
    t3 = *((char **)t2);
    t2 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 8, 0LL);
    xsi_set_current_line(85, ng0);
    t2 = (t0 + 2328U);
    t3 = *((char **)t2);
    t2 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(87, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 2, 0LL);
    xsi_set_current_line(89, ng0);
    t2 = (t0 + 4328);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 0LL);

LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(62, ng0);

LAB13:    xsi_set_current_line(64, ng0);
    t28 = ((char*)((ng1)));
    t29 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 8, 0LL);
    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(70, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    goto LAB12;

}

static void Always_94_1(char *t0)
{
    char t9[8];
    char t25[8];
    char t41[8];
    char t57[8];
    char t65[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t42;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    char *t69;
    char *t70;
    char *t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    char *t79;
    char *t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    int t89;
    int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    char *t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    char *t103;
    char *t104;
    char *t105;
    char *t106;

LAB0:    t1 = (t0 + 5496U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(94, ng0);
    t2 = (t0 + 5832);
    *((int *)t2) = 1;
    t3 = (t0 + 5528);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(94, ng0);

LAB5:    xsi_set_current_line(95, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 2888);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(96, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(97, ng0);
    t2 = (t0 + 4168);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB6:    t5 = ((char*)((ng1)));
    t6 = xsi_vlog_signed_case_compare(t4, 32, t5, 32);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_signed_case_compare(t4, 32, t2, 32);
    if (t6 == 1)
        goto LAB9;

LAB10:
LAB11:    goto LAB2;

LAB7:    xsi_set_current_line(98, ng0);

LAB12:    xsi_set_current_line(99, ng0);
    t7 = ((char*)((ng2)));
    t8 = (t0 + 4328);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 32);
    goto LAB11;

LAB9:    xsi_set_current_line(102, ng0);

LAB13:    xsi_set_current_line(103, ng0);
    t3 = (t0 + 3208);
    t5 = (t3 + 56U);
    t7 = *((char **)t5);
    t8 = ((char*)((ng3)));
    memset(t9, 0, 8);
    t10 = (t7 + 4);
    t11 = (t8 + 4);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t10);
    t16 = *((unsigned int *)t11);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t11);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB17;

LAB14:    if (t21 != 0)
        goto LAB16;

LAB15:    *((unsigned int *)t9) = 1;

LAB17:    memset(t25, 0, 8);
    t26 = (t9 + 4);
    t27 = *((unsigned int *)t26);
    t28 = (~(t27));
    t29 = *((unsigned int *)t9);
    t30 = (t29 & t28);
    t31 = (t30 & 1U);
    if (t31 != 0)
        goto LAB18;

LAB19:    if (*((unsigned int *)t26) != 0)
        goto LAB20;

LAB21:    t33 = (t25 + 4);
    t34 = *((unsigned int *)t25);
    t35 = *((unsigned int *)t33);
    t36 = (t34 || t35);
    if (t36 > 0)
        goto LAB22;

LAB23:    memcpy(t65, t25, 8);

LAB24:    t97 = (t65 + 4);
    t98 = *((unsigned int *)t97);
    t99 = (~(t98));
    t100 = *((unsigned int *)t65);
    t101 = (t100 & t99);
    t102 = (t101 != 0);
    if (t102 > 0)
        goto LAB36;

LAB37:
LAB38:    xsi_set_current_line(108, ng0);
    t2 = (t0 + 3528);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = ((char*)((ng3)));
    memset(t9, 0, 8);
    t8 = (t5 + 4);
    t10 = (t7 + 4);
    t12 = *((unsigned int *)t5);
    t13 = *((unsigned int *)t7);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t8);
    t16 = *((unsigned int *)t10);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t8);
    t20 = *((unsigned int *)t10);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB43;

LAB40:    if (t21 != 0)
        goto LAB42;

LAB41:    *((unsigned int *)t9) = 1;

LAB43:    memset(t25, 0, 8);
    t24 = (t9 + 4);
    t27 = *((unsigned int *)t24);
    t28 = (~(t27));
    t29 = *((unsigned int *)t9);
    t30 = (t29 & t28);
    t31 = (t30 & 1U);
    if (t31 != 0)
        goto LAB44;

LAB45:    if (*((unsigned int *)t24) != 0)
        goto LAB46;

LAB47:    t32 = (t25 + 4);
    t34 = *((unsigned int *)t25);
    t35 = *((unsigned int *)t32);
    t36 = (t34 || t35);
    if (t36 > 0)
        goto LAB48;

LAB49:    memcpy(t65, t25, 8);

LAB50:    t80 = (t65 + 4);
    t98 = *((unsigned int *)t80);
    t99 = (~(t98));
    t100 = *((unsigned int *)t65);
    t101 = (t100 & t99);
    t102 = (t101 != 0);
    if (t102 > 0)
        goto LAB62;

LAB63:
LAB64:    xsi_set_current_line(113, ng0);
    t2 = (t0 + 3848);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = ((char*)((ng3)));
    memset(t9, 0, 8);
    t8 = (t5 + 4);
    t10 = (t7 + 4);
    t12 = *((unsigned int *)t5);
    t13 = *((unsigned int *)t7);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t8);
    t16 = *((unsigned int *)t10);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t8);
    t20 = *((unsigned int *)t10);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB69;

LAB66:    if (t21 != 0)
        goto LAB68;

LAB67:    *((unsigned int *)t9) = 1;

LAB69:    memset(t25, 0, 8);
    t24 = (t9 + 4);
    t27 = *((unsigned int *)t24);
    t28 = (~(t27));
    t29 = *((unsigned int *)t9);
    t30 = (t29 & t28);
    t31 = (t30 & 1U);
    if (t31 != 0)
        goto LAB70;

LAB71:    if (*((unsigned int *)t24) != 0)
        goto LAB72;

LAB73:    t32 = (t25 + 4);
    t34 = *((unsigned int *)t25);
    t35 = *((unsigned int *)t32);
    t36 = (t34 || t35);
    if (t36 > 0)
        goto LAB74;

LAB75:    memcpy(t65, t25, 8);

LAB76:    t80 = (t65 + 4);
    t98 = *((unsigned int *)t80);
    t99 = (~(t98));
    t100 = *((unsigned int *)t65);
    t101 = (t100 & t99);
    t102 = (t101 != 0);
    if (t102 > 0)
        goto LAB88;

LAB89:
LAB90:    goto LAB11;

LAB16:    t24 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB17;

LAB18:    *((unsigned int *)t25) = 1;
    goto LAB21;

LAB20:    t32 = (t25 + 4);
    *((unsigned int *)t25) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB21;

LAB22:    t37 = (t0 + 4008);
    t38 = (t37 + 56U);
    t39 = *((char **)t38);
    t40 = ((char*)((ng1)));
    memset(t41, 0, 8);
    t42 = (t39 + 4);
    t43 = (t40 + 4);
    t44 = *((unsigned int *)t39);
    t45 = *((unsigned int *)t40);
    t46 = (t44 ^ t45);
    t47 = *((unsigned int *)t42);
    t48 = *((unsigned int *)t43);
    t49 = (t47 ^ t48);
    t50 = (t46 | t49);
    t51 = *((unsigned int *)t42);
    t52 = *((unsigned int *)t43);
    t53 = (t51 | t52);
    t54 = (~(t53));
    t55 = (t50 & t54);
    if (t55 != 0)
        goto LAB28;

LAB25:    if (t53 != 0)
        goto LAB27;

LAB26:    *((unsigned int *)t41) = 1;

LAB28:    memset(t57, 0, 8);
    t58 = (t41 + 4);
    t59 = *((unsigned int *)t58);
    t60 = (~(t59));
    t61 = *((unsigned int *)t41);
    t62 = (t61 & t60);
    t63 = (t62 & 1U);
    if (t63 != 0)
        goto LAB29;

LAB30:    if (*((unsigned int *)t58) != 0)
        goto LAB31;

LAB32:    t66 = *((unsigned int *)t25);
    t67 = *((unsigned int *)t57);
    t68 = (t66 & t67);
    *((unsigned int *)t65) = t68;
    t69 = (t25 + 4);
    t70 = (t57 + 4);
    t71 = (t65 + 4);
    t72 = *((unsigned int *)t69);
    t73 = *((unsigned int *)t70);
    t74 = (t72 | t73);
    *((unsigned int *)t71) = t74;
    t75 = *((unsigned int *)t71);
    t76 = (t75 != 0);
    if (t76 == 1)
        goto LAB33;

LAB34:
LAB35:    goto LAB24;

LAB27:    t56 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t56) = 1;
    goto LAB28;

LAB29:    *((unsigned int *)t57) = 1;
    goto LAB32;

LAB31:    t64 = (t57 + 4);
    *((unsigned int *)t57) = 1;
    *((unsigned int *)t64) = 1;
    goto LAB32;

LAB33:    t77 = *((unsigned int *)t65);
    t78 = *((unsigned int *)t71);
    *((unsigned int *)t65) = (t77 | t78);
    t79 = (t25 + 4);
    t80 = (t57 + 4);
    t81 = *((unsigned int *)t25);
    t82 = (~(t81));
    t83 = *((unsigned int *)t79);
    t84 = (~(t83));
    t85 = *((unsigned int *)t57);
    t86 = (~(t85));
    t87 = *((unsigned int *)t80);
    t88 = (~(t87));
    t89 = (t82 & t84);
    t90 = (t86 & t88);
    t91 = (~(t89));
    t92 = (~(t90));
    t93 = *((unsigned int *)t71);
    *((unsigned int *)t71) = (t93 & t91);
    t94 = *((unsigned int *)t71);
    *((unsigned int *)t71) = (t94 & t92);
    t95 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t95 & t91);
    t96 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t96 & t92);
    goto LAB35;

LAB36:    xsi_set_current_line(103, ng0);

LAB39:    xsi_set_current_line(104, ng0);
    t103 = (t0 + 3048);
    t104 = (t103 + 56U);
    t105 = *((char **)t104);
    t106 = (t0 + 2728);
    xsi_vlogvar_assign_value(t106, t105, 0, 0, 8);
    xsi_set_current_line(105, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB38;

LAB42:    t11 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB43;

LAB44:    *((unsigned int *)t25) = 1;
    goto LAB47;

LAB46:    t26 = (t25 + 4);
    *((unsigned int *)t25) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB47;

LAB48:    t33 = (t0 + 4008);
    t37 = (t33 + 56U);
    t38 = *((char **)t37);
    t39 = ((char*)((ng3)));
    memset(t41, 0, 8);
    t40 = (t38 + 4);
    t42 = (t39 + 4);
    t44 = *((unsigned int *)t38);
    t45 = *((unsigned int *)t39);
    t46 = (t44 ^ t45);
    t47 = *((unsigned int *)t40);
    t48 = *((unsigned int *)t42);
    t49 = (t47 ^ t48);
    t50 = (t46 | t49);
    t51 = *((unsigned int *)t40);
    t52 = *((unsigned int *)t42);
    t53 = (t51 | t52);
    t54 = (~(t53));
    t55 = (t50 & t54);
    if (t55 != 0)
        goto LAB54;

LAB51:    if (t53 != 0)
        goto LAB53;

LAB52:    *((unsigned int *)t41) = 1;

LAB54:    memset(t57, 0, 8);
    t56 = (t41 + 4);
    t59 = *((unsigned int *)t56);
    t60 = (~(t59));
    t61 = *((unsigned int *)t41);
    t62 = (t61 & t60);
    t63 = (t62 & 1U);
    if (t63 != 0)
        goto LAB55;

LAB56:    if (*((unsigned int *)t56) != 0)
        goto LAB57;

LAB58:    t66 = *((unsigned int *)t25);
    t67 = *((unsigned int *)t57);
    t68 = (t66 & t67);
    *((unsigned int *)t65) = t68;
    t64 = (t25 + 4);
    t69 = (t57 + 4);
    t70 = (t65 + 4);
    t72 = *((unsigned int *)t64);
    t73 = *((unsigned int *)t69);
    t74 = (t72 | t73);
    *((unsigned int *)t70) = t74;
    t75 = *((unsigned int *)t70);
    t76 = (t75 != 0);
    if (t76 == 1)
        goto LAB59;

LAB60:
LAB61:    goto LAB50;

LAB53:    t43 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t43) = 1;
    goto LAB54;

LAB55:    *((unsigned int *)t57) = 1;
    goto LAB58;

LAB57:    t58 = (t57 + 4);
    *((unsigned int *)t57) = 1;
    *((unsigned int *)t58) = 1;
    goto LAB58;

LAB59:    t77 = *((unsigned int *)t65);
    t78 = *((unsigned int *)t70);
    *((unsigned int *)t65) = (t77 | t78);
    t71 = (t25 + 4);
    t79 = (t57 + 4);
    t81 = *((unsigned int *)t25);
    t82 = (~(t81));
    t83 = *((unsigned int *)t71);
    t84 = (~(t83));
    t85 = *((unsigned int *)t57);
    t86 = (~(t85));
    t87 = *((unsigned int *)t79);
    t88 = (~(t87));
    t6 = (t82 & t84);
    t89 = (t86 & t88);
    t91 = (~(t6));
    t92 = (~(t89));
    t93 = *((unsigned int *)t70);
    *((unsigned int *)t70) = (t93 & t91);
    t94 = *((unsigned int *)t70);
    *((unsigned int *)t70) = (t94 & t92);
    t95 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t95 & t91);
    t96 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t96 & t92);
    goto LAB61;

LAB62:    xsi_set_current_line(108, ng0);

LAB65:    xsi_set_current_line(109, ng0);
    t97 = (t0 + 3368);
    t103 = (t97 + 56U);
    t104 = *((char **)t103);
    t105 = (t0 + 2728);
    xsi_vlogvar_assign_value(t105, t104, 0, 0, 8);
    xsi_set_current_line(110, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB64;

LAB68:    t11 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB69;

LAB70:    *((unsigned int *)t25) = 1;
    goto LAB73;

LAB72:    t26 = (t25 + 4);
    *((unsigned int *)t25) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB73;

LAB74:    t33 = (t0 + 4008);
    t37 = (t33 + 56U);
    t38 = *((char **)t37);
    t39 = ((char*)((ng4)));
    memset(t41, 0, 8);
    t40 = (t38 + 4);
    t42 = (t39 + 4);
    t44 = *((unsigned int *)t38);
    t45 = *((unsigned int *)t39);
    t46 = (t44 ^ t45);
    t47 = *((unsigned int *)t40);
    t48 = *((unsigned int *)t42);
    t49 = (t47 ^ t48);
    t50 = (t46 | t49);
    t51 = *((unsigned int *)t40);
    t52 = *((unsigned int *)t42);
    t53 = (t51 | t52);
    t54 = (~(t53));
    t55 = (t50 & t54);
    if (t55 != 0)
        goto LAB80;

LAB77:    if (t53 != 0)
        goto LAB79;

LAB78:    *((unsigned int *)t41) = 1;

LAB80:    memset(t57, 0, 8);
    t56 = (t41 + 4);
    t59 = *((unsigned int *)t56);
    t60 = (~(t59));
    t61 = *((unsigned int *)t41);
    t62 = (t61 & t60);
    t63 = (t62 & 1U);
    if (t63 != 0)
        goto LAB81;

LAB82:    if (*((unsigned int *)t56) != 0)
        goto LAB83;

LAB84:    t66 = *((unsigned int *)t25);
    t67 = *((unsigned int *)t57);
    t68 = (t66 & t67);
    *((unsigned int *)t65) = t68;
    t64 = (t25 + 4);
    t69 = (t57 + 4);
    t70 = (t65 + 4);
    t72 = *((unsigned int *)t64);
    t73 = *((unsigned int *)t69);
    t74 = (t72 | t73);
    *((unsigned int *)t70) = t74;
    t75 = *((unsigned int *)t70);
    t76 = (t75 != 0);
    if (t76 == 1)
        goto LAB85;

LAB86:
LAB87:    goto LAB76;

LAB79:    t43 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t43) = 1;
    goto LAB80;

LAB81:    *((unsigned int *)t57) = 1;
    goto LAB84;

LAB83:    t58 = (t57 + 4);
    *((unsigned int *)t57) = 1;
    *((unsigned int *)t58) = 1;
    goto LAB84;

LAB85:    t77 = *((unsigned int *)t65);
    t78 = *((unsigned int *)t70);
    *((unsigned int *)t65) = (t77 | t78);
    t71 = (t25 + 4);
    t79 = (t57 + 4);
    t81 = *((unsigned int *)t25);
    t82 = (~(t81));
    t83 = *((unsigned int *)t71);
    t84 = (~(t83));
    t85 = *((unsigned int *)t57);
    t86 = (~(t85));
    t87 = *((unsigned int *)t79);
    t88 = (~(t87));
    t6 = (t82 & t84);
    t89 = (t86 & t88);
    t91 = (~(t6));
    t92 = (~(t89));
    t93 = *((unsigned int *)t70);
    *((unsigned int *)t70) = (t93 & t91);
    t94 = *((unsigned int *)t70);
    *((unsigned int *)t70) = (t94 & t92);
    t95 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t95 & t91);
    t96 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t96 & t92);
    goto LAB87;

LAB88:    xsi_set_current_line(113, ng0);

LAB91:    xsi_set_current_line(114, ng0);
    t97 = (t0 + 3688);
    t103 = (t97 + 56U);
    t104 = *((char **)t103);
    t105 = (t0 + 2728);
    xsi_vlogvar_assign_value(t105, t104, 0, 0, 8);
    xsi_set_current_line(115, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB90;

}


extern void reference_m_00000000001443816603_0804049074_init()
{
	static char *pe[] = {(void *)Always_61_0,(void *)Always_94_1};
	xsi_register_didat("reference_m_00000000001443816603_0804049074", "isim/tester.exe.sim/reference/m_00000000001443816603_0804049074.didat");
	xsi_register_executes(pe);
}
