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
static const char *ng0 = "C:/Users/Alexandra/Desktop/tema2_task3_integration_tester/tema2_task3_checker/build/bin/tester/tester.v";
static int ng1[] = {0, 0};
static int ng2[] = {2, 0};
static int ng3[] = {50, 0};
static unsigned int ng4[] = {0U, 0U};
static int ng5[] = {4, 0};
static unsigned int ng6[] = {16U, 0U};
static int ng7[] = {1, 0};
static unsigned int ng8[] = {18U, 0U};
static unsigned int ng9[] = {20U, 0U};
static int ng10[] = {3, 0};
static const char *ng11 = "Decryption %0d \n";
static const char *ng12 = "Testing data: ";
static const char *ng13 = "%0s ";
static const char *ng14 = "\n";
static int ng15[] = {100, 0};
static const char *ng16 = "[TIMEOUT]Reference Valid OUT was not asserted during 100cc\n";
static const char *ng17 = "[TIMEOUT]UUT Valid OUT was not asserted during 100cc";
static const char *ng18 = "[ERROR] MISMATCH for decryption %0d in position %0d.\n";
static const char *ng19 = "Expected Decryption: ";
static const char *ng20 = "Received Decryption: ";
static const char *ng21 = "[PASSED] Decryption %0d was done correctly: \n";
static const char *ng22 = "[TIMEOUT]Decryption %0d timeout after %0dcc. Busy was kept high for more than %0dcc.";
static const char *ng23 = "Access %0d Writting address: 0x%x with value %0d\n";
static const char *ng24 = "test.data";
static const char *ng25 = "r";
static const char *ng26 = "error opening data file\n";
static const char *ng27 = "nof_decryptions = %d\n";
static const char *ng28 = "error reading nof_decryptions\n";
static const char *ng29 = "%d\n";
static const char *ng30 = "error reading register_input_data for decryption number %d\n";
static const char *ng31 = "nof_data = %d\n";
static const char *ng32 = "error reading nof_data for decryption number %0d\n";
static const char *ng33 = "error reading input_data for decryption number %d\n";
static int ng34[] = {5, 0};
static int ng35[] = {10, 0};
static const char *ng36 = "test ok\n";
static const char *ng37 = "result.tester";
static const char *ng38 = "%6.2f: %0d correct out of %0d (%6.2f%% completed)\n";
static int ng39[] = {1, 0, 0, 0};



static int sp_drive_instruction(char *t1, char *t2)
{
    char t7[8];
    char t8[8];
    char t63[8];
    char t64[8];
    char t75[8];
    char t77[8];
    char t78[8];
    char t79[8];
    char t80[8];
    char t81[8];
    char t82[8];
    char t83[8];
    char t84[8];
    char t85[8];
    char t98[8];
    char t99[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    int t17;
    char *t18;
    unsigned int t19;
    int t20;
    int t21;
    unsigned int t22;
    unsigned int t23;
    int t24;
    int t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned int t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    char *t65;
    char *t66;
    char *t67;
    char *t68;
    char *t69;
    char *t70;
    char *t71;
    char *t72;
    char *t73;
    char *t74;
    char *t76;
    char *t86;
    char *t87;
    char *t88;
    char *t89;
    char *t90;
    char *t91;
    char *t92;
    char *t93;
    char *t94;
    char *t95;
    char *t96;
    char *t97;
    char *t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 848);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(223, ng0);

LAB5:    xsi_set_current_line(224, ng0);
    t5 = ((char*)((ng1)));
    t6 = (t1 + 10920);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);
    xsi_set_current_line(225, ng0);
    xsi_set_current_line(225, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 8840);
    t6 = (t1 + 8840);
    t9 = (t6 + 72U);
    t10 = *((char **)t9);
    t11 = (t1 + 8840);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t14 = ((char*)((ng1)));
    xsi_vlog_generic_convert_array_indices(t7, t8, t10, t13, 1, 1, t14, 32, 1);
    t15 = (t7 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t8 + 4);
    t19 = *((unsigned int *)t18);
    t20 = (!(t19));
    t21 = (t17 && t20);
    if (t21 == 1)
        goto LAB6;

LAB7:
LAB8:    t4 = (t1 + 8840);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t9 = (t1 + 8840);
    t10 = (t9 + 72U);
    t11 = *((char **)t10);
    t12 = (t1 + 8840);
    t13 = (t12 + 64U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng1)));
    xsi_vlog_generic_get_array_select_value(t7, 32, t6, t11, t14, 1, 1, t15, 32, 1);
    t18 = (t1 + 9480);
    t26 = (t18 + 56U);
    t27 = *((char **)t26);
    memset(t8, 0, 8);
    xsi_vlog_signed_less(t8, 32, t7, 32, t27, 32);
    t28 = (t8 + 4);
    t16 = *((unsigned int *)t28);
    t19 = (~(t16));
    t22 = *((unsigned int *)t8);
    t23 = (t22 & t19);
    t29 = (t23 != 0);
    if (t29 > 0)
        goto LAB9;

LAB10:
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB6:    t22 = *((unsigned int *)t7);
    t23 = *((unsigned int *)t8);
    t24 = (t22 - t23);
    t25 = (t24 + 1);
    xsi_vlogvar_assign_value(t5, t4, 0, *((unsigned int *)t8), t25);
    goto LAB7;

LAB9:    xsi_set_current_line(225, ng0);

LAB11:    xsi_set_current_line(226, ng0);
    t30 = ((char*)((ng2)));
    t31 = (t30 + 4);
    t32 = *((unsigned int *)t31);
    t33 = (~(t32));
    t34 = *((unsigned int *)t30);
    t17 = (t34 & t33);
    t35 = (t1 + 22960);
    *((int *)t35) = t17;

LAB12:    t36 = (t1 + 22960);
    if (*((int *)t36) > 0)
        goto LAB13;

LAB14:    xsi_set_current_line(227, ng0);
    t4 = (t1 + 9000);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t9 = (t1 + 9000);
    t10 = (t9 + 72U);
    t11 = *((char **)t10);
    t12 = (t1 + 9000);
    t13 = (t12 + 64U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng1)));
    xsi_vlog_generic_get_array_select_value(t7, 32, t6, t11, t14, 1, 1, t15, 32, 1);
    t18 = ((char*)((ng3)));
    t26 = (t1 + 8840);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t30 = (t1 + 8840);
    t31 = (t30 + 72U);
    t35 = *((char **)t31);
    t36 = (t1 + 8840);
    t37 = (t36 + 64U);
    t38 = *((char **)t37);
    t39 = ((char*)((ng1)));
    xsi_vlog_generic_get_array_select_value(t8, 32, t28, t35, t38, 1, 1, t39, 32, 1);
    t40 = (t2 + 56U);
    t41 = *((char **)t40);
    t42 = (t2 + 56U);
    t43 = *((char **)t42);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t43, &&LAB16);
    t44 = (t2 + 56U);
    t45 = *((char **)t44);
    t46 = (t1 + 2576);
    t47 = xsi_create_subprogram_invocation(t45, 0, t1, t46, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t46, t47);
    t48 = (t1 + 12520);
    xsi_vlogvar_assign_value(t48, t7, 0, 0, 32);
    t49 = (t1 + 12680);
    xsi_vlogvar_assign_value(t49, t18, 0, 0, 32);
    t50 = (t1 + 12840);
    xsi_vlogvar_assign_value(t50, t8, 0, 0, 32);

LAB18:    t51 = (t2 + 64U);
    t52 = *((char **)t51);
    t53 = (t52 + 80U);
    t54 = *((char **)t53);
    t55 = (t54 + 272U);
    t56 = *((char **)t55);
    t57 = (t56 + 0U);
    t58 = *((char **)t57);
    t17 = ((int  (*)(char *, char *))t58)(t1, t52);
    if (t17 == -1)
        goto LAB19;

LAB20:    if (t17 != 0)
        goto LAB21;

LAB16:    t52 = (t1 + 2576);
    xsi_vlog_subprogram_popinvocation(t52);

LAB17:    t59 = (t2 + 64U);
    t60 = *((char **)t59);
    t59 = (t1 + 2576);
    t61 = (t2 + 56U);
    t62 = *((char **)t61);
    xsi_delete_subprogram_invocation(t59, t60, t1, t62, t2);
    xsi_set_current_line(230, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 9800);
    t6 = (t5 + 56U);
    t9 = *((char **)t6);
    t10 = (t1 + 9800);
    t11 = (t10 + 72U);
    t12 = *((char **)t11);
    t13 = (t1 + 9800);
    t14 = (t13 + 64U);
    t15 = *((char **)t14);
    t18 = ((char*)((ng5)));
    t26 = (t1 + 8840);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t30 = (t1 + 8840);
    t31 = (t30 + 72U);
    t35 = *((char **)t31);
    t36 = (t1 + 8840);
    t37 = (t36 + 64U);
    t38 = *((char **)t37);
    t39 = ((char*)((ng1)));
    xsi_vlog_generic_get_array_select_value(t8, 32, t28, t35, t38, 1, 1, t39, 32, 1);
    memset(t63, 0, 8);
    xsi_vlog_signed_multiply(t63, 32, t18, 32, t8, 32);
    xsi_vlog_generic_get_array_select_value(t7, 16, t9, t12, t15, 2, 1, t63, 32, 1);
    t40 = (t1 + 8840);
    t41 = (t40 + 56U);
    t42 = *((char **)t41);
    t43 = (t1 + 8840);
    t44 = (t43 + 72U);
    t45 = *((char **)t44);
    t46 = (t1 + 8840);
    t47 = (t46 + 64U);
    t48 = *((char **)t47);
    t49 = ((char*)((ng1)));
    xsi_vlog_generic_get_array_select_value(t64, 32, t42, t45, t48, 1, 1, t49, 32, 1);
    t50 = (t2 + 56U);
    t51 = *((char **)t50);
    t52 = (t2 + 56U);
    t53 = *((char **)t52);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t53, &&LAB22);
    t54 = (t2 + 56U);
    t55 = *((char **)t54);
    t56 = (t1 + 3008);
    t57 = xsi_create_subprogram_invocation(t55, 0, t1, t56, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t56, t57);
    t58 = (t1 + 13000);
    xsi_vlogvar_assign_value(t58, t4, 0, 0, 8);
    t59 = (t1 + 13160);
    xsi_vlogvar_assign_value(t59, t7, 0, 0, 16);
    t60 = (t1 + 13320);
    xsi_vlogvar_assign_value(t60, t64, 0, 0, 32);

LAB24:    t61 = (t2 + 64U);
    t62 = *((char **)t61);
    t65 = (t62 + 80U);
    t66 = *((char **)t65);
    t67 = (t66 + 272U);
    t68 = *((char **)t67);
    t69 = (t68 + 0U);
    t70 = *((char **)t69);
    t17 = ((int  (*)(char *, char *))t70)(t1, t62);
    if (t17 == -1)
        goto LAB25;

LAB26:    if (t17 != 0)
        goto LAB27;

LAB22:    t62 = (t1 + 3008);
    xsi_vlog_subprogram_popinvocation(t62);

LAB23:    t71 = (t2 + 64U);
    t72 = *((char **)t71);
    t71 = (t1 + 3008);
    t73 = (t2 + 56U);
    t74 = *((char **)t73);
    xsi_delete_subprogram_invocation(t71, t72, t1, t74, t2);
    xsi_set_current_line(231, ng0);
    t4 = ((char*)((ng6)));
    t5 = (t1 + 9800);
    t6 = (t5 + 56U);
    t9 = *((char **)t6);
    t10 = (t1 + 9800);
    t11 = (t10 + 72U);
    t12 = *((char **)t11);
    t13 = (t1 + 9800);
    t14 = (t13 + 64U);
    t15 = *((char **)t14);
    t18 = ((char*)((ng5)));
    t26 = (t1 + 8840);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t30 = (t1 + 8840);
    t31 = (t30 + 72U);
    t35 = *((char **)t31);
    t36 = (t1 + 8840);
    t37 = (t36 + 64U);
    t38 = *((char **)t37);
    t39 = ((char*)((ng1)));
    xsi_vlog_generic_get_array_select_value(t8, 32, t28, t35, t38, 1, 1, t39, 32, 1);
    memset(t63, 0, 8);
    xsi_vlog_signed_multiply(t63, 32, t18, 32, t8, 32);
    t40 = ((char*)((ng7)));
    memset(t64, 0, 8);
    xsi_vlog_signed_add(t64, 32, t63, 32, t40, 32);
    xsi_vlog_generic_get_array_select_value(t7, 16, t9, t12, t15, 2, 1, t64, 32, 1);
    t41 = (t1 + 8840);
    t42 = (t41 + 56U);
    t43 = *((char **)t42);
    t44 = (t1 + 8840);
    t45 = (t44 + 72U);
    t46 = *((char **)t45);
    t47 = (t1 + 8840);
    t48 = (t47 + 64U);
    t49 = *((char **)t48);
    t50 = ((char*)((ng1)));
    xsi_vlog_generic_get_array_select_value(t75, 32, t43, t46, t49, 1, 1, t50, 32, 1);
    t51 = (t2 + 56U);
    t52 = *((char **)t51);
    t53 = (t2 + 56U);
    t54 = *((char **)t53);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t54, &&LAB28);
    t55 = (t2 + 56U);
    t56 = *((char **)t55);
    t57 = (t1 + 3008);
    t58 = xsi_create_subprogram_invocation(t56, 0, t1, t57, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t57, t58);
    t59 = (t1 + 13000);
    xsi_vlogvar_assign_value(t59, t4, 0, 0, 8);
    t60 = (t1 + 13160);
    xsi_vlogvar_assign_value(t60, t7, 0, 0, 16);
    t61 = (t1 + 13320);
    xsi_vlogvar_assign_value(t61, t75, 0, 0, 32);

LAB30:    t62 = (t2 + 64U);
    t65 = *((char **)t62);
    t66 = (t65 + 80U);
    t67 = *((char **)t66);
    t68 = (t67 + 272U);
    t69 = *((char **)t68);
    t70 = (t69 + 0U);
    t71 = *((char **)t70);
    t17 = ((int  (*)(char *, char *))t71)(t1, t65);
    if (t17 == -1)
        goto LAB31;

LAB32:    if (t17 != 0)
        goto LAB33;

LAB28:    t65 = (t1 + 3008);
    xsi_vlog_subprogram_popinvocation(t65);

LAB29:    t72 = (t2 + 64U);
    t73 = *((char **)t72);
    t72 = (t1 + 3008);
    t74 = (t2 + 56U);
    t76 = *((char **)t74);
    xsi_delete_subprogram_invocation(t72, t73, t1, t76, t2);
    xsi_set_current_line(232, ng0);
    t4 = ((char*)((ng8)));
    t5 = (t1 + 9800);
    t6 = (t5 + 56U);
    t9 = *((char **)t6);
    t10 = (t1 + 9800);
    t11 = (t10 + 72U);
    t12 = *((char **)t11);
    t13 = (t1 + 9800);
    t14 = (t13 + 64U);
    t15 = *((char **)t14);
    t18 = ((char*)((ng5)));
    t26 = (t1 + 8840);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t30 = (t1 + 8840);
    t31 = (t30 + 72U);
    t35 = *((char **)t31);
    t36 = (t1 + 8840);
    t37 = (t36 + 64U);
    t38 = *((char **)t37);
    t39 = ((char*)((ng1)));
    xsi_vlog_generic_get_array_select_value(t8, 32, t28, t35, t38, 1, 1, t39, 32, 1);
    memset(t63, 0, 8);
    xsi_vlog_signed_multiply(t63, 32, t18, 32, t8, 32);
    t40 = ((char*)((ng2)));
    memset(t64, 0, 8);
    xsi_vlog_signed_add(t64, 32, t63, 32, t40, 32);
    xsi_vlog_generic_get_array_select_value(t7, 16, t9, t12, t15, 2, 1, t64, 32, 1);
    t41 = (t1 + 8840);
    t42 = (t41 + 56U);
    t43 = *((char **)t42);
    t44 = (t1 + 8840);
    t45 = (t44 + 72U);
    t46 = *((char **)t45);
    t47 = (t1 + 8840);
    t48 = (t47 + 64U);
    t49 = *((char **)t48);
    t50 = ((char*)((ng1)));
    xsi_vlog_generic_get_array_select_value(t75, 32, t43, t46, t49, 1, 1, t50, 32, 1);
    t51 = (t2 + 56U);
    t52 = *((char **)t51);
    t53 = (t2 + 56U);
    t54 = *((char **)t53);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t54, &&LAB34);
    t55 = (t2 + 56U);
    t56 = *((char **)t55);
    t57 = (t1 + 3008);
    t58 = xsi_create_subprogram_invocation(t56, 0, t1, t57, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t57, t58);
    t59 = (t1 + 13000);
    xsi_vlogvar_assign_value(t59, t4, 0, 0, 8);
    t60 = (t1 + 13160);
    xsi_vlogvar_assign_value(t60, t7, 0, 0, 16);
    t61 = (t1 + 13320);
    xsi_vlogvar_assign_value(t61, t75, 0, 0, 32);

LAB36:    t62 = (t2 + 64U);
    t65 = *((char **)t62);
    t66 = (t65 + 80U);
    t67 = *((char **)t66);
    t68 = (t67 + 272U);
    t69 = *((char **)t68);
    t70 = (t69 + 0U);
    t71 = *((char **)t70);
    t17 = ((int  (*)(char *, char *))t71)(t1, t65);
    if (t17 == -1)
        goto LAB37;

LAB38:    if (t17 != 0)
        goto LAB39;

LAB34:    t65 = (t1 + 3008);
    xsi_vlog_subprogram_popinvocation(t65);

LAB35:    t72 = (t2 + 64U);
    t73 = *((char **)t72);
    t72 = (t1 + 3008);
    t74 = (t2 + 56U);
    t76 = *((char **)t74);
    xsi_delete_subprogram_invocation(t72, t73, t1, t76, t2);
    xsi_set_current_line(233, ng0);
    t4 = ((char*)((ng9)));
    t5 = (t1 + 9800);
    t6 = (t5 + 56U);
    t9 = *((char **)t6);
    t10 = (t1 + 9800);
    t11 = (t10 + 72U);
    t12 = *((char **)t11);
    t13 = (t1 + 9800);
    t14 = (t13 + 64U);
    t15 = *((char **)t14);
    t18 = ((char*)((ng5)));
    t26 = (t1 + 8840);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t30 = (t1 + 8840);
    t31 = (t30 + 72U);
    t35 = *((char **)t31);
    t36 = (t1 + 8840);
    t37 = (t36 + 64U);
    t38 = *((char **)t37);
    t39 = ((char*)((ng1)));
    xsi_vlog_generic_get_array_select_value(t8, 32, t28, t35, t38, 1, 1, t39, 32, 1);
    memset(t63, 0, 8);
    xsi_vlog_signed_multiply(t63, 32, t18, 32, t8, 32);
    t40 = ((char*)((ng10)));
    memset(t64, 0, 8);
    xsi_vlog_signed_add(t64, 32, t63, 32, t40, 32);
    xsi_vlog_generic_get_array_select_value(t7, 16, t9, t12, t15, 2, 1, t64, 32, 1);
    t41 = (t1 + 8840);
    t42 = (t41 + 56U);
    t43 = *((char **)t42);
    t44 = (t1 + 8840);
    t45 = (t44 + 72U);
    t46 = *((char **)t45);
    t47 = (t1 + 8840);
    t48 = (t47 + 64U);
    t49 = *((char **)t48);
    t50 = ((char*)((ng1)));
    xsi_vlog_generic_get_array_select_value(t75, 32, t43, t46, t49, 1, 1, t50, 32, 1);
    t51 = (t2 + 56U);
    t52 = *((char **)t51);
    t53 = (t2 + 56U);
    t54 = *((char **)t53);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t54, &&LAB40);
    t55 = (t2 + 56U);
    t56 = *((char **)t55);
    t57 = (t1 + 3008);
    t58 = xsi_create_subprogram_invocation(t56, 0, t1, t57, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t57, t58);
    t59 = (t1 + 13000);
    xsi_vlogvar_assign_value(t59, t4, 0, 0, 8);
    t60 = (t1 + 13160);
    xsi_vlogvar_assign_value(t60, t7, 0, 0, 16);
    t61 = (t1 + 13320);
    xsi_vlogvar_assign_value(t61, t75, 0, 0, 32);

LAB42:    t62 = (t2 + 64U);
    t65 = *((char **)t62);
    t66 = (t65 + 80U);
    t67 = *((char **)t66);
    t68 = (t67 + 272U);
    t69 = *((char **)t68);
    t70 = (t69 + 0U);
    t71 = *((char **)t70);
    t17 = ((int  (*)(char *, char *))t71)(t1, t65);
    if (t17 == -1)
        goto LAB43;

LAB44:    if (t17 != 0)
        goto LAB45;

LAB40:    t65 = (t1 + 3008);
    xsi_vlog_subprogram_popinvocation(t65);

LAB41:    t72 = (t2 + 64U);
    t73 = *((char **)t72);
    t72 = (t1 + 3008);
    t74 = (t2 + 56U);
    t76 = *((char **)t74);
    xsi_delete_subprogram_invocation(t72, t73, t1, t76, t2);
    xsi_set_current_line(235, ng0);
    t4 = (t1 + 8840);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t9 = (t1 + 8840);
    t10 = (t9 + 72U);
    t11 = *((char **)t10);
    t12 = (t1 + 8840);
    t13 = (t12 + 64U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng1)));
    xsi_vlog_generic_get_array_select_value(t7, 32, t6, t11, t14, 1, 1, t15, 32, 1);
    t18 = (t1 + 848);
    xsi_vlogfile_write(0, 0, 1, ng11, 2, t18, (char)119, t7, 32);
    xsi_set_current_line(238, ng0);
    t4 = (t1 + 848);
    xsi_vlogfile_write(0, 0, 1, ng12, 1, t4);
    xsi_set_current_line(240, ng0);
    xsi_set_current_line(240, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 8360);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);

LAB46:    t4 = (t1 + 8360);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t9 = (t1 + 9960);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t1 + 9960);
    t13 = (t12 + 72U);
    t14 = *((char **)t13);
    t15 = (t1 + 9960);
    t18 = (t15 + 64U);
    t26 = *((char **)t18);
    t27 = (t1 + 8840);
    t28 = (t27 + 56U);
    t30 = *((char **)t28);
    t31 = (t1 + 8840);
    t35 = (t31 + 72U);
    t36 = *((char **)t35);
    t37 = (t1 + 8840);
    t38 = (t37 + 64U);
    t39 = *((char **)t38);
    t40 = ((char*)((ng1)));
    xsi_vlog_generic_get_array_select_value(t8, 32, t30, t36, t39, 1, 1, t40, 32, 1);
    xsi_vlog_generic_get_array_select_value(t7, 32, t11, t14, t26, 2, 1, t8, 32, 1);
    t41 = ((char*)((ng5)));
    memset(t63, 0, 8);
    xsi_vlog_unsigned_divide(t63, 32, t7, 32, t41, 32);
    memset(t64, 0, 8);
    t42 = (t6 + 4);
    if (*((unsigned int *)t42) != 0)
        goto LAB48;

LAB47:    t43 = (t63 + 4);
    if (*((unsigned int *)t43) != 0)
        goto LAB48;

LAB51:    if (*((unsigned int *)t6) < *((unsigned int *)t63))
        goto LAB49;

LAB50:    t45 = (t64 + 4);
    t16 = *((unsigned int *)t45);
    t19 = (~(t16));
    t22 = *((unsigned int *)t64);
    t23 = (t22 & t19);
    t29 = (t23 != 0);
    if (t29 > 0)
        goto LAB52;

LAB53:    xsi_set_current_line(251, ng0);
    t4 = (t1 + 9960);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t9 = (t1 + 9960);
    t10 = (t9 + 72U);
    t11 = *((char **)t10);
    t12 = (t1 + 9960);
    t13 = (t12 + 64U);
    t14 = *((char **)t13);
    t15 = (t1 + 8840);
    t18 = (t15 + 56U);
    t26 = *((char **)t18);
    t27 = (t1 + 8840);
    t28 = (t27 + 72U);
    t30 = *((char **)t28);
    t31 = (t1 + 8840);
    t35 = (t31 + 64U);
    t36 = *((char **)t35);
    t37 = ((char*)((ng1)));
    xsi_vlog_generic_get_array_select_value(t8, 32, t26, t30, t36, 1, 1, t37, 32, 1);
    xsi_vlog_generic_get_array_select_value(t7, 32, t6, t11, t14, 2, 1, t8, 32, 1);
    t38 = ((char*)((ng5)));
    memset(t63, 0, 8);
    xsi_vlog_unsigned_mod(t63, 32, t7, 32, t38, 32);
    t39 = ((char*)((ng1)));
    memset(t64, 0, 8);
    t40 = (t63 + 4);
    t41 = (t39 + 4);
    t16 = *((unsigned int *)t63);
    t19 = *((unsigned int *)t39);
    t22 = (t16 ^ t19);
    t23 = *((unsigned int *)t40);
    t29 = *((unsigned int *)t41);
    t32 = (t23 ^ t29);
    t33 = (t22 | t32);
    t34 = *((unsigned int *)t40);
    t101 = *((unsigned int *)t41);
    t102 = (t34 | t101);
    t103 = (~(t102));
    t104 = (t33 & t103);
    if (t104 != 0)
        goto LAB63;

LAB62:    if (t102 != 0)
        goto LAB64;

LAB65:    t43 = (t64 + 4);
    t105 = *((unsigned int *)t43);
    t106 = (~(t105));
    t107 = *((unsigned int *)t64);
    t108 = (t107 & t106);
    t109 = (t108 != 0);
    if (t109 > 0)
        goto LAB66;

LAB67:
LAB68:    xsi_set_current_line(264, ng0);
    t4 = (t1 + 848);
    xsi_vlogfile_write(0, 0, 1, ng14, 1, t4);
    xsi_set_current_line(266, ng0);
    t4 = (t1 + 10920);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t9 = (t1 + 9960);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t1 + 9960);
    t13 = (t12 + 72U);
    t14 = *((char **)t13);
    t15 = (t1 + 9960);
    t18 = (t15 + 64U);
    t26 = *((char **)t18);
    t27 = (t1 + 8840);
    t28 = (t27 + 56U);
    t30 = *((char **)t28);
    t31 = (t1 + 8840);
    t35 = (t31 + 72U);
    t36 = *((char **)t35);
    t37 = (t1 + 8840);
    t38 = (t37 + 64U);
    t39 = *((char **)t38);
    t40 = ((char*)((ng1)));
    xsi_vlog_generic_get_array_select_value(t8, 32, t30, t36, t39, 1, 1, t40, 32, 1);
    xsi_vlog_generic_get_array_select_value(t7, 32, t11, t14, t26, 2, 1, t8, 32, 1);
    memset(t64, 0, 8);
    xsi_vlog_unsigned_add(t64, 32, t6, 32, t7, 32);
    t41 = (t1 + 10920);
    xsi_vlogvar_assign_value(t41, t64, 0, 0, 32);
    xsi_set_current_line(225, ng0);
    t4 = (t1 + 8840);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t9 = (t1 + 8840);
    t10 = (t9 + 72U);
    t11 = *((char **)t10);
    t12 = (t1 + 8840);
    t13 = (t12 + 64U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng1)));
    xsi_vlog_generic_get_array_select_value(t7, 32, t6, t11, t14, 1, 1, t15, 32, 1);
    t18 = ((char*)((ng7)));
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t7, 32, t18, 32);
    t26 = (t1 + 8840);
    t27 = (t1 + 8840);
    t28 = (t27 + 72U);
    t30 = *((char **)t28);
    t31 = (t1 + 8840);
    t35 = (t31 + 64U);
    t36 = *((char **)t35);
    t37 = ((char*)((ng1)));
    xsi_vlog_generic_convert_array_indices(t64, t75, t30, t36, 1, 1, t37, 32, 1);
    t38 = (t64 + 4);
    t16 = *((unsigned int *)t38);
    t17 = (!(t16));
    t39 = (t75 + 4);
    t19 = *((unsigned int *)t39);
    t20 = (!(t19));
    t21 = (t17 && t20);
    if (t21 == 1)
        goto LAB82;

LAB83:    goto LAB8;

LAB13:    xsi_set_current_line(226, ng0);
    t37 = (t2 + 88U);
    t38 = *((char **)t37);
    t39 = (t38 + 0U);
    xsi_wp_set_status(t39, 1);
    *((char **)t3) = &&LAB15;
    goto LAB1;

LAB15:    t4 = (t1 + 22960);
    t17 = *((int *)t4);
    *((int *)t4) = (t17 - 1);
    goto LAB12;

LAB19:    t0 = -1;
    goto LAB1;

LAB21:    t51 = (t2 + 48U);
    *((char **)t51) = &&LAB18;
    goto LAB1;

LAB25:    t0 = -1;
    goto LAB1;

LAB27:    t61 = (t2 + 48U);
    *((char **)t61) = &&LAB24;
    goto LAB1;

LAB31:    t0 = -1;
    goto LAB1;

LAB33:    t62 = (t2 + 48U);
    *((char **)t62) = &&LAB30;
    goto LAB1;

LAB37:    t0 = -1;
    goto LAB1;

LAB39:    t62 = (t2 + 48U);
    *((char **)t62) = &&LAB36;
    goto LAB1;

LAB43:    t0 = -1;
    goto LAB1;

LAB45:    t62 = (t2 + 48U);
    *((char **)t62) = &&LAB42;
    goto LAB1;

LAB48:    t44 = (t64 + 4);
    *((unsigned int *)t64) = 1;
    *((unsigned int *)t44) = 1;
    goto LAB50;

LAB49:    *((unsigned int *)t64) = 1;
    goto LAB50;

LAB52:    xsi_set_current_line(240, ng0);

LAB54:    xsi_set_current_line(241, ng0);
    t46 = ((char*)((ng7)));
    t47 = (t1 + 11400);
    xsi_vlogvar_assign_value(t47, t46, 0, 0, 1);
    xsi_set_current_line(242, ng0);
    t4 = (t1 + 9640);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t9 = (t1 + 9640);
    t10 = (t9 + 72U);
    t11 = *((char **)t10);
    t12 = (t1 + 9640);
    t13 = (t12 + 64U);
    t14 = *((char **)t13);
    t15 = (t1 + 10920);
    t18 = (t15 + 56U);
    t26 = *((char **)t18);
    t27 = ((char*)((ng5)));
    t28 = (t1 + 8360);
    t30 = (t28 + 56U);
    t31 = *((char **)t30);
    memset(t63, 0, 8);
    xsi_vlog_signed_multiply(t63, 32, t27, 32, t31, 32);
    memset(t64, 0, 8);
    xsi_vlog_signed_add(t64, 32, t26, 32, t63, 32);
    t35 = ((char*)((ng10)));
    memset(t75, 0, 8);
    xsi_vlog_signed_add(t75, 32, t64, 32, t35, 32);
    xsi_vlog_generic_get_array_select_value(t8, 8, t6, t11, t14, 2, 1, t75, 32, 1);
    t36 = (t1 + 9640);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    t39 = (t1 + 9640);
    t40 = (t39 + 72U);
    t41 = *((char **)t40);
    t42 = (t1 + 9640);
    t43 = (t42 + 64U);
    t44 = *((char **)t43);
    t45 = (t1 + 10920);
    t46 = (t45 + 56U);
    t47 = *((char **)t46);
    t48 = ((char*)((ng5)));
    t49 = (t1 + 8360);
    t50 = (t49 + 56U);
    t51 = *((char **)t50);
    memset(t78, 0, 8);
    xsi_vlog_signed_multiply(t78, 32, t48, 32, t51, 32);
    memset(t79, 0, 8);
    xsi_vlog_signed_add(t79, 32, t47, 32, t78, 32);
    t52 = ((char*)((ng2)));
    memset(t80, 0, 8);
    xsi_vlog_signed_add(t80, 32, t79, 32, t52, 32);
    xsi_vlog_generic_get_array_select_value(t77, 8, t38, t41, t44, 2, 1, t80, 32, 1);
    t53 = (t1 + 9640);
    t54 = (t53 + 56U);
    t55 = *((char **)t54);
    t56 = (t1 + 9640);
    t57 = (t56 + 72U);
    t58 = *((char **)t57);
    t59 = (t1 + 9640);
    t60 = (t59 + 64U);
    t61 = *((char **)t60);
    t62 = (t1 + 10920);
    t65 = (t62 + 56U);
    t66 = *((char **)t65);
    t67 = ((char*)((ng5)));
    t68 = (t1 + 8360);
    t69 = (t68 + 56U);
    t70 = *((char **)t69);
    memset(t82, 0, 8);
    xsi_vlog_signed_multiply(t82, 32, t67, 32, t70, 32);
    memset(t83, 0, 8);
    xsi_vlog_signed_add(t83, 32, t66, 32, t82, 32);
    t71 = ((char*)((ng7)));
    memset(t84, 0, 8);
    xsi_vlog_signed_add(t84, 32, t83, 32, t71, 32);
    xsi_vlog_generic_get_array_select_value(t81, 8, t55, t58, t61, 2, 1, t84, 32, 1);
    t72 = (t1 + 9640);
    t73 = (t72 + 56U);
    t74 = *((char **)t73);
    t76 = (t1 + 9640);
    t86 = (t76 + 72U);
    t87 = *((char **)t86);
    t88 = (t1 + 9640);
    t89 = (t88 + 64U);
    t90 = *((char **)t89);
    t91 = (t1 + 10920);
    t92 = (t91 + 56U);
    t93 = *((char **)t92);
    t94 = ((char*)((ng5)));
    t95 = (t1 + 8360);
    t96 = (t95 + 56U);
    t97 = *((char **)t96);
    memset(t98, 0, 8);
    xsi_vlog_signed_multiply(t98, 32, t94, 32, t97, 32);
    memset(t99, 0, 8);
    xsi_vlog_signed_add(t99, 32, t93, 32, t98, 32);
    xsi_vlog_generic_get_array_select_value(t85, 8, t74, t87, t90, 2, 1, t99, 32, 1);
    xsi_vlogtype_concat(t7, 32, 32, 4U, t85, 8, t81, 8, t77, 8, t8, 8);
    t100 = (t1 + 11240);
    xsi_vlogvar_assign_value(t100, t7, 0, 0, 32);
    xsi_set_current_line(244, ng0);
    t4 = (t1 + 11240);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t9 = (t1 + 848);
    xsi_vlogfile_write(0, 0, 1, ng13, 2, t9, (char)118, t6, 32);
    xsi_set_current_line(245, ng0);
    t4 = (t2 + 88U);
    t5 = *((char **)t4);
    t6 = (t5 + 16U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB55;
    goto LAB1;

LAB55:    xsi_set_current_line(246, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 11400);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(247, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 11240);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(249, ng0);
    t4 = (t1 + 9000);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t9 = (t1 + 9000);
    t10 = (t9 + 72U);
    t11 = *((char **)t10);
    t12 = (t1 + 9000);
    t13 = (t12 + 64U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng1)));
    xsi_vlog_generic_get_array_select_value(t7, 32, t6, t11, t14, 1, 1, t15, 32, 1);
    t18 = ((char*)((ng3)));
    t26 = (t1 + 8840);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t30 = (t1 + 8840);
    t31 = (t30 + 72U);
    t35 = *((char **)t31);
    t36 = (t1 + 8840);
    t37 = (t36 + 64U);
    t38 = *((char **)t37);
    t39 = ((char*)((ng1)));
    xsi_vlog_generic_get_array_select_value(t8, 32, t28, t35, t38, 1, 1, t39, 32, 1);
    t40 = (t2 + 56U);
    t41 = *((char **)t40);
    t42 = (t2 + 56U);
    t43 = *((char **)t42);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t43, &&LAB56);
    t44 = (t2 + 56U);
    t45 = *((char **)t44);
    t46 = (t1 + 2576);
    t47 = xsi_create_subprogram_invocation(t45, 0, t1, t46, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t46, t47);
    t48 = (t1 + 12520);
    xsi_vlogvar_assign_value(t48, t7, 0, 0, 32);
    t49 = (t1 + 12680);
    xsi_vlogvar_assign_value(t49, t18, 0, 0, 32);
    t50 = (t1 + 12840);
    xsi_vlogvar_assign_value(t50, t8, 0, 0, 32);

LAB58:    t51 = (t2 + 64U);
    t52 = *((char **)t51);
    t53 = (t52 + 80U);
    t54 = *((char **)t53);
    t55 = (t54 + 272U);
    t56 = *((char **)t55);
    t57 = (t56 + 0U);
    t58 = *((char **)t57);
    t17 = ((int  (*)(char *, char *))t58)(t1, t52);
    if (t17 == -1)
        goto LAB59;

LAB60:    if (t17 != 0)
        goto LAB61;

LAB56:    t52 = (t1 + 2576);
    xsi_vlog_subprogram_popinvocation(t52);

LAB57:    t59 = (t2 + 64U);
    t60 = *((char **)t59);
    t59 = (t1 + 2576);
    t61 = (t2 + 56U);
    t62 = *((char **)t61);
    xsi_delete_subprogram_invocation(t59, t60, t1, t62, t2);
    xsi_set_current_line(240, ng0);
    t4 = (t1 + 8360);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t9 = ((char*)((ng7)));
    memset(t7, 0, 8);
    xsi_vlog_signed_add(t7, 32, t6, 32, t9, 32);
    t10 = (t1 + 8360);
    xsi_vlogvar_assign_value(t10, t7, 0, 0, 32);
    goto LAB46;

LAB59:    t0 = -1;
    goto LAB1;

LAB61:    t51 = (t2 + 48U);
    *((char **)t51) = &&LAB58;
    goto LAB1;

LAB63:    *((unsigned int *)t64) = 1;
    goto LAB65;

LAB64:    t42 = (t64 + 4);
    *((unsigned int *)t64) = 1;
    *((unsigned int *)t42) = 1;
    goto LAB65;

LAB66:    xsi_set_current_line(251, ng0);

LAB69:    xsi_set_current_line(252, ng0);
    t44 = ((char*)((ng7)));
    t45 = (t1 + 11400);
    xsi_vlogvar_assign_value(t45, t44, 0, 0, 1);
    xsi_set_current_line(253, ng0);
    t4 = (t1 + 9960);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t9 = (t1 + 9960);
    t10 = (t9 + 72U);
    t11 = *((char **)t10);
    t12 = (t1 + 9960);
    t13 = (t12 + 64U);
    t14 = *((char **)t13);
    t15 = (t1 + 8840);
    t18 = (t15 + 56U);
    t26 = *((char **)t18);
    t27 = (t1 + 8840);
    t28 = (t27 + 72U);
    t30 = *((char **)t28);
    t31 = (t1 + 8840);
    t35 = (t31 + 64U);
    t36 = *((char **)t35);
    t37 = ((char*)((ng1)));
    xsi_vlog_generic_get_array_select_value(t8, 32, t26, t30, t36, 1, 1, t37, 32, 1);
    xsi_vlog_generic_get_array_select_value(t7, 32, t6, t11, t14, 2, 1, t8, 32, 1);
    t38 = ((char*)((ng5)));
    memset(t63, 0, 8);
    xsi_vlog_unsigned_mod(t63, 32, t7, 32, t38, 32);

LAB70:    t39 = ((char*)((ng7)));
    t17 = xsi_vlog_unsigned_case_compare(t63, 32, t39, 32);
    if (t17 == 1)
        goto LAB71;

LAB72:    t4 = ((char*)((ng2)));
    t17 = xsi_vlog_unsigned_case_compare(t63, 32, t4, 32);
    if (t17 == 1)
        goto LAB73;

LAB74:    t4 = ((char*)((ng10)));
    t17 = xsi_vlog_unsigned_case_compare(t63, 32, t4, 32);
    if (t17 == 1)
        goto LAB75;

LAB76:
LAB78:
LAB77:    xsi_set_current_line(257, ng0);

LAB80:
LAB79:    xsi_set_current_line(259, ng0);
    t4 = (t1 + 11240);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t9 = (t1 + 848);
    xsi_vlogfile_write(0, 0, 1, ng13, 2, t9, (char)118, t6, 32);
    xsi_set_current_line(260, ng0);
    t4 = (t2 + 88U);
    t5 = *((char **)t4);
    t6 = (t5 + 32U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB81;
    goto LAB1;

LAB71:    xsi_set_current_line(254, ng0);
    t40 = ((char*)((ng4)));
    t41 = (t1 + 9640);
    t42 = (t41 + 56U);
    t43 = *((char **)t42);
    t44 = (t1 + 9640);
    t45 = (t44 + 72U);
    t46 = *((char **)t45);
    t47 = (t1 + 9640);
    t48 = (t47 + 64U);
    t49 = *((char **)t48);
    t50 = (t1 + 10920);
    t51 = (t50 + 56U);
    t52 = *((char **)t51);
    t53 = ((char*)((ng5)));
    t54 = (t1 + 8360);
    t55 = (t54 + 56U);
    t56 = *((char **)t55);
    memset(t77, 0, 8);
    xsi_vlog_signed_multiply(t77, 32, t53, 32, t56, 32);
    memset(t78, 0, 8);
    xsi_vlog_signed_add(t78, 32, t52, 32, t77, 32);
    xsi_vlog_generic_get_array_select_value(t75, 8, t43, t46, t49, 2, 1, t78, 32, 1);
    xsi_vlogtype_concat(t64, 32, 32, 2U, t75, 8, t40, 24);
    t57 = (t1 + 11240);
    xsi_vlogvar_assign_value(t57, t64, 0, 0, 32);
    goto LAB79;

LAB73:    xsi_set_current_line(255, ng0);
    t5 = ((char*)((ng4)));
    t6 = (t1 + 9640);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    t11 = (t1 + 9640);
    t12 = (t11 + 72U);
    t13 = *((char **)t12);
    t14 = (t1 + 9640);
    t15 = (t14 + 64U);
    t18 = *((char **)t15);
    t26 = (t1 + 10920);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t30 = ((char*)((ng5)));
    t31 = (t1 + 8360);
    t35 = (t31 + 56U);
    t36 = *((char **)t35);
    memset(t64, 0, 8);
    xsi_vlog_signed_multiply(t64, 32, t30, 32, t36, 32);
    memset(t75, 0, 8);
    xsi_vlog_signed_add(t75, 32, t28, 32, t64, 32);
    t37 = ((char*)((ng7)));
    memset(t77, 0, 8);
    xsi_vlog_signed_add(t77, 32, t75, 32, t37, 32);
    xsi_vlog_generic_get_array_select_value(t8, 8, t10, t13, t18, 2, 1, t77, 32, 1);
    t38 = (t1 + 9640);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    t41 = (t1 + 9640);
    t42 = (t41 + 72U);
    t43 = *((char **)t42);
    t44 = (t1 + 9640);
    t45 = (t44 + 64U);
    t46 = *((char **)t45);
    t47 = (t1 + 10920);
    t48 = (t47 + 56U);
    t49 = *((char **)t48);
    t50 = ((char*)((ng5)));
    t51 = (t1 + 8360);
    t52 = (t51 + 56U);
    t53 = *((char **)t52);
    memset(t79, 0, 8);
    xsi_vlog_signed_multiply(t79, 32, t50, 32, t53, 32);
    memset(t80, 0, 8);
    xsi_vlog_signed_add(t80, 32, t49, 32, t79, 32);
    xsi_vlog_generic_get_array_select_value(t78, 8, t40, t43, t46, 2, 1, t80, 32, 1);
    xsi_vlogtype_concat(t7, 32, 32, 3U, t78, 8, t8, 8, t5, 16);
    t54 = (t1 + 11240);
    xsi_vlogvar_assign_value(t54, t7, 0, 0, 32);
    goto LAB79;

LAB75:    xsi_set_current_line(256, ng0);
    t5 = ((char*)((ng4)));
    t6 = (t1 + 9640);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    t11 = (t1 + 9640);
    t12 = (t11 + 72U);
    t13 = *((char **)t12);
    t14 = (t1 + 9640);
    t15 = (t14 + 64U);
    t18 = *((char **)t15);
    t26 = (t1 + 10920);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t30 = ((char*)((ng5)));
    t31 = (t1 + 8360);
    t35 = (t31 + 56U);
    t36 = *((char **)t35);
    memset(t64, 0, 8);
    xsi_vlog_signed_multiply(t64, 32, t30, 32, t36, 32);
    memset(t75, 0, 8);
    xsi_vlog_signed_add(t75, 32, t28, 32, t64, 32);
    t37 = ((char*)((ng2)));
    memset(t77, 0, 8);
    xsi_vlog_signed_add(t77, 32, t75, 32, t37, 32);
    xsi_vlog_generic_get_array_select_value(t8, 8, t10, t13, t18, 2, 1, t77, 32, 1);
    t38 = (t1 + 9640);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    t41 = (t1 + 9640);
    t42 = (t41 + 72U);
    t43 = *((char **)t42);
    t44 = (t1 + 9640);
    t45 = (t44 + 64U);
    t46 = *((char **)t45);
    t47 = (t1 + 10920);
    t48 = (t47 + 56U);
    t49 = *((char **)t48);
    t50 = ((char*)((ng5)));
    t51 = (t1 + 8360);
    t52 = (t51 + 56U);
    t53 = *((char **)t52);
    memset(t79, 0, 8);
    xsi_vlog_signed_multiply(t79, 32, t50, 32, t53, 32);
    memset(t80, 0, 8);
    xsi_vlog_signed_add(t80, 32, t49, 32, t79, 32);
    t54 = ((char*)((ng7)));
    memset(t81, 0, 8);
    xsi_vlog_signed_add(t81, 32, t80, 32, t54, 32);
    xsi_vlog_generic_get_array_select_value(t78, 8, t40, t43, t46, 2, 1, t81, 32, 1);
    t55 = (t1 + 9640);
    t56 = (t55 + 56U);
    t57 = *((char **)t56);
    t58 = (t1 + 9640);
    t59 = (t58 + 72U);
    t60 = *((char **)t59);
    t61 = (t1 + 9640);
    t62 = (t61 + 64U);
    t65 = *((char **)t62);
    t66 = (t1 + 10920);
    t67 = (t66 + 56U);
    t68 = *((char **)t67);
    t69 = ((char*)((ng5)));
    t70 = (t1 + 8360);
    t71 = (t70 + 56U);
    t72 = *((char **)t71);
    memset(t83, 0, 8);
    xsi_vlog_signed_multiply(t83, 32, t69, 32, t72, 32);
    memset(t84, 0, 8);
    xsi_vlog_signed_add(t84, 32, t68, 32, t83, 32);
    xsi_vlog_generic_get_array_select_value(t82, 8, t57, t60, t65, 2, 1, t84, 32, 1);
    xsi_vlogtype_concat(t7, 32, 32, 4U, t82, 8, t78, 8, t8, 8, t5, 8);
    t73 = (t1 + 11240);
    xsi_vlogvar_assign_value(t73, t7, 0, 0, 32);
    goto LAB79;

LAB81:    xsi_set_current_line(261, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 11400);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(262, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 11240);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    goto LAB68;

LAB82:    t22 = *((unsigned int *)t64);
    t23 = *((unsigned int *)t75);
    t24 = (t22 - t23);
    t25 = (t24 + 1);
    xsi_vlogvar_assign_value(t26, t8, 0, *((unsigned int *)t75), t25);
    goto LAB83;

}

static int sp_monitor_ref(char *t1, char *t2)
{
    char t7[8];
    char t8[8];
    char t32[8];
    char t33[8];
    char t47[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    int t18;
    char *t19;
    unsigned int t20;
    int t21;
    int t22;
    unsigned int t23;
    unsigned int t24;
    int t25;
    int t26;
    char *t27;
    char *t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    unsigned int t42;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t48;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 1280);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(272, ng0);

LAB5:    xsi_set_current_line(273, ng0);
    xsi_set_current_line(273, ng0);
    t5 = ((char*)((ng1)));
    t6 = (t1 + 8840);
    t9 = (t1 + 8840);
    t10 = (t9 + 72U);
    t11 = *((char **)t10);
    t12 = (t1 + 8840);
    t13 = (t12 + 64U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng7)));
    xsi_vlog_generic_convert_array_indices(t7, t8, t11, t14, 1, 1, t15, 32, 1);
    t16 = (t7 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t8 + 4);
    t20 = *((unsigned int *)t19);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB6;

LAB7:
LAB8:    t4 = (t1 + 8840);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t9 = (t1 + 8840);
    t10 = (t9 + 72U);
    t11 = *((char **)t10);
    t12 = (t1 + 8840);
    t13 = (t12 + 64U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng7)));
    xsi_vlog_generic_get_array_select_value(t7, 32, t6, t11, t14, 1, 1, t15, 32, 1);
    t16 = (t1 + 11080);
    t19 = (t16 + 56U);
    t27 = *((char **)t19);
    memset(t8, 0, 8);
    xsi_vlog_signed_less(t8, 32, t7, 32, t27, 32);
    t28 = (t8 + 4);
    t17 = *((unsigned int *)t28);
    t20 = (~(t17));
    t23 = *((unsigned int *)t8);
    t24 = (t23 & t20);
    t29 = (t24 != 0);
    if (t29 > 0)
        goto LAB9;

LAB10:
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB6:    t23 = *((unsigned int *)t7);
    t24 = *((unsigned int *)t8);
    t25 = (t23 - t24);
    t26 = (t25 + 1);
    xsi_vlogvar_assign_value(t6, t5, 0, *((unsigned int *)t8), t26);
    goto LAB7;

LAB9:    xsi_set_current_line(273, ng0);

LAB11:    xsi_set_current_line(274, ng0);
    t30 = ((char*)((ng15)));
    t31 = (t1 + 9000);
    t34 = (t1 + 9000);
    t35 = (t34 + 72U);
    t36 = *((char **)t35);
    t37 = (t1 + 9000);
    t38 = (t37 + 64U);
    t39 = *((char **)t38);
    t40 = ((char*)((ng7)));
    xsi_vlog_generic_convert_array_indices(t32, t33, t36, t39, 1, 1, t40, 32, 1);
    t41 = (t32 + 4);
    t42 = *((unsigned int *)t41);
    t18 = (!(t42));
    t43 = (t33 + 4);
    t44 = *((unsigned int *)t43);
    t21 = (!(t44));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB12;

LAB13:    xsi_set_current_line(276, ng0);

LAB14:    t4 = (t1 + 4280U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
    memset(t7, 0, 8);
    if (*((unsigned int *)t5) != *((unsigned int *)t4))
        goto LAB17;

LAB15:    t6 = (t5 + 4);
    t9 = (t4 + 4);
    if (*((unsigned int *)t6) != *((unsigned int *)t9))
        goto LAB17;

LAB16:    *((unsigned int *)t7) = 1;

LAB17:    t10 = (t7 + 4);
    t17 = *((unsigned int *)t10);
    t20 = (~(t17));
    t23 = *((unsigned int *)t7);
    t24 = (t23 & t20);
    t29 = (t24 != 0);
    if (t29 > 0)
        goto LAB18;

LAB19:    xsi_set_current_line(287, ng0);
    t4 = (t1 + 3960U);
    t5 = *((char **)t4);
    memcpy(t7, t5, 8);
    t4 = (t1 + 10120);
    t6 = (t1 + 10120);
    t9 = (t6 + 72U);
    t10 = *((char **)t9);
    t11 = (t1 + 10120);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t14 = (t1 + 8840);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t19 = (t1 + 8840);
    t27 = (t19 + 72U);
    t28 = *((char **)t27);
    t30 = (t1 + 8840);
    t31 = (t30 + 64U);
    t34 = *((char **)t31);
    t35 = ((char*)((ng7)));
    xsi_vlog_generic_get_array_select_value(t33, 32, t16, t28, t34, 1, 1, t35, 32, 1);
    xsi_vlog_generic_convert_array_indices(t8, t32, t10, t13, 2, 1, t33, 32, 1);
    t36 = (t8 + 4);
    t17 = *((unsigned int *)t36);
    t18 = (!(t17));
    t37 = (t32 + 4);
    t20 = *((unsigned int *)t37);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB28;

LAB29:    xsi_set_current_line(289, ng0);
    t4 = (t2 + 88U);
    t5 = *((char **)t4);
    t6 = (t5 + 16U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB30;
    goto LAB1;

LAB12:    t45 = *((unsigned int *)t32);
    t46 = *((unsigned int *)t33);
    t25 = (t45 - t46);
    t26 = (t25 + 1);
    xsi_vlogvar_assign_value(t31, t30, 0, *((unsigned int *)t33), t26);
    goto LAB13;

LAB18:    xsi_set_current_line(277, ng0);

LAB20:    xsi_set_current_line(278, ng0);
    t11 = (t1 + 9000);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t1 + 9000);
    t15 = (t14 + 72U);
    t16 = *((char **)t15);
    t19 = (t1 + 9000);
    t27 = (t19 + 64U);
    t28 = *((char **)t27);
    t30 = ((char*)((ng7)));
    xsi_vlog_generic_get_array_select_value(t8, 32, t13, t16, t28, 1, 1, t30, 32, 1);
    t31 = ((char*)((ng7)));
    memset(t32, 0, 8);
    xsi_vlog_signed_minus(t32, 32, t8, 32, t31, 32);
    t34 = (t1 + 9000);
    t35 = (t1 + 9000);
    t36 = (t35 + 72U);
    t37 = *((char **)t36);
    t38 = (t1 + 9000);
    t39 = (t38 + 64U);
    t40 = *((char **)t39);
    t41 = ((char*)((ng7)));
    xsi_vlog_generic_convert_array_indices(t33, t47, t37, t40, 1, 1, t41, 32, 1);
    t43 = (t33 + 4);
    t42 = *((unsigned int *)t43);
    t18 = (!(t42));
    t48 = (t47 + 4);
    t44 = *((unsigned int *)t48);
    t21 = (!(t44));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB21;

LAB22:    xsi_set_current_line(279, ng0);
    t4 = (t1 + 9000);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t9 = (t1 + 9000);
    t10 = (t9 + 72U);
    t11 = *((char **)t10);
    t12 = (t1 + 9000);
    t13 = (t12 + 64U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng7)));
    xsi_vlog_generic_get_array_select_value(t7, 32, t6, t11, t14, 1, 1, t15, 32, 1);
    t16 = ((char*)((ng1)));
    memset(t8, 0, 8);
    xsi_vlog_signed_equal(t8, 32, t7, 32, t16, 32);
    t19 = (t8 + 4);
    t17 = *((unsigned int *)t19);
    t20 = (~(t17));
    t23 = *((unsigned int *)t8);
    t24 = (t23 & t20);
    t29 = (t24 != 0);
    if (t29 > 0)
        goto LAB23;

LAB24:
LAB25:    xsi_set_current_line(284, ng0);
    t4 = (t2 + 88U);
    t5 = *((char **)t4);
    t6 = (t5 + 0U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB27;
    goto LAB1;

LAB21:    t45 = *((unsigned int *)t33);
    t46 = *((unsigned int *)t47);
    t25 = (t45 - t46);
    t26 = (t25 + 1);
    xsi_vlogvar_assign_value(t34, t32, 0, *((unsigned int *)t47), t26);
    goto LAB22;

LAB23:    xsi_set_current_line(280, ng0);

LAB26:    xsi_set_current_line(281, ng0);
    t27 = (t1 + 1280);
    xsi_vlogfile_write(1, 0, 0, ng16, 1, t27);
    xsi_set_current_line(282, ng0);
    xsi_vlog_finish(1);
    goto LAB25;

LAB27:    goto LAB14;

LAB28:    t23 = *((unsigned int *)t8);
    t24 = *((unsigned int *)t32);
    t25 = (t23 - t24);
    t26 = (t25 + 1);
    xsi_vlogvar_assign_value(t4, t7, 0, *((unsigned int *)t32), t26);
    goto LAB29;

LAB30:    xsi_set_current_line(273, ng0);
    t4 = (t1 + 8840);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t9 = (t1 + 8840);
    t10 = (t9 + 72U);
    t11 = *((char **)t10);
    t12 = (t1 + 8840);
    t13 = (t12 + 64U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng7)));
    xsi_vlog_generic_get_array_select_value(t7, 32, t6, t11, t14, 1, 1, t15, 32, 1);
    t16 = ((char*)((ng7)));
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t7, 32, t16, 32);
    t19 = (t1 + 8840);
    t27 = (t1 + 8840);
    t28 = (t27 + 72U);
    t30 = *((char **)t28);
    t31 = (t1 + 8840);
    t34 = (t31 + 64U);
    t35 = *((char **)t34);
    t36 = ((char*)((ng7)));
    xsi_vlog_generic_convert_array_indices(t32, t33, t30, t35, 1, 1, t36, 32, 1);
    t37 = (t32 + 4);
    t17 = *((unsigned int *)t37);
    t18 = (!(t17));
    t38 = (t33 + 4);
    t20 = *((unsigned int *)t38);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB31;

LAB32:    goto LAB8;

LAB31:    t23 = *((unsigned int *)t32);
    t24 = *((unsigned int *)t33);
    t25 = (t23 - t24);
    t26 = (t25 + 1);
    xsi_vlogvar_assign_value(t19, t8, 0, *((unsigned int *)t33), t26);
    goto LAB32;

}

static int sp_monitor_tst(char *t1, char *t2)
{
    char t7[8];
    char t8[8];
    char t32[8];
    char t33[8];
    char t47[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    int t18;
    char *t19;
    unsigned int t20;
    int t21;
    int t22;
    unsigned int t23;
    unsigned int t24;
    int t25;
    int t26;
    char *t27;
    char *t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    unsigned int t42;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t48;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 1712);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(295, ng0);

LAB5:    xsi_set_current_line(296, ng0);
    xsi_set_current_line(296, ng0);
    t5 = ((char*)((ng1)));
    t6 = (t1 + 8840);
    t9 = (t1 + 8840);
    t10 = (t9 + 72U);
    t11 = *((char **)t10);
    t12 = (t1 + 8840);
    t13 = (t12 + 64U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng2)));
    xsi_vlog_generic_convert_array_indices(t7, t8, t11, t14, 1, 1, t15, 32, 1);
    t16 = (t7 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t8 + 4);
    t20 = *((unsigned int *)t19);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB6;

LAB7:
LAB8:    t4 = (t1 + 8840);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t9 = (t1 + 8840);
    t10 = (t9 + 72U);
    t11 = *((char **)t10);
    t12 = (t1 + 8840);
    t13 = (t12 + 64U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng2)));
    xsi_vlog_generic_get_array_select_value(t7, 32, t6, t11, t14, 1, 1, t15, 32, 1);
    t16 = (t1 + 11080);
    t19 = (t16 + 56U);
    t27 = *((char **)t19);
    memset(t8, 0, 8);
    xsi_vlog_signed_less(t8, 32, t7, 32, t27, 32);
    t28 = (t8 + 4);
    t17 = *((unsigned int *)t28);
    t20 = (~(t17));
    t23 = *((unsigned int *)t8);
    t24 = (t23 & t20);
    t29 = (t24 != 0);
    if (t29 > 0)
        goto LAB9;

LAB10:
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB6:    t23 = *((unsigned int *)t7);
    t24 = *((unsigned int *)t8);
    t25 = (t23 - t24);
    t26 = (t25 + 1);
    xsi_vlogvar_assign_value(t6, t5, 0, *((unsigned int *)t8), t26);
    goto LAB7;

LAB9:    xsi_set_current_line(296, ng0);

LAB11:    xsi_set_current_line(297, ng0);
    t30 = ((char*)((ng15)));
    t31 = (t1 + 9000);
    t34 = (t1 + 9000);
    t35 = (t34 + 72U);
    t36 = *((char **)t35);
    t37 = (t1 + 9000);
    t38 = (t37 + 64U);
    t39 = *((char **)t38);
    t40 = ((char*)((ng2)));
    xsi_vlog_generic_convert_array_indices(t32, t33, t36, t39, 1, 1, t40, 32, 1);
    t41 = (t32 + 4);
    t42 = *((unsigned int *)t41);
    t18 = (!(t42));
    t43 = (t33 + 4);
    t44 = *((unsigned int *)t43);
    t21 = (!(t44));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB12;

LAB13:    xsi_set_current_line(299, ng0);

LAB14:    t4 = (t1 + 4440U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
    memset(t7, 0, 8);
    if (*((unsigned int *)t5) != *((unsigned int *)t4))
        goto LAB17;

LAB15:    t6 = (t5 + 4);
    t9 = (t4 + 4);
    if (*((unsigned int *)t6) != *((unsigned int *)t9))
        goto LAB17;

LAB16:    *((unsigned int *)t7) = 1;

LAB17:    t10 = (t7 + 4);
    t17 = *((unsigned int *)t10);
    t20 = (~(t17));
    t23 = *((unsigned int *)t7);
    t24 = (t23 & t20);
    t29 = (t24 != 0);
    if (t29 > 0)
        goto LAB18;

LAB19:    xsi_set_current_line(310, ng0);
    t4 = (t1 + 4120U);
    t5 = *((char **)t4);
    memcpy(t7, t5, 8);
    t4 = (t1 + 10280);
    t6 = (t1 + 10280);
    t9 = (t6 + 72U);
    t10 = *((char **)t9);
    t11 = (t1 + 10280);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t14 = (t1 + 8840);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t19 = (t1 + 8840);
    t27 = (t19 + 72U);
    t28 = *((char **)t27);
    t30 = (t1 + 8840);
    t31 = (t30 + 64U);
    t34 = *((char **)t31);
    t35 = ((char*)((ng2)));
    xsi_vlog_generic_get_array_select_value(t33, 32, t16, t28, t34, 1, 1, t35, 32, 1);
    xsi_vlog_generic_convert_array_indices(t8, t32, t10, t13, 2, 1, t33, 32, 1);
    t36 = (t8 + 4);
    t17 = *((unsigned int *)t36);
    t18 = (!(t17));
    t37 = (t32 + 4);
    t20 = *((unsigned int *)t37);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB28;

LAB29:    xsi_set_current_line(312, ng0);
    t4 = (t2 + 88U);
    t5 = *((char **)t4);
    t6 = (t5 + 16U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB30;
    goto LAB1;

LAB12:    t45 = *((unsigned int *)t32);
    t46 = *((unsigned int *)t33);
    t25 = (t45 - t46);
    t26 = (t25 + 1);
    xsi_vlogvar_assign_value(t31, t30, 0, *((unsigned int *)t33), t26);
    goto LAB13;

LAB18:    xsi_set_current_line(300, ng0);

LAB20:    xsi_set_current_line(301, ng0);
    t11 = (t1 + 9000);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t1 + 9000);
    t15 = (t14 + 72U);
    t16 = *((char **)t15);
    t19 = (t1 + 9000);
    t27 = (t19 + 64U);
    t28 = *((char **)t27);
    t30 = ((char*)((ng2)));
    xsi_vlog_generic_get_array_select_value(t8, 32, t13, t16, t28, 1, 1, t30, 32, 1);
    t31 = ((char*)((ng7)));
    memset(t32, 0, 8);
    xsi_vlog_signed_minus(t32, 32, t8, 32, t31, 32);
    t34 = (t1 + 9000);
    t35 = (t1 + 9000);
    t36 = (t35 + 72U);
    t37 = *((char **)t36);
    t38 = (t1 + 9000);
    t39 = (t38 + 64U);
    t40 = *((char **)t39);
    t41 = ((char*)((ng2)));
    xsi_vlog_generic_convert_array_indices(t33, t47, t37, t40, 1, 1, t41, 32, 1);
    t43 = (t33 + 4);
    t42 = *((unsigned int *)t43);
    t18 = (!(t42));
    t48 = (t47 + 4);
    t44 = *((unsigned int *)t48);
    t21 = (!(t44));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB21;

LAB22:    xsi_set_current_line(302, ng0);
    t4 = (t1 + 9000);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t9 = (t1 + 9000);
    t10 = (t9 + 72U);
    t11 = *((char **)t10);
    t12 = (t1 + 9000);
    t13 = (t12 + 64U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng2)));
    xsi_vlog_generic_get_array_select_value(t7, 32, t6, t11, t14, 1, 1, t15, 32, 1);
    t16 = ((char*)((ng1)));
    memset(t8, 0, 8);
    xsi_vlog_signed_equal(t8, 32, t7, 32, t16, 32);
    t19 = (t8 + 4);
    t17 = *((unsigned int *)t19);
    t20 = (~(t17));
    t23 = *((unsigned int *)t8);
    t24 = (t23 & t20);
    t29 = (t24 != 0);
    if (t29 > 0)
        goto LAB23;

LAB24:
LAB25:    xsi_set_current_line(307, ng0);
    t4 = (t2 + 88U);
    t5 = *((char **)t4);
    t6 = (t5 + 0U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB27;
    goto LAB1;

LAB21:    t45 = *((unsigned int *)t33);
    t46 = *((unsigned int *)t47);
    t25 = (t45 - t46);
    t26 = (t25 + 1);
    xsi_vlogvar_assign_value(t34, t32, 0, *((unsigned int *)t47), t26);
    goto LAB22;

LAB23:    xsi_set_current_line(303, ng0);

LAB26:    xsi_set_current_line(304, ng0);
    t27 = (t1 + 1712);
    xsi_vlogfile_write(1, 0, 0, ng17, 1, t27);
    xsi_set_current_line(305, ng0);
    xsi_vlog_finish(1);
    goto LAB25;

LAB27:    goto LAB14;

LAB28:    t23 = *((unsigned int *)t8);
    t24 = *((unsigned int *)t32);
    t25 = (t23 - t24);
    t26 = (t25 + 1);
    xsi_vlogvar_assign_value(t4, t7, 0, *((unsigned int *)t32), t26);
    goto LAB29;

LAB30:    xsi_set_current_line(296, ng0);
    t4 = (t1 + 8840);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t9 = (t1 + 8840);
    t10 = (t9 + 72U);
    t11 = *((char **)t10);
    t12 = (t1 + 8840);
    t13 = (t12 + 64U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng2)));
    xsi_vlog_generic_get_array_select_value(t7, 32, t6, t11, t14, 1, 1, t15, 32, 1);
    t16 = ((char*)((ng7)));
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t7, 32, t16, 32);
    t19 = (t1 + 8840);
    t27 = (t1 + 8840);
    t28 = (t27 + 72U);
    t30 = *((char **)t28);
    t31 = (t1 + 8840);
    t34 = (t31 + 64U);
    t35 = *((char **)t34);
    t36 = ((char*)((ng2)));
    xsi_vlog_generic_convert_array_indices(t32, t33, t30, t35, 1, 1, t36, 32, 1);
    t37 = (t32 + 4);
    t17 = *((unsigned int *)t37);
    t18 = (!(t17));
    t38 = (t33 + 4);
    t20 = *((unsigned int *)t38);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB31;

LAB32:    goto LAB8;

LAB31:    t23 = *((unsigned int *)t32);
    t24 = *((unsigned int *)t33);
    t25 = (t23 - t24);
    t26 = (t25 + 1);
    xsi_vlogvar_assign_value(t19, t8, 0, *((unsigned int *)t33), t26);
    goto LAB32;

}

static int sp_end_of_test_checks(char *t1, char *t2)
{
    char t10[8];
    char t20[8];
    char t31[8];
    char t33[8];
    char t58[8];
    char t69[8];
    char t71[8];
    char t72[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    char *t18;
    char *t19;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t32;
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;
    char *t56;
    char *t57;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    char *t63;
    char *t64;
    char *t65;
    char *t66;
    char *t67;
    char *t68;
    char *t70;
    char *t73;
    char *t74;
    char *t75;
    char *t76;
    char *t77;
    char *t78;
    char *t79;
    char *t80;
    char *t81;
    char *t82;
    unsigned int t83;
    int t84;
    char *t85;
    unsigned int t86;
    int t87;
    int t88;
    unsigned int t89;
    unsigned int t90;
    int t91;
    int t92;
    char *t93;
    char *t94;
    char *t95;
    char *t96;
    char *t97;
    char *t98;
    char *t99;
    char *t100;
    char *t101;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 2144);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(318, ng0);

LAB5:    xsi_set_current_line(319, ng0);
    t5 = ((char*)((ng1)));
    t6 = (t1 + 10760);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);
    xsi_set_current_line(320, ng0);
    xsi_set_current_line(320, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 8360);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);

LAB6:    t4 = (t1 + 8360);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 9480);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t10, 0, 8);
    xsi_vlog_signed_less(t10, 32, t6, 32, t9, 32);
    t11 = (t10 + 4);
    t12 = *((unsigned int *)t11);
    t13 = (~(t12));
    t14 = *((unsigned int *)t10);
    t15 = (t14 & t13);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB7;

LAB8:
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB7:    xsi_set_current_line(320, ng0);

LAB9:    xsi_set_current_line(321, ng0);
    t17 = (t1 + 9800);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t21 = (t1 + 9800);
    t22 = (t21 + 72U);
    t23 = *((char **)t22);
    t24 = (t1 + 9800);
    t25 = (t24 + 64U);
    t26 = *((char **)t25);
    t27 = ((char*)((ng5)));
    t28 = (t1 + 8360);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    memset(t31, 0, 8);
    xsi_vlog_signed_multiply(t31, 32, t27, 32, t30, 32);
    xsi_vlog_generic_get_array_select_value(t20, 32, t19, t23, t26, 2, 1, t31, 32, 1);
    t32 = ((char*)((ng1)));
    memset(t33, 0, 8);
    t34 = (t20 + 4);
    t35 = (t32 + 4);
    t36 = *((unsigned int *)t20);
    t37 = *((unsigned int *)t32);
    t38 = (t36 ^ t37);
    t39 = *((unsigned int *)t34);
    t40 = *((unsigned int *)t35);
    t41 = (t39 ^ t40);
    t42 = (t38 | t41);
    t43 = *((unsigned int *)t34);
    t44 = *((unsigned int *)t35);
    t45 = (t43 | t44);
    t46 = (~(t45));
    t47 = (t42 & t46);
    if (t47 != 0)
        goto LAB11;

LAB10:    if (t45 != 0)
        goto LAB12;

LAB13:    t49 = (t33 + 4);
    t50 = *((unsigned int *)t49);
    t51 = (~(t50));
    t52 = *((unsigned int *)t33);
    t53 = (t52 & t51);
    t54 = (t53 != 0);
    if (t54 > 0)
        goto LAB14;

LAB15:
LAB16:    xsi_set_current_line(324, ng0);
    xsi_set_current_line(324, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 8520);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);

LAB19:    t4 = (t1 + 8520);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 9960);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t11 = (t1 + 9960);
    t17 = (t11 + 72U);
    t18 = *((char **)t17);
    t19 = (t1 + 9960);
    t21 = (t19 + 64U);
    t22 = *((char **)t21);
    t23 = (t1 + 8360);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    xsi_vlog_generic_get_array_select_value(t10, 32, t9, t18, t22, 2, 1, t25, 32, 1);
    memset(t20, 0, 8);
    t26 = (t6 + 4);
    if (*((unsigned int *)t26) != 0)
        goto LAB21;

LAB20:    t27 = (t10 + 4);
    if (*((unsigned int *)t27) != 0)
        goto LAB21;

LAB24:    if (*((unsigned int *)t6) < *((unsigned int *)t10))
        goto LAB22;

LAB23:    t29 = (t20 + 4);
    t12 = *((unsigned int *)t29);
    t13 = (~(t12));
    t14 = *((unsigned int *)t20);
    t15 = (t14 & t13);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB25;

LAB26:    xsi_set_current_line(346, ng0);
    t4 = (t1 + 9320);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng1)));
    memset(t10, 0, 8);
    t8 = (t6 + 4);
    t9 = (t7 + 4);
    t12 = *((unsigned int *)t6);
    t13 = *((unsigned int *)t7);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t8);
    t16 = *((unsigned int *)t9);
    t36 = (t15 ^ t16);
    t37 = (t14 | t36);
    t38 = *((unsigned int *)t8);
    t39 = *((unsigned int *)t9);
    t40 = (t38 | t39);
    t41 = (~(t40));
    t42 = (t37 & t41);
    if (t42 != 0)
        goto LAB56;

LAB53:    if (t40 != 0)
        goto LAB55;

LAB54:    *((unsigned int *)t10) = 1;

LAB56:    t17 = (t10 + 4);
    t43 = *((unsigned int *)t17);
    t44 = (~(t43));
    t45 = *((unsigned int *)t10);
    t46 = (t45 & t44);
    t47 = (t46 != 0);
    if (t47 > 0)
        goto LAB57;

LAB58:
LAB59:    xsi_set_current_line(355, ng0);
    t4 = (t1 + 10760);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 9960);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t11 = (t1 + 9960);
    t17 = (t11 + 72U);
    t18 = *((char **)t17);
    t19 = (t1 + 9960);
    t21 = (t19 + 64U);
    t22 = *((char **)t21);
    t23 = (t1 + 8360);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    xsi_vlog_generic_get_array_select_value(t10, 32, t9, t18, t22, 2, 1, t25, 32, 1);
    memset(t20, 0, 8);
    xsi_vlog_unsigned_add(t20, 32, t6, 32, t10, 32);
    t26 = (t1 + 10760);
    xsi_vlogvar_assign_value(t26, t20, 0, 0, 32);
    xsi_set_current_line(320, ng0);
    t4 = (t1 + 8360);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng7)));
    memset(t10, 0, 8);
    xsi_vlog_signed_add(t10, 32, t6, 32, t7, 32);
    t8 = (t1 + 8360);
    xsi_vlogvar_assign_value(t8, t10, 0, 0, 32);
    goto LAB6;

LAB11:    *((unsigned int *)t33) = 1;
    goto LAB13;

LAB12:    t48 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t48) = 1;
    goto LAB13;

LAB14:    xsi_set_current_line(322, ng0);
    t55 = (t1 + 9960);
    t56 = (t55 + 56U);
    t57 = *((char **)t56);
    t59 = (t1 + 9960);
    t60 = (t59 + 72U);
    t61 = *((char **)t60);
    t62 = (t1 + 9960);
    t63 = (t62 + 64U);
    t64 = *((char **)t63);
    t65 = (t1 + 8360);
    t66 = (t65 + 56U);
    t67 = *((char **)t66);
    xsi_vlog_generic_get_array_select_value(t58, 32, t57, t61, t64, 2, 1, t67, 32, 1);
    t68 = ((char*)((ng7)));
    memset(t69, 0, 8);
    xsi_vlog_unsigned_minus(t69, 32, t58, 32, t68, 32);
    t70 = (t1 + 9960);
    t73 = (t1 + 9960);
    t74 = (t73 + 72U);
    t75 = *((char **)t74);
    t76 = (t1 + 9960);
    t77 = (t76 + 64U);
    t78 = *((char **)t77);
    t79 = (t1 + 8360);
    t80 = (t79 + 56U);
    t81 = *((char **)t80);
    xsi_vlog_generic_convert_array_indices(t71, t72, t75, t78, 2, 1, t81, 32, 1);
    t82 = (t71 + 4);
    t83 = *((unsigned int *)t82);
    t84 = (!(t83));
    t85 = (t72 + 4);
    t86 = *((unsigned int *)t85);
    t87 = (!(t86));
    t88 = (t84 && t87);
    if (t88 == 1)
        goto LAB17;

LAB18:    goto LAB16;

LAB17:    t89 = *((unsigned int *)t71);
    t90 = *((unsigned int *)t72);
    t91 = (t89 - t90);
    t92 = (t91 + 1);
    xsi_vlogvar_assign_value(t70, t69, 0, *((unsigned int *)t72), t92);
    goto LAB18;

LAB21:    t28 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB23;

LAB22:    *((unsigned int *)t20) = 1;
    goto LAB23;

LAB25:    xsi_set_current_line(324, ng0);

LAB27:    xsi_set_current_line(325, ng0);
    t30 = (t1 + 10120);
    t32 = (t30 + 56U);
    t34 = *((char **)t32);
    t35 = (t1 + 10120);
    t48 = (t35 + 72U);
    t49 = *((char **)t48);
    t55 = (t1 + 10120);
    t56 = (t55 + 64U);
    t57 = *((char **)t56);
    t59 = (t1 + 10760);
    t60 = (t59 + 56U);
    t61 = *((char **)t60);
    t62 = (t1 + 8520);
    t63 = (t62 + 56U);
    t64 = *((char **)t63);
    memset(t33, 0, 8);
    xsi_vlog_signed_add(t33, 32, t61, 32, t64, 32);
    xsi_vlog_generic_get_array_select_value(t31, 16, t34, t49, t57, 2, 1, t33, 32, 1);
    t65 = (t1 + 10280);
    t66 = (t65 + 56U);
    t67 = *((char **)t66);
    t68 = (t1 + 10280);
    t70 = (t68 + 72U);
    t73 = *((char **)t70);
    t74 = (t1 + 10280);
    t75 = (t74 + 64U);
    t76 = *((char **)t75);
    t77 = (t1 + 10760);
    t78 = (t77 + 56U);
    t79 = *((char **)t78);
    t80 = (t1 + 8520);
    t81 = (t80 + 56U);
    t82 = *((char **)t81);
    memset(t69, 0, 8);
    xsi_vlog_signed_add(t69, 32, t79, 32, t82, 32);
    xsi_vlog_generic_get_array_select_value(t58, 16, t67, t73, t76, 2, 1, t69, 32, 1);
    memset(t71, 0, 8);
    if (*((unsigned int *)t31) != *((unsigned int *)t58))
        goto LAB29;

LAB28:    t85 = (t31 + 4);
    t93 = (t58 + 4);
    if (*((unsigned int *)t85) != *((unsigned int *)t93))
        goto LAB29;

LAB30:    t94 = (t71 + 4);
    t36 = *((unsigned int *)t94);
    t37 = (~(t36));
    t38 = *((unsigned int *)t71);
    t39 = (t38 & t37);
    t40 = (t39 != 0);
    if (t40 > 0)
        goto LAB31;

LAB32:    xsi_set_current_line(343, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 9320);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);

LAB33:    xsi_set_current_line(324, ng0);
    t4 = (t1 + 8520);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng7)));
    memset(t10, 0, 8);
    xsi_vlog_signed_add(t10, 32, t6, 32, t7, 32);
    t8 = (t1 + 8520);
    xsi_vlogvar_assign_value(t8, t10, 0, 0, 32);
    goto LAB19;

LAB29:    *((unsigned int *)t71) = 1;
    goto LAB30;

LAB31:    xsi_set_current_line(325, ng0);

LAB34:    xsi_set_current_line(326, ng0);
    t95 = (t1 + 8360);
    t96 = (t95 + 56U);
    t97 = *((char **)t96);
    t98 = (t1 + 8520);
    t99 = (t98 + 56U);
    t100 = *((char **)t99);
    t101 = (t1 + 2144);
    xsi_vlogfile_write(0, 0, 1, ng18, 3, t101, (char)119, t97, 32, (char)119, t100, 32);
    xsi_set_current_line(327, ng0);
    t4 = (t1 + 2144);
    xsi_vlogfile_write(0, 0, 1, ng19, 1, t4);
    xsi_set_current_line(328, ng0);
    xsi_set_current_line(328, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 8680);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);

LAB35:    t4 = (t1 + 8680);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 9960);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t11 = (t1 + 9960);
    t17 = (t11 + 72U);
    t18 = *((char **)t17);
    t19 = (t1 + 9960);
    t21 = (t19 + 64U);
    t22 = *((char **)t21);
    t23 = (t1 + 8360);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    xsi_vlog_generic_get_array_select_value(t10, 32, t9, t18, t22, 2, 1, t25, 32, 1);
    memset(t20, 0, 8);
    t26 = (t6 + 4);
    if (*((unsigned int *)t26) != 0)
        goto LAB37;

LAB36:    t27 = (t10 + 4);
    if (*((unsigned int *)t27) != 0)
        goto LAB37;

LAB40:    if (*((unsigned int *)t6) < *((unsigned int *)t10))
        goto LAB38;

LAB39:    t29 = (t20 + 4);
    t12 = *((unsigned int *)t29);
    t13 = (~(t12));
    t14 = *((unsigned int *)t20);
    t15 = (t14 & t13);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB41;

LAB42:    xsi_set_current_line(331, ng0);
    t4 = (t1 + 2144);
    xsi_vlogfile_write(0, 0, 1, ng14, 1, t4);
    xsi_set_current_line(332, ng0);
    t4 = (t1 + 2144);
    xsi_vlogfile_write(0, 0, 1, ng20, 1, t4);
    xsi_set_current_line(333, ng0);
    xsi_set_current_line(333, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 8680);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);

LAB44:    t4 = (t1 + 8680);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 9960);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t11 = (t1 + 9960);
    t17 = (t11 + 72U);
    t18 = *((char **)t17);
    t19 = (t1 + 9960);
    t21 = (t19 + 64U);
    t22 = *((char **)t21);
    t23 = (t1 + 8360);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    xsi_vlog_generic_get_array_select_value(t10, 32, t9, t18, t22, 2, 1, t25, 32, 1);
    memset(t20, 0, 8);
    t26 = (t6 + 4);
    if (*((unsigned int *)t26) != 0)
        goto LAB46;

LAB45:    t27 = (t10 + 4);
    if (*((unsigned int *)t27) != 0)
        goto LAB46;

LAB49:    if (*((unsigned int *)t6) < *((unsigned int *)t10))
        goto LAB47;

LAB48:    t29 = (t20 + 4);
    t12 = *((unsigned int *)t29);
    t13 = (~(t12));
    t14 = *((unsigned int *)t20);
    t15 = (t14 & t13);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB50;

LAB51:    xsi_set_current_line(336, ng0);
    t4 = (t1 + 2144);
    xsi_vlogfile_write(0, 0, 1, ng14, 1, t4);
    xsi_set_current_line(337, ng0);
    t4 = ((char*)((ng7)));
    t5 = (t1 + 9320);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(340, ng0);
    t4 = (t1 + 9960);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 9960);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t11 = (t1 + 9960);
    t17 = (t11 + 64U);
    t18 = *((char **)t17);
    t19 = (t1 + 8360);
    t21 = (t19 + 56U);
    t22 = *((char **)t21);
    xsi_vlog_generic_get_array_select_value(t10, 32, t6, t9, t18, 2, 1, t22, 32, 1);
    t23 = (t1 + 8520);
    xsi_vlogvar_assign_value(t23, t10, 0, 0, 32);
    goto LAB33;

LAB37:    t28 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB39;

LAB38:    *((unsigned int *)t20) = 1;
    goto LAB39;

LAB41:    xsi_set_current_line(328, ng0);

LAB43:    xsi_set_current_line(329, ng0);
    t30 = (t1 + 10120);
    t32 = (t30 + 56U);
    t34 = *((char **)t32);
    t35 = (t1 + 10120);
    t48 = (t35 + 72U);
    t49 = *((char **)t48);
    t55 = (t1 + 10120);
    t56 = (t55 + 64U);
    t57 = *((char **)t56);
    t59 = (t1 + 10760);
    t60 = (t59 + 56U);
    t61 = *((char **)t60);
    t62 = (t1 + 8680);
    t63 = (t62 + 56U);
    t64 = *((char **)t63);
    memset(t33, 0, 8);
    xsi_vlog_signed_add(t33, 32, t61, 32, t64, 32);
    xsi_vlog_generic_get_array_select_value(t31, 16, t34, t49, t57, 2, 1, t33, 32, 1);
    t65 = (t1 + 2144);
    xsi_vlogfile_write(0, 0, 1, ng13, 2, t65, (char)118, t31, 16);
    xsi_set_current_line(328, ng0);
    t4 = (t1 + 8680);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng7)));
    memset(t10, 0, 8);
    xsi_vlog_signed_add(t10, 32, t6, 32, t7, 32);
    t8 = (t1 + 8680);
    xsi_vlogvar_assign_value(t8, t10, 0, 0, 32);
    goto LAB35;

LAB46:    t28 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB48;

LAB47:    *((unsigned int *)t20) = 1;
    goto LAB48;

LAB50:    xsi_set_current_line(333, ng0);

LAB52:    xsi_set_current_line(334, ng0);
    t30 = (t1 + 10280);
    t32 = (t30 + 56U);
    t34 = *((char **)t32);
    t35 = (t1 + 10280);
    t48 = (t35 + 72U);
    t49 = *((char **)t48);
    t55 = (t1 + 10280);
    t56 = (t55 + 64U);
    t57 = *((char **)t56);
    t59 = (t1 + 10760);
    t60 = (t59 + 56U);
    t61 = *((char **)t60);
    t62 = (t1 + 8680);
    t63 = (t62 + 56U);
    t64 = *((char **)t63);
    memset(t33, 0, 8);
    xsi_vlog_signed_add(t33, 32, t61, 32, t64, 32);
    xsi_vlog_generic_get_array_select_value(t31, 16, t34, t49, t57, 2, 1, t33, 32, 1);
    t65 = (t1 + 2144);
    xsi_vlogfile_write(0, 0, 1, ng13, 2, t65, (char)118, t31, 16);
    xsi_set_current_line(333, ng0);
    t4 = (t1 + 8680);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng7)));
    memset(t10, 0, 8);
    xsi_vlog_signed_add(t10, 32, t6, 32, t7, 32);
    t8 = (t1 + 8680);
    xsi_vlogvar_assign_value(t8, t10, 0, 0, 32);
    goto LAB44;

LAB55:    t11 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB56;

LAB57:    xsi_set_current_line(346, ng0);

LAB60:    xsi_set_current_line(347, ng0);
    t18 = (t1 + 8360);
    t19 = (t18 + 56U);
    t21 = *((char **)t19);
    t22 = (t1 + 2144);
    xsi_vlogfile_write(0, 0, 1, ng21, 2, t22, (char)119, t21, 32);
    xsi_set_current_line(348, ng0);
    xsi_set_current_line(348, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 8680);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);

LAB61:    t4 = (t1 + 8680);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 9960);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t11 = (t1 + 9960);
    t17 = (t11 + 72U);
    t18 = *((char **)t17);
    t19 = (t1 + 9960);
    t21 = (t19 + 64U);
    t22 = *((char **)t21);
    t23 = (t1 + 8360);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    xsi_vlog_generic_get_array_select_value(t10, 32, t9, t18, t22, 2, 1, t25, 32, 1);
    memset(t20, 0, 8);
    t26 = (t6 + 4);
    if (*((unsigned int *)t26) != 0)
        goto LAB63;

LAB62:    t27 = (t10 + 4);
    if (*((unsigned int *)t27) != 0)
        goto LAB63;

LAB66:    if (*((unsigned int *)t6) < *((unsigned int *)t10))
        goto LAB64;

LAB65:    t29 = (t20 + 4);
    t12 = *((unsigned int *)t29);
    t13 = (~(t12));
    t14 = *((unsigned int *)t20);
    t15 = (t14 & t13);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB67;

LAB68:    xsi_set_current_line(351, ng0);
    t4 = (t1 + 2144);
    xsi_vlogfile_write(0, 0, 1, ng14, 1, t4);
    xsi_set_current_line(352, ng0);
    t4 = (t1 + 8200);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng7)));
    memset(t10, 0, 8);
    xsi_vlog_signed_add(t10, 32, t6, 32, t7, 32);
    t8 = (t1 + 8200);
    xsi_vlogvar_assign_value(t8, t10, 0, 0, 32);
    goto LAB59;

LAB63:    t28 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB65;

LAB64:    *((unsigned int *)t20) = 1;
    goto LAB65;

LAB67:    xsi_set_current_line(348, ng0);

LAB69:    xsi_set_current_line(349, ng0);
    t30 = (t1 + 10280);
    t32 = (t30 + 56U);
    t34 = *((char **)t32);
    t35 = (t1 + 10280);
    t48 = (t35 + 72U);
    t49 = *((char **)t48);
    t55 = (t1 + 10280);
    t56 = (t55 + 64U);
    t57 = *((char **)t56);
    t59 = (t1 + 10760);
    t60 = (t59 + 56U);
    t61 = *((char **)t60);
    t62 = (t1 + 8680);
    t63 = (t62 + 56U);
    t64 = *((char **)t63);
    memset(t33, 0, 8);
    xsi_vlog_signed_add(t33, 32, t61, 32, t64, 32);
    xsi_vlog_generic_get_array_select_value(t31, 16, t34, t49, t57, 2, 1, t33, 32, 1);
    t65 = (t1 + 2144);
    xsi_vlogfile_write(0, 0, 1, ng13, 2, t65, (char)118, t31, 16);
    xsi_set_current_line(348, ng0);
    t4 = (t1 + 8680);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng7)));
    memset(t10, 0, 8);
    xsi_vlog_signed_add(t10, 32, t6, 32, t7, 32);
    t8 = (t1 + 8680);
    xsi_vlogvar_assign_value(t8, t10, 0, 0, 32);
    goto LAB61;

}

static int sp_wait_for_busy(char *t1, char *t2)
{
    char t9[8];
    char t10[8];
    char t24[8];
    char t27[8];
    char t35[8];
    char t73[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t25;
    char *t26;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    char *t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    char *t69;
    char *t70;
    char *t71;
    char *t72;
    char *t74;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 2576);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(362, ng0);

LAB5:    xsi_set_current_line(363, ng0);
    t5 = (t1 + 12680);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t1 + 12520);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 32);
    xsi_set_current_line(364, ng0);

LAB6:    t4 = (t1 + 4600U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng7)));
    memset(t9, 0, 8);
    if (*((unsigned int *)t5) != *((unsigned int *)t4))
        goto LAB9;

LAB7:    t6 = (t5 + 4);
    t7 = (t4 + 4);
    if (*((unsigned int *)t6) != *((unsigned int *)t7))
        goto LAB9;

LAB8:    *((unsigned int *)t9) = 1;

LAB9:    memset(t10, 0, 8);
    t8 = (t9 + 4);
    t11 = *((unsigned int *)t8);
    t12 = (~(t11));
    t13 = *((unsigned int *)t9);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t8) != 0)
        goto LAB12;

LAB13:    t17 = (t10 + 4);
    t18 = *((unsigned int *)t10);
    t19 = (!(t18));
    t20 = *((unsigned int *)t17);
    t21 = (t19 || t20);
    if (t21 > 0)
        goto LAB14;

LAB15:    memcpy(t35, t10, 8);

LAB16:    t63 = (t35 + 4);
    t64 = *((unsigned int *)t63);
    t65 = (~(t64));
    t66 = *((unsigned int *)t35);
    t67 = (t66 & t65);
    t68 = (t67 != 0);
    if (t68 > 0)
        goto LAB27;

LAB28:
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB10:    *((unsigned int *)t10) = 1;
    goto LAB13;

LAB12:    t16 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB13;

LAB14:    t22 = (t1 + 4760U);
    t23 = *((char **)t22);
    t22 = ((char*)((ng7)));
    memset(t24, 0, 8);
    if (*((unsigned int *)t23) != *((unsigned int *)t22))
        goto LAB19;

LAB17:    t25 = (t23 + 4);
    t26 = (t22 + 4);
    if (*((unsigned int *)t25) != *((unsigned int *)t26))
        goto LAB19;

LAB18:    *((unsigned int *)t24) = 1;

LAB19:    memset(t27, 0, 8);
    t28 = (t24 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (~(t29));
    t31 = *((unsigned int *)t24);
    t32 = (t31 & t30);
    t33 = (t32 & 1U);
    if (t33 != 0)
        goto LAB20;

LAB21:    if (*((unsigned int *)t28) != 0)
        goto LAB22;

LAB23:    t36 = *((unsigned int *)t10);
    t37 = *((unsigned int *)t27);
    t38 = (t36 | t37);
    *((unsigned int *)t35) = t38;
    t39 = (t10 + 4);
    t40 = (t27 + 4);
    t41 = (t35 + 4);
    t42 = *((unsigned int *)t39);
    t43 = *((unsigned int *)t40);
    t44 = (t42 | t43);
    *((unsigned int *)t41) = t44;
    t45 = *((unsigned int *)t41);
    t46 = (t45 != 0);
    if (t46 == 1)
        goto LAB24;

LAB25:
LAB26:    goto LAB16;

LAB20:    *((unsigned int *)t27) = 1;
    goto LAB23;

LAB22:    t34 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB23;

LAB24:    t47 = *((unsigned int *)t35);
    t48 = *((unsigned int *)t41);
    *((unsigned int *)t35) = (t47 | t48);
    t49 = (t10 + 4);
    t50 = (t27 + 4);
    t51 = *((unsigned int *)t49);
    t52 = (~(t51));
    t53 = *((unsigned int *)t10);
    t54 = (t53 & t52);
    t55 = *((unsigned int *)t50);
    t56 = (~(t55));
    t57 = *((unsigned int *)t27);
    t58 = (t57 & t56);
    t59 = (~(t54));
    t60 = (~(t58));
    t61 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t61 & t59);
    t62 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t62 & t60);
    goto LAB26;

LAB27:    xsi_set_current_line(364, ng0);

LAB29:    xsi_set_current_line(365, ng0);
    t69 = (t1 + 12520);
    t70 = (t69 + 56U);
    t71 = *((char **)t70);
    t72 = ((char*)((ng7)));
    memset(t73, 0, 8);
    xsi_vlog_signed_minus(t73, 32, t71, 32, t72, 32);
    t74 = (t1 + 12520);
    xsi_vlogvar_assign_value(t74, t73, 0, 0, 32);
    xsi_set_current_line(366, ng0);
    t4 = (t1 + 12520);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng1)));
    memset(t9, 0, 8);
    xsi_vlog_signed_equal(t9, 32, t6, 32, t7, 32);
    t8 = (t9 + 4);
    t11 = *((unsigned int *)t8);
    t12 = (~(t11));
    t13 = *((unsigned int *)t9);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB30;

LAB31:
LAB32:    xsi_set_current_line(371, ng0);
    t4 = (t2 + 88U);
    t5 = *((char **)t4);
    t6 = (t5 + 0U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB34;
    goto LAB1;

LAB30:    xsi_set_current_line(367, ng0);

LAB33:    xsi_set_current_line(368, ng0);
    t16 = (t1 + 12840);
    t17 = (t16 + 56U);
    t22 = *((char **)t17);
    t23 = (t1 + 12680);
    t25 = (t23 + 56U);
    t26 = *((char **)t25);
    t28 = (t1 + 12680);
    t34 = (t28 + 56U);
    t39 = *((char **)t34);
    t40 = (t1 + 2576);
    xsi_vlogfile_write(1, 0, 0, ng22, 4, t40, (char)119, t22, 32, (char)119, t26, 32, (char)119, t39, 32);
    xsi_set_current_line(369, ng0);
    xsi_vlog_finish(1);
    goto LAB32;

LAB34:    goto LAB6;

}

static int sp_write_register(char *t1, char *t2)
{
    char t7[8];
    char t28[8];
    char t37[8];
    char t53[8];
    char t61[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    char *t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    char *t60;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    char *t65;
    char *t66;
    char *t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    char *t75;
    char *t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    char *t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    char *t98;
    char *t99;
    char *t100;
    char *t101;
    char *t102;
    char *t103;
    char *t104;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 3008);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(377, ng0);

LAB5:    xsi_set_current_line(378, ng0);
    t5 = ((char*)((ng1)));
    t6 = (t1 + 10440);
    t8 = (t1 + 10440);
    t9 = (t8 + 72U);
    t10 = *((char **)t9);
    t11 = (t1 + 10600);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    xsi_vlog_generic_convert_bit_index(t7, t10, 2, t13, 32, 1);
    t14 = (t7 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (!(t15));
    if (t16 == 1)
        goto LAB6;

LAB7:    xsi_set_current_line(379, ng0);
    t4 = (t1 + 10600);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = ((char*)((ng7)));
    memset(t7, 0, 8);
    xsi_vlog_signed_add(t7, 32, t6, 32, t8, 32);
    t9 = (t1 + 10600);
    xsi_vlogvar_assign_value(t9, t7, 0, 0, 32);
    xsi_set_current_line(381, ng0);
    t4 = (t2 + 88U);
    t5 = *((char **)t4);
    t6 = (t5 + 0U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB8;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB6:    xsi_vlogvar_assign_value(t6, t5, 0, *((unsigned int *)t7), 1);
    goto LAB7;

LAB8:    xsi_set_current_line(382, ng0);
    t4 = (t1 + 13320);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t1 + 13000);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t1 + 13160);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t1 + 3008);
    xsi_vlogfile_write(0, 0, 1, ng23, 4, t14, (char)119, t6, 32, (char)118, t10, 8, (char)118, t13, 16);
    xsi_set_current_line(383, ng0);
    t4 = (t1 + 13000);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t1 + 11560);
    xsi_vlogvar_assign_value(t8, t6, 0, 0, 8);
    xsi_set_current_line(384, ng0);
    t4 = ((char*)((ng7)));
    t5 = (t1 + 12040);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(385, ng0);
    t4 = (t1 + 13160);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t1 + 11720);
    xsi_vlogvar_assign_value(t8, t6, 0, 0, 16);
    xsi_set_current_line(387, ng0);
    t4 = (t2 + 88U);
    t5 = *((char **)t4);
    t6 = (t5 + 16U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB9;
    goto LAB1;

LAB9:    xsi_set_current_line(388, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 11560);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 8);
    xsi_set_current_line(389, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 12040);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(390, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 11720);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 16);
    xsi_set_current_line(392, ng0);

LAB10:    t4 = (t1 + 5880U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng7)));
    memset(t7, 0, 8);
    t6 = (t5 + 4);
    t8 = (t4 + 4);
    t15 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t4);
    t18 = (t15 ^ t17);
    t19 = *((unsigned int *)t6);
    t20 = *((unsigned int *)t8);
    t21 = (t19 ^ t20);
    t22 = (t18 | t21);
    t23 = *((unsigned int *)t6);
    t24 = *((unsigned int *)t8);
    t25 = (t23 | t24);
    t26 = (~(t25));
    t27 = (t22 & t26);
    if (t27 != 0)
        goto LAB14;

LAB11:    if (t25 != 0)
        goto LAB13;

LAB12:    *((unsigned int *)t7) = 1;

LAB14:    memset(t28, 0, 8);
    t10 = (t7 + 4);
    t29 = *((unsigned int *)t10);
    t30 = (~(t29));
    t31 = *((unsigned int *)t7);
    t32 = (t31 & t30);
    t33 = (t32 & 1U);
    if (t33 != 0)
        goto LAB15;

LAB16:    if (*((unsigned int *)t10) != 0)
        goto LAB17;

LAB18:    t12 = (t28 + 4);
    t34 = *((unsigned int *)t28);
    t35 = *((unsigned int *)t12);
    t36 = (t34 || t35);
    if (t36 > 0)
        goto LAB19;

LAB20:    memcpy(t61, t28, 8);

LAB21:    t92 = (t61 + 4);
    t93 = *((unsigned int *)t92);
    t94 = (~(t93));
    t95 = *((unsigned int *)t61);
    t96 = (t95 & t94);
    t97 = (t96 != 0);
    if (t97 > 0)
        goto LAB34;

LAB33:    t98 = (t2 + 88U);
    t99 = *((char **)t98);
    t100 = (t99 + 32U);
    xsi_wp_set_status(t100, 1);
    t101 = (t2 + 48U);
    *((char **)t101) = &&LAB10;
    goto LAB1;

LAB13:    t9 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB14;

LAB15:    *((unsigned int *)t28) = 1;
    goto LAB18;

LAB17:    t11 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB18;

LAB19:    t13 = (t1 + 6040U);
    t14 = *((char **)t13);
    t13 = ((char*)((ng7)));
    memset(t37, 0, 8);
    t38 = (t14 + 4);
    t39 = (t13 + 4);
    t40 = *((unsigned int *)t14);
    t41 = *((unsigned int *)t13);
    t42 = (t40 ^ t41);
    t43 = *((unsigned int *)t38);
    t44 = *((unsigned int *)t39);
    t45 = (t43 ^ t44);
    t46 = (t42 | t45);
    t47 = *((unsigned int *)t38);
    t48 = *((unsigned int *)t39);
    t49 = (t47 | t48);
    t50 = (~(t49));
    t51 = (t46 & t50);
    if (t51 != 0)
        goto LAB25;

LAB22:    if (t49 != 0)
        goto LAB24;

LAB23:    *((unsigned int *)t37) = 1;

LAB25:    memset(t53, 0, 8);
    t54 = (t37 + 4);
    t55 = *((unsigned int *)t54);
    t56 = (~(t55));
    t57 = *((unsigned int *)t37);
    t58 = (t57 & t56);
    t59 = (t58 & 1U);
    if (t59 != 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t54) != 0)
        goto LAB28;

LAB29:    t62 = *((unsigned int *)t28);
    t63 = *((unsigned int *)t53);
    t64 = (t62 & t63);
    *((unsigned int *)t61) = t64;
    t65 = (t28 + 4);
    t66 = (t53 + 4);
    t67 = (t61 + 4);
    t68 = *((unsigned int *)t65);
    t69 = *((unsigned int *)t66);
    t70 = (t68 | t69);
    *((unsigned int *)t67) = t70;
    t71 = *((unsigned int *)t67);
    t72 = (t71 != 0);
    if (t72 == 1)
        goto LAB30;

LAB31:
LAB32:    goto LAB21;

LAB24:    t52 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t52) = 1;
    goto LAB25;

LAB26:    *((unsigned int *)t53) = 1;
    goto LAB29;

LAB28:    t60 = (t53 + 4);
    *((unsigned int *)t53) = 1;
    *((unsigned int *)t60) = 1;
    goto LAB29;

LAB30:    t73 = *((unsigned int *)t61);
    t74 = *((unsigned int *)t67);
    *((unsigned int *)t61) = (t73 | t74);
    t75 = (t28 + 4);
    t76 = (t53 + 4);
    t77 = *((unsigned int *)t28);
    t78 = (~(t77));
    t79 = *((unsigned int *)t75);
    t80 = (~(t79));
    t81 = *((unsigned int *)t53);
    t82 = (~(t81));
    t83 = *((unsigned int *)t76);
    t84 = (~(t83));
    t16 = (t78 & t80);
    t85 = (t82 & t84);
    t86 = (~(t16));
    t87 = (~(t85));
    t88 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t88 & t86);
    t89 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t89 & t87);
    t90 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t90 & t86);
    t91 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t91 & t87);
    goto LAB32;

LAB34:    t102 = (t2 + 88U);
    t103 = *((char **)t102);
    t104 = (t103 + 32U);
    xsi_wp_set_status(t104, 0);
    goto LAB4;

}

static void Initial_54_0(char *t0)
{
    char t4[8];
    char t19[8];
    char t23[8];
    char t36[8];
    char t40[8];
    char t41[8];
    char t44[8];
    char t45[8];
    char t56[8];
    char t60[8];
    char t69[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t20;
    char *t21;
    char *t22;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t37;
    char *t38;
    char *t39;
    char *t42;
    char *t43;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    char *t57;
    char *t58;
    char *t59;
    char *t61;
    int t62;
    char *t63;
    int t64;
    int t65;
    int t66;
    int t67;
    char *t68;
    char *t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    char *t75;
    char *t76;
    char *t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    char *t81;
    char *t82;
    char *t83;
    char *t84;
    char *t85;
    char *t86;
    char *t87;
    char *t88;
    char *t89;
    char *t90;
    char *t91;
    char *t92;
    double t93;
    double t94;
    double t95;
    double t96;
    double t97;
    double t98;

LAB0:    t1 = (t0 + 14240U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(54, ng0);

LAB4:    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 10760);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 11080);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(57, ng0);
    *((int *)t4) = xsi_vlogfile_file_open_of_cname_ctype(ng24, ng25);
    t2 = (t4 + 4);
    *((int *)t2) = 0;
    t3 = (t0 + 9160);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 32);
    xsi_set_current_line(58, ng0);
    t2 = (t0 + 9160);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 4294967295U);
    if (t11 != 0)
        goto LAB8;

LAB6:    if (*((unsigned int *)t6) == 0)
        goto LAB5;

LAB7:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB8:    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB9;

LAB10:
LAB11:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 9160);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 9480);
    t12 = (t6 + 56U);
    t13 = *((char **)t12);
    xsi_vlog_bit_copy(t4, 0, t13, 0, 32);
    *((int *)t19) = xsi_vlogfile_fscanf(*((unsigned int *)t5), ng27, 2, t0, (char)119, t4, 32);
    t20 = (t19 + 4);
    *((int *)t20) = 0;
    t21 = (t0 + 9480);
    xsi_vlogvar_assign_value(t21, t4, 0, 0, 32);
    t22 = ((char*)((ng7)));
    memset(t23, 0, 8);
    xsi_vlog_signed_not_equal(t23, 32, t19, 32, t22, 32);
    t24 = (t23 + 4);
    t7 = *((unsigned int *)t24);
    t8 = (~(t7));
    t9 = *((unsigned int *)t23);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB13;

LAB14:
LAB15:    xsi_set_current_line(68, ng0);
    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 8360);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB17:    t2 = (t0 + 8360);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 9480);
    t12 = (t6 + 56U);
    t13 = *((char **)t12);
    memset(t4, 0, 8);
    xsi_vlog_signed_less(t4, 32, t5, 32, t13, 32);
    t20 = (t4 + 4);
    t7 = *((unsigned int *)t20);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB18;

LAB19:    xsi_set_current_line(93, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 10760);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(110, ng0);
    t2 = (t0 + 9160);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    xsi_vlogfile_fclose(*((unsigned int *)t5));
    xsi_set_current_line(114, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 7240);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(115, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 7400);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(116, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 7560);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(117, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 11240);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(118, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 11400);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(119, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 11560);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(120, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 11720);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);
    xsi_set_current_line(121, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 11880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(122, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 12040);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(123, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 10600);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(125, ng0);
    t2 = ((char*)((ng34)));
    t3 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (~(t7));
    t9 = *((unsigned int *)t2);
    t62 = (t9 & t8);
    t5 = (t0 + 22964);
    *((int *)t5) = t62;

LAB57:    t6 = (t0 + 22964);
    if (*((int *)t6) > 0)
        goto LAB58;

LAB59:    xsi_set_current_line(126, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 7560);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(128, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (~(t7));
    t9 = *((unsigned int *)t2);
    t62 = (t9 & t8);
    t5 = (t0 + 22968);
    *((int *)t5) = t62;

LAB61:    t6 = (t0 + 22968);
    if (*((int *)t6) > 0)
        goto LAB62;

LAB63:    xsi_set_current_line(129, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 7560);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(131, ng0);
    t2 = ((char*)((ng34)));
    t3 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (~(t7));
    t9 = *((unsigned int *)t2);
    t62 = (t9 & t8);
    t5 = (t0 + 22972);
    *((int *)t5) = t62;

LAB65:    t6 = (t0 + 22972);
    if (*((int *)t6) > 0)
        goto LAB66;

LAB67:    xsi_set_current_line(133, ng0);
    t2 = (t0 + 17024);
    t3 = (t0 + 14048);
    xsi_add_process_toexecute(0, t2, t3);
    t5 = (t0 + 17272);
    t6 = (t0 + 14048);
    xsi_add_process_toexecute(0, t5, t6);
    t12 = (t0 + 17520);
    t13 = (t0 + 14048);
    xsi_add_process_toexecute(0, t12, t13);
    t20 = (t0 + 12360);
    memset(t4, 0, 8);
    *((unsigned int *)t4) = 3;
    xsi_vlogvar_assign_value(t20, t4, 0, 0, 32);
    t21 = (t0 + 18080);
    *((int *)t21) = 1;
    *((char **)t1) = &&LAB69;

LAB1:    return;
LAB5:    *((unsigned int *)t4) = 1;
    goto LAB8;

LAB9:    xsi_set_current_line(58, ng0);

LAB12:    xsi_set_current_line(59, ng0);
    xsi_vlogfile_write(0, 0, 1, ng26, 1, t0);
    xsi_set_current_line(60, ng0);
    xsi_vlog_finish(1);
    goto LAB11;

LAB13:    xsi_set_current_line(63, ng0);

LAB16:    xsi_set_current_line(64, ng0);
    xsi_vlogfile_write(0, 0, 1, ng28, 1, t0);
    xsi_set_current_line(65, ng0);
    xsi_vlog_finish(1);
    goto LAB15;

LAB18:    xsi_set_current_line(68, ng0);

LAB20:    xsi_set_current_line(69, ng0);
    xsi_set_current_line(69, ng0);
    t21 = ((char*)((ng1)));
    t22 = (t0 + 8520);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 32);

LAB21:    t2 = (t0 + 8520);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng5)));
    memset(t4, 0, 8);
    xsi_vlog_signed_less(t4, 32, t5, 32, t6, 32);
    t12 = (t4 + 4);
    t7 = *((unsigned int *)t12);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB22;

LAB23:    xsi_set_current_line(75, ng0);
    t2 = (t0 + 9160);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 9960);
    t12 = (t6 + 56U);
    t13 = *((char **)t12);
    t20 = (t0 + 9960);
    t21 = (t20 + 72U);
    t22 = *((char **)t21);
    t24 = (t0 + 9960);
    t25 = (t24 + 64U);
    t26 = *((char **)t25);
    t27 = (t0 + 8360);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    xsi_vlog_generic_get_array_select_value(t19, 32, t13, t22, t26, 2, 1, t29, 32, 1);
    xsi_vlog_bit_copy(t4, 0, t19, 0, 32);
    *((int *)t23) = xsi_vlogfile_fscanf(*((unsigned int *)t5), ng31, 2, t0, (char)118, t4, 32);
    t30 = (t23 + 4);
    *((int *)t30) = 0;
    t31 = (t0 + 9960);
    t32 = (t0 + 9960);
    t33 = (t32 + 72U);
    t34 = *((char **)t33);
    t35 = (t0 + 9960);
    t37 = (t35 + 64U);
    t38 = *((char **)t37);
    t39 = (t0 + 8360);
    t42 = (t39 + 56U);
    t43 = *((char **)t42);
    xsi_vlog_generic_convert_array_indices(t36, t40, t34, t38, 2, 1, t43, 32, 1);
    t46 = (t36 + 4);
    t7 = *((unsigned int *)t46);
    t62 = (!(t7));
    t47 = (t40 + 4);
    t8 = *((unsigned int *)t47);
    t64 = (!(t8));
    t65 = (t62 && t64);
    if (t65 == 1)
        goto LAB30;

LAB31:    t48 = ((char*)((ng7)));
    memset(t41, 0, 8);
    xsi_vlog_signed_not_equal(t41, 32, t23, 32, t48, 32);
    t49 = (t41 + 4);
    t11 = *((unsigned int *)t49);
    t14 = (~(t11));
    t15 = *((unsigned int *)t41);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB32;

LAB33:
LAB34:    xsi_set_current_line(80, ng0);
    t2 = (t0 + 9800);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 9800);
    t12 = (t6 + 72U);
    t13 = *((char **)t12);
    t20 = (t0 + 9800);
    t21 = (t20 + 64U);
    t22 = *((char **)t21);
    t24 = ((char*)((ng5)));
    t25 = (t0 + 8360);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    memset(t19, 0, 8);
    xsi_vlog_signed_multiply(t19, 32, t24, 32, t27, 32);
    xsi_vlog_generic_get_array_select_value(t4, 32, t5, t13, t22, 2, 1, t19, 32, 1);
    t28 = ((char*)((ng1)));
    memset(t23, 0, 8);
    t29 = (t4 + 4);
    t30 = (t28 + 4);
    t7 = *((unsigned int *)t4);
    t8 = *((unsigned int *)t28);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t29);
    t11 = *((unsigned int *)t30);
    t14 = (t10 ^ t11);
    t15 = (t9 | t14);
    t16 = *((unsigned int *)t29);
    t17 = *((unsigned int *)t30);
    t18 = (t16 | t17);
    t71 = (~(t18));
    t72 = (t15 & t71);
    if (t72 != 0)
        goto LAB39;

LAB36:    if (t18 != 0)
        goto LAB38;

LAB37:    *((unsigned int *)t23) = 1;

LAB39:    t32 = (t23 + 4);
    t73 = *((unsigned int *)t32);
    t74 = (~(t73));
    t78 = *((unsigned int *)t23);
    t79 = (t78 & t74);
    t80 = (t79 != 0);
    if (t80 > 0)
        goto LAB40;

LAB41:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 11080);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 9960);
    t12 = (t6 + 56U);
    t13 = *((char **)t12);
    t20 = (t0 + 9960);
    t21 = (t20 + 72U);
    t22 = *((char **)t21);
    t24 = (t0 + 9960);
    t25 = (t24 + 64U);
    t26 = *((char **)t25);
    t27 = (t0 + 8360);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    xsi_vlog_generic_get_array_select_value(t4, 32, t13, t22, t26, 2, 1, t29, 32, 1);
    memset(t19, 0, 8);
    xsi_vlog_unsigned_add(t19, 32, t5, 32, t4, 32);
    t30 = ((char*)((ng7)));
    memset(t23, 0, 8);
    xsi_vlog_unsigned_minus(t23, 32, t19, 32, t30, 32);
    t31 = (t0 + 11080);
    xsi_vlogvar_assign_value(t31, t23, 0, 0, 32);

LAB42:    xsi_set_current_line(85, ng0);
    xsi_set_current_line(85, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 8520);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB43:    t2 = (t0 + 8520);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 9960);
    t12 = (t6 + 56U);
    t13 = *((char **)t12);
    t20 = (t0 + 9960);
    t21 = (t20 + 72U);
    t22 = *((char **)t21);
    t24 = (t0 + 9960);
    t25 = (t24 + 64U);
    t26 = *((char **)t25);
    t27 = (t0 + 8360);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    xsi_vlog_generic_get_array_select_value(t4, 32, t13, t22, t26, 2, 1, t29, 32, 1);
    memset(t19, 0, 8);
    t30 = (t5 + 4);
    if (*((unsigned int *)t30) != 0)
        goto LAB45;

LAB44:    t31 = (t4 + 4);
    if (*((unsigned int *)t31) != 0)
        goto LAB45;

LAB48:    if (*((unsigned int *)t5) < *((unsigned int *)t4))
        goto LAB46;

LAB47:    t33 = (t19 + 4);
    t7 = *((unsigned int *)t33);
    t8 = (~(t7));
    t9 = *((unsigned int *)t19);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB49;

LAB50:    xsi_set_current_line(90, ng0);
    t2 = (t0 + 10760);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 9960);
    t12 = (t6 + 56U);
    t13 = *((char **)t12);
    t20 = (t0 + 9960);
    t21 = (t20 + 72U);
    t22 = *((char **)t21);
    t24 = (t0 + 9960);
    t25 = (t24 + 64U);
    t26 = *((char **)t25);
    t27 = (t0 + 8360);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    xsi_vlog_generic_get_array_select_value(t4, 32, t13, t22, t26, 2, 1, t29, 32, 1);
    memset(t19, 0, 8);
    xsi_vlog_unsigned_add(t19, 32, t5, 32, t4, 32);
    t30 = (t0 + 10760);
    xsi_vlogvar_assign_value(t30, t19, 0, 0, 32);
    xsi_set_current_line(68, ng0);
    t2 = (t0 + 8360);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng7)));
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 32, t5, 32, t6, 32);
    t12 = (t0 + 8360);
    xsi_vlogvar_assign_value(t12, t4, 0, 0, 32);
    goto LAB17;

LAB22:    xsi_set_current_line(70, ng0);
    t13 = (t0 + 9160);
    t20 = (t13 + 56U);
    t21 = *((char **)t20);
    t22 = (t0 + 9800);
    t24 = (t22 + 56U);
    t25 = *((char **)t24);
    t26 = (t0 + 9800);
    t27 = (t26 + 72U);
    t28 = *((char **)t27);
    t29 = (t0 + 9800);
    t30 = (t29 + 64U);
    t31 = *((char **)t30);
    t32 = ((char*)((ng5)));
    t33 = (t0 + 8360);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    memset(t36, 0, 8);
    xsi_vlog_signed_multiply(t36, 32, t32, 32, t35, 32);
    t37 = (t0 + 8520);
    t38 = (t37 + 56U);
    t39 = *((char **)t38);
    memset(t40, 0, 8);
    xsi_vlog_signed_add(t40, 32, t36, 32, t39, 32);
    xsi_vlog_generic_get_array_select_value(t23, 16, t25, t28, t31, 2, 1, t40, 32, 1);
    xsi_vlog_bit_copy(t19, 0, t23, 0, 16);
    *((int *)t41) = xsi_vlogfile_fscanf(*((unsigned int *)t21), ng29, 2, t0, (char)118, t19, 16);
    t42 = (t41 + 4);
    *((int *)t42) = 0;
    t43 = (t0 + 9800);
    t46 = (t0 + 9800);
    t47 = (t46 + 72U);
    t48 = *((char **)t47);
    t49 = (t0 + 9800);
    t50 = (t49 + 64U);
    t51 = *((char **)t50);
    t52 = ((char*)((ng5)));
    t53 = (t0 + 8360);
    t54 = (t53 + 56U);
    t55 = *((char **)t54);
    memset(t56, 0, 8);
    xsi_vlog_signed_multiply(t56, 32, t52, 32, t55, 32);
    t57 = (t0 + 8520);
    t58 = (t57 + 56U);
    t59 = *((char **)t58);
    memset(t60, 0, 8);
    xsi_vlog_signed_add(t60, 32, t56, 32, t59, 32);
    xsi_vlog_generic_convert_array_indices(t44, t45, t48, t51, 2, 1, t60, 32, 1);
    t61 = (t44 + 4);
    t14 = *((unsigned int *)t61);
    t62 = (!(t14));
    t63 = (t45 + 4);
    t15 = *((unsigned int *)t63);
    t64 = (!(t15));
    t65 = (t62 && t64);
    if (t65 == 1)
        goto LAB24;

LAB25:    t68 = ((char*)((ng7)));
    memset(t69, 0, 8);
    xsi_vlog_signed_not_equal(t69, 32, t41, 32, t68, 32);
    t70 = (t69 + 4);
    t18 = *((unsigned int *)t70);
    t71 = (~(t18));
    t72 = *((unsigned int *)t69);
    t73 = (t72 & t71);
    t74 = (t73 != 0);
    if (t74 > 0)
        goto LAB26;

LAB27:
LAB28:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 8520);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng7)));
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 32, t5, 32, t6, 32);
    t12 = (t0 + 8520);
    xsi_vlogvar_assign_value(t12, t4, 0, 0, 32);
    goto LAB21;

LAB24:    t16 = *((unsigned int *)t44);
    t17 = *((unsigned int *)t45);
    t66 = (t16 - t17);
    t67 = (t66 + 1);
    xsi_vlogvar_assign_value(t43, t19, 0, *((unsigned int *)t45), t67);
    goto LAB25;

LAB26:    xsi_set_current_line(70, ng0);

LAB29:    xsi_set_current_line(71, ng0);
    t75 = (t0 + 8360);
    t76 = (t75 + 56U);
    t77 = *((char **)t76);
    xsi_vlogfile_write(0, 0, 1, ng30, 2, t0, (char)119, t77, 32);
    xsi_set_current_line(72, ng0);
    xsi_vlog_finish(1);
    goto LAB28;

LAB30:    t9 = *((unsigned int *)t36);
    t10 = *((unsigned int *)t40);
    t66 = (t9 - t10);
    t67 = (t66 + 1);
    xsi_vlogvar_assign_value(t31, t4, 0, *((unsigned int *)t40), t67);
    goto LAB31;

LAB32:    xsi_set_current_line(75, ng0);

LAB35:    xsi_set_current_line(76, ng0);
    t50 = (t0 + 8360);
    t51 = (t50 + 56U);
    t52 = *((char **)t51);
    xsi_vlogfile_write(0, 0, 1, ng32, 2, t0, (char)119, t52, 32);
    xsi_set_current_line(77, ng0);
    xsi_vlog_finish(1);
    goto LAB34;

LAB38:    t31 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB39;

LAB40:    xsi_set_current_line(81, ng0);
    t33 = (t0 + 11080);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    t37 = (t0 + 9960);
    t38 = (t37 + 56U);
    t39 = *((char **)t38);
    t42 = (t0 + 9960);
    t43 = (t42 + 72U);
    t46 = *((char **)t43);
    t47 = (t0 + 9960);
    t48 = (t47 + 64U);
    t49 = *((char **)t48);
    t50 = (t0 + 8360);
    t51 = (t50 + 56U);
    t52 = *((char **)t51);
    xsi_vlog_generic_get_array_select_value(t36, 32, t39, t46, t49, 2, 1, t52, 32, 1);
    memset(t40, 0, 8);
    xsi_vlog_unsigned_add(t40, 32, t35, 32, t36, 32);
    t53 = (t0 + 11080);
    xsi_vlogvar_assign_value(t53, t40, 0, 0, 32);
    goto LAB42;

LAB45:    t32 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB47;

LAB46:    *((unsigned int *)t19) = 1;
    goto LAB47;

LAB49:    xsi_set_current_line(86, ng0);
    t34 = (t0 + 9160);
    t35 = (t34 + 56U);
    t37 = *((char **)t35);
    t38 = (t0 + 9640);
    t39 = (t38 + 56U);
    t42 = *((char **)t39);
    t43 = (t0 + 9640);
    t46 = (t43 + 72U);
    t47 = *((char **)t46);
    t48 = (t0 + 9640);
    t49 = (t48 + 64U);
    t50 = *((char **)t49);
    t51 = (t0 + 10760);
    t52 = (t51 + 56U);
    t53 = *((char **)t52);
    t54 = (t0 + 8520);
    t55 = (t54 + 56U);
    t57 = *((char **)t55);
    memset(t40, 0, 8);
    xsi_vlog_signed_add(t40, 32, t53, 32, t57, 32);
    xsi_vlog_generic_get_array_select_value(t36, 8, t42, t47, t50, 2, 1, t40, 32, 1);
    xsi_vlog_bit_copy(t23, 0, t36, 0, 8);
    *((int *)t41) = xsi_vlogfile_fscanf(*((unsigned int *)t37), ng29, 2, t0, (char)118, t23, 8);
    t58 = (t41 + 4);
    *((int *)t58) = 0;
    t59 = (t0 + 9640);
    t61 = (t0 + 9640);
    t63 = (t61 + 72U);
    t68 = *((char **)t63);
    t70 = (t0 + 9640);
    t75 = (t70 + 64U);
    t76 = *((char **)t75);
    t77 = (t0 + 10760);
    t81 = (t77 + 56U);
    t82 = *((char **)t81);
    t83 = (t0 + 8520);
    t84 = (t83 + 56U);
    t85 = *((char **)t84);
    memset(t56, 0, 8);
    xsi_vlog_signed_add(t56, 32, t82, 32, t85, 32);
    xsi_vlog_generic_convert_array_indices(t44, t45, t68, t76, 2, 1, t56, 32, 1);
    t86 = (t44 + 4);
    t14 = *((unsigned int *)t86);
    t62 = (!(t14));
    t87 = (t45 + 4);
    t15 = *((unsigned int *)t87);
    t64 = (!(t15));
    t65 = (t62 && t64);
    if (t65 == 1)
        goto LAB51;

LAB52:    t88 = ((char*)((ng7)));
    memset(t60, 0, 8);
    xsi_vlog_signed_not_equal(t60, 32, t41, 32, t88, 32);
    t89 = (t60 + 4);
    t18 = *((unsigned int *)t89);
    t71 = (~(t18));
    t72 = *((unsigned int *)t60);
    t73 = (t72 & t71);
    t74 = (t73 != 0);
    if (t74 > 0)
        goto LAB53;

LAB54:
LAB55:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 8520);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng7)));
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 32, t5, 32, t6, 32);
    t12 = (t0 + 8520);
    xsi_vlogvar_assign_value(t12, t4, 0, 0, 32);
    goto LAB43;

LAB51:    t16 = *((unsigned int *)t44);
    t17 = *((unsigned int *)t45);
    t66 = (t16 - t17);
    t67 = (t66 + 1);
    xsi_vlogvar_assign_value(t59, t23, 0, *((unsigned int *)t45), t67);
    goto LAB52;

LAB53:    xsi_set_current_line(86, ng0);

LAB56:    xsi_set_current_line(87, ng0);
    t90 = (t0 + 8360);
    t91 = (t90 + 56U);
    t92 = *((char **)t91);
    xsi_vlogfile_write(0, 0, 1, ng33, 2, t0, (char)119, t92, 32);
    xsi_set_current_line(88, ng0);
    xsi_vlog_finish(1);
    goto LAB55;

LAB58:    xsi_set_current_line(125, ng0);
    t12 = (t0 + 18032);
    *((int *)t12) = 1;
    t13 = (t0 + 14272);
    *((char **)t13) = t12;
    *((char **)t1) = &&LAB60;
    goto LAB1;

LAB60:    t2 = (t0 + 22964);
    t62 = *((int *)t2);
    *((int *)t2) = (t62 - 1);
    goto LAB57;

LAB62:    xsi_set_current_line(128, ng0);
    t12 = (t0 + 18048);
    *((int *)t12) = 1;
    t13 = (t0 + 14272);
    *((char **)t13) = t12;
    *((char **)t1) = &&LAB64;
    goto LAB1;

LAB64:    t2 = (t0 + 22968);
    t62 = *((int *)t2);
    *((int *)t2) = (t62 - 1);
    goto LAB61;

LAB66:    xsi_set_current_line(131, ng0);
    t12 = (t0 + 18064);
    *((int *)t12) = 1;
    t13 = (t0 + 14272);
    *((char **)t13) = t12;
    *((char **)t1) = &&LAB68;
    goto LAB1;

LAB68:    t2 = (t0 + 22972);
    t62 = *((int *)t2);
    *((int *)t2) = (t62 - 1);
    goto LAB65;

LAB69:    t22 = (t0 + 12360);
    t24 = (t22 + 56U);
    t25 = *((char **)t24);
    if (*((int *)t25) > 0)
        goto LAB70;

LAB71:    t27 = (t0 + 14048);
    xsi_clean_active_fork_process_list(t27);
    xsi_set_current_line(149, ng0);
    t2 = ((char*)((ng35)));
    t3 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (~(t7));
    t9 = *((unsigned int *)t2);
    t62 = (t9 & t8);
    t5 = (t0 + 22976);
    *((int *)t5) = t62;

LAB72:    t6 = (t0 + 22976);
    if (*((int *)t6) > 0)
        goto LAB73;

LAB74:    xsi_set_current_line(150, ng0);
    t2 = (t0 + 14048);
    t3 = (t0 + 2144);
    t5 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t5);

LAB78:    t6 = (t0 + 14144);
    t12 = *((char **)t6);
    t13 = (t12 + 80U);
    t20 = *((char **)t13);
    t21 = (t20 + 272U);
    t22 = *((char **)t21);
    t24 = (t22 + 0U);
    t25 = *((char **)t24);
    t62 = ((int  (*)(char *, char *))t25)(t0, t12);

LAB80:    if (t62 != 0)
        goto LAB81;

LAB76:    t12 = (t0 + 2144);
    xsi_vlog_subprogram_popinvocation(t12);

LAB77:    t26 = (t0 + 14144);
    t27 = *((char **)t26);
    t26 = (t0 + 2144);
    t28 = (t0 + 14048);
    t29 = 0;
    xsi_delete_subprogram_invocation(t26, t27, t0, t28, t29);
    xsi_set_current_line(152, ng0);
    t2 = (t0 + 8200);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 9480);
    t12 = (t6 + 56U);
    t13 = *((char **)t12);
    memset(t4, 0, 8);
    xsi_vlog_signed_equal(t4, 32, t5, 32, t13, 32);
    t20 = (t4 + 4);
    t7 = *((unsigned int *)t20);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB82;

LAB83:
LAB84:    xsi_set_current_line(155, ng0);
    t2 = (t0 + 8200);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t93 = xsi_vlog_convert_to_real(t5, 32, 1);
    t94 = (t93 * 1.0000000000000000);
    t6 = (t0 + 9480);
    t12 = (t6 + 56U);
    t13 = *((char **)t12);
    t95 = xsi_vlog_convert_to_real(t13, 32, 1);
    t96 = (t94 / t95);
    t20 = (t0 + 7720);
    xsi_vlogvar_assign_value_double(t20, t96, 0);
    xsi_set_current_line(156, ng0);
    t2 = (t0 + 8200);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t93 = xsi_vlog_convert_to_real(t5, 32, 1);
    t94 = (t93 * 1.0000000000000000);
    t6 = (t0 + 9480);
    t12 = (t6 + 56U);
    t13 = *((char **)t12);
    t95 = xsi_vlog_convert_to_real(t13, 32, 1);
    t96 = (t94 / t95);
    t20 = (t0 + 7880);
    xsi_vlogvar_assign_value_double(t20, t96, 0);
    xsi_set_current_line(159, ng0);
    *((int *)t4) = xsi_vlogfile_file_open_of_cname(ng37);
    t2 = (t4 + 4);
    *((int *)t2) = 0;
    t3 = (t0 + 8040);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 32);
    xsi_set_current_line(160, ng0);
    t2 = (t0 + 8040);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng39)));
    t93 = xsi_vlog_convert_to_real(t6, 32, 1);
    t12 = (t0 + 7880);
    t13 = (t12 + 56U);
    t20 = *((char **)t13);
    t94 = *((double *)t20);
    t95 = (t94 - 1.0000000000000000);
    t96 = (t93 * t95);
    *((double *)t4) = t96;
    t21 = (t0 + 8200);
    t22 = (t21 + 56U);
    t24 = *((char **)t22);
    t25 = (t0 + 9480);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    t28 = (t0 + 7720);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    t97 = *((double *)t30);
    t98 = (100.00000000000000 * t97);
    *((double *)t19) = t98;
    xsi_vlogfile_fwrite(*((unsigned int *)t5), 0, 0, 1, ng38, 5, t0, (char)114, t4, 64, (char)119, t24, 32, (char)119, t27, 32, (char)114, t19, 64);
    xsi_set_current_line(161, ng0);
    t2 = (t0 + 8040);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    xsi_vlogfile_fclose(*((unsigned int *)t5));
    xsi_set_current_line(163, ng0);
    xsi_vlog_finish(1);
    goto LAB1;

LAB70:    t26 = (t0 + 18080);
    *((int *)t26) = 1;
    goto LAB1;

LAB73:    xsi_set_current_line(149, ng0);
    t12 = (t0 + 18096);
    *((int *)t12) = 1;
    t13 = (t0 + 14272);
    *((char **)t13) = t12;
    *((char **)t1) = &&LAB75;
    goto LAB1;

LAB75:    t2 = (t0 + 22976);
    t62 = *((int *)t2);
    *((int *)t2) = (t62 - 1);
    goto LAB72;

LAB79:;
LAB81:    t6 = (t0 + 14240U);
    *((char **)t6) = &&LAB78;
    goto LAB1;

LAB82:    xsi_set_current_line(153, ng0);
    xsi_vlogfile_write(0, 0, 1, ng36, 1, t0);
    goto LAB84;

}

static void Always_398_1(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;

LAB0:    t1 = (t0 + 14488U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(398, ng0);
    t2 = (t0 + 14296);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(398, ng0);
    t4 = (t0 + 7400);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t3, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB8;

LAB6:    if (*((unsigned int *)t7) == 0)
        goto LAB5;

LAB7:    t13 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t13) = 1;

LAB8:    t14 = (t0 + 7400);
    xsi_vlogvar_assign_value(t14, t3, 0, 0, 1);
    goto LAB2;

LAB5:    *((unsigned int *)t3) = 1;
    goto LAB8;

}

static void Always_399_2(char *t0)
{
    char t12[8];
    char *t1;
    char *t2;
    char *t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    int t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    unsigned int t13;
    unsigned int t14;

LAB0:    t1 = (t0 + 14736U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(399, ng0);

LAB4:    xsi_set_current_line(400, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t2);
    t7 = (t6 & t5);
    t8 = (t0 + 22980);
    *((int *)t8) = t7;

LAB5:    t9 = (t0 + 22980);
    if (*((int *)t9) > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(401, ng0);
    t2 = (t0 + 7240);
    t3 = (t2 + 56U);
    t8 = *((char **)t3);
    memset(t12, 0, 8);
    t9 = (t8 + 4);
    t4 = *((unsigned int *)t9);
    t5 = (~(t4));
    t6 = *((unsigned int *)t8);
    t13 = (t6 & t5);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB12;

LAB10:    if (*((unsigned int *)t9) == 0)
        goto LAB9;

LAB11:    t10 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t10) = 1;

LAB12:    t11 = (t0 + 7240);
    xsi_vlogvar_assign_value(t11, t12, 0, 0, 1);
    goto LAB2;

LAB6:    xsi_set_current_line(400, ng0);
    t10 = (t0 + 18288);
    *((int *)t10) = 1;
    t11 = (t0 + 14768);
    *((char **)t11) = t10;
    *((char **)t1) = &&LAB8;

LAB1:    return;
LAB8:    t2 = (t0 + 22980);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB5;

LAB9:    *((unsigned int *)t12) = 1;
    goto LAB12;

}

static void Cont_404_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 14984U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(404, ng0);
    t2 = (t0 + 7400);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 18528);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 0);
    t18 = (t0 + 18304);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_405_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 15232U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(405, ng0);
    t2 = (t0 + 7240);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 18592);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 0);
    t18 = (t0 + 18320);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_406_5(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 15480U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(406, ng0);
    t2 = (t0 + 7560);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 18656);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 0);
    t18 = (t0 + 18336);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_407_6(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 15728U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(407, ng0);
    t2 = (t0 + 11240);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 18720);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31);
    t10 = (t0 + 18352);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Cont_408_7(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 15976U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(408, ng0);
    t2 = (t0 + 11400);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 18784);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 0);
    t18 = (t0 + 18368);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_409_8(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 16224U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(409, ng0);
    t2 = (t0 + 11560);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 18848);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 255U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 7);
    t18 = (t0 + 18384);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_410_9(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 16472U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(410, ng0);
    t2 = (t0 + 11720);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 18912);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 65535U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 15);
    t18 = (t0 + 18400);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_411_10(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 16720U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(411, ng0);
    t2 = (t0 + 11880);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 18976);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 0);
    t18 = (t0 + 18416);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_412_11(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 16968U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(412, ng0);
    t2 = (t0 + 12040);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 19040);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 0);
    t18 = (t0 + 18432);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Forked_134_12(char *t0)
{
    char t18[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    unsigned int t19;

LAB0:    t1 = (t0 + 17216U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 17024);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(134, ng0);

LAB6:    xsi_set_current_line(135, ng0);
    t3 = (t0 + 18448);
    *((int *)t3) = 1;
    t4 = (t0 + 17248);
    *((char **)t4) = t3;
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB5:    t2 = (t0 + 12360);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t18, t4, 8);
    t19 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t19 - 1);
    xsi_vlogvar_assign_value(t2, t18, 0, 0, 32);
    goto LAB2;

LAB7:    xsi_set_current_line(136, ng0);
    t2 = (t0 + 17024);
    t3 = (t0 + 848);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB10:    t5 = (t0 + 17120);
    t6 = *((char **)t5);
    t7 = (t6 + 80U);
    t8 = *((char **)t7);
    t9 = (t8 + 272U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t13 = ((int  (*)(char *, char *))t12)(t0, t6);

LAB12:    if (t13 != 0)
        goto LAB13;

LAB8:    t6 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t6);

LAB9:    t14 = (t0 + 17120);
    t15 = *((char **)t14);
    t14 = (t0 + 848);
    t16 = (t0 + 17024);
    t17 = 0;
    xsi_delete_subprogram_invocation(t14, t15, t0, t16, t17);
    goto LAB5;

LAB11:;
LAB13:    t5 = (t0 + 17216U);
    *((char **)t5) = &&LAB10;
    goto LAB1;

}

static void Forked_139_13(char *t0)
{
    char t19[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    int t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t20;

LAB0:    t1 = (t0 + 17464U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 17272);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(139, ng0);

LAB6:    xsi_set_current_line(140, ng0);
    t3 = (t0 + 17272);
    t4 = (t0 + 1712);
    t5 = xsi_create_subprogram_invocation(t3, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);

LAB9:    t6 = (t0 + 17368);
    t7 = *((char **)t6);
    t8 = (t7 + 80U);
    t9 = *((char **)t8);
    t10 = (t9 + 272U);
    t11 = *((char **)t10);
    t12 = (t11 + 0U);
    t13 = *((char **)t12);
    t14 = ((int  (*)(char *, char *))t13)(t0, t7);

LAB11:    if (t14 != 0)
        goto LAB12;

LAB7:    t7 = (t0 + 1712);
    xsi_vlog_subprogram_popinvocation(t7);

LAB8:    t15 = (t0 + 17368);
    t16 = *((char **)t15);
    t15 = (t0 + 1712);
    t17 = (t0 + 17272);
    t18 = 0;
    xsi_delete_subprogram_invocation(t15, t16, t0, t17, t18);

LAB5:    t2 = (t0 + 12360);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t19, t4, 8);
    t20 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t20 - 1);
    xsi_vlogvar_assign_value(t2, t19, 0, 0, 32);
    goto LAB2;

LAB10:;
LAB12:    t6 = (t0 + 17464U);
    *((char **)t6) = &&LAB9;
    goto LAB1;

}

static void Forked_143_14(char *t0)
{
    char t19[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    int t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t20;

LAB0:    t1 = (t0 + 17712U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 17520);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(143, ng0);

LAB6:    xsi_set_current_line(144, ng0);
    t3 = (t0 + 17520);
    t4 = (t0 + 1280);
    t5 = xsi_create_subprogram_invocation(t3, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);

LAB9:    t6 = (t0 + 17616);
    t7 = *((char **)t6);
    t8 = (t7 + 80U);
    t9 = *((char **)t8);
    t10 = (t9 + 272U);
    t11 = *((char **)t10);
    t12 = (t11 + 0U);
    t13 = *((char **)t12);
    t14 = ((int  (*)(char *, char *))t13)(t0, t7);

LAB11:    if (t14 != 0)
        goto LAB12;

LAB7:    t7 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t7);

LAB8:    t15 = (t0 + 17616);
    t16 = *((char **)t15);
    t15 = (t0 + 1280);
    t17 = (t0 + 17520);
    t18 = 0;
    xsi_delete_subprogram_invocation(t15, t16, t0, t17, t18);

LAB5:    t2 = (t0 + 12360);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t19, t4, 8);
    t20 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t20 - 1);
    xsi_vlogvar_assign_value(t2, t19, 0, 0, 32);
    goto LAB2;

LAB10:;
LAB12:    t6 = (t0 + 17712U);
    *((char **)t6) = &&LAB9;
    goto LAB1;

}


extern void tester_m_00000000000468845717_2613777659_init()
{
	static char *pe[] = {(void *)Initial_54_0,(void *)Always_398_1,(void *)Always_399_2,(void *)Cont_404_3,(void *)Cont_405_4,(void *)Cont_406_5,(void *)Cont_407_6,(void *)Cont_408_7,(void *)Cont_409_8,(void *)Cont_410_9,(void *)Cont_411_10,(void *)Cont_412_11,(void *)Forked_134_12,(void *)Forked_139_13,(void *)Forked_143_14};
	static char *se[] = {(void *)sp_drive_instruction,(void *)sp_monitor_ref,(void *)sp_monitor_tst,(void *)sp_end_of_test_checks,(void *)sp_wait_for_busy,(void *)sp_write_register};
	xsi_register_didat("tester_m_00000000000468845717_2613777659", "isim/tester.exe.sim/tester/m_00000000000468845717_2613777659.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
