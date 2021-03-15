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
static const char *ng0 = "C:/Users/Alexandra/Desktop/tema2_task3_integration_tester/tema2_task3_checker/build/bin/reference/ref_zigzag_decryption.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static int ng3[] = {2, 0};
static int ng4[] = {3, 0};
static int ng5[] = {4, 0};
static unsigned int ng6[] = {250U, 0U};
static unsigned int ng7[] = {0U, 0U};



static void Always_72_0(char *t0)
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

LAB0:    t1 = (t0 + 6912U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(72, ng0);
    t2 = (t0 + 7480);
    *((int *)t2) = 1;
    t3 = (t0 + 6944);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(72, ng0);

LAB5:    xsi_set_current_line(73, ng0);
    t4 = (t0 + 1752U);
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

LAB11:    xsi_set_current_line(81, ng0);

LAB14:    xsi_set_current_line(82, ng0);
    t2 = (t0 + 2072U);
    t3 = *((char **)t2);
    t2 = (t0 + 3592);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(83, ng0);
    t2 = (t0 + 1912U);
    t3 = *((char **)t2);
    t2 = (t0 + 3432);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 8, 0LL);
    xsi_set_current_line(84, ng0);
    t2 = (t0 + 2232U);
    t3 = *((char **)t2);
    t2 = (t0 + 3752);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 8, 0LL);
    xsi_set_current_line(86, ng0);
    t2 = (t0 + 3272);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3112);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 0LL);
    xsi_set_current_line(87, ng0);
    t2 = (t0 + 4232);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4072);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 0LL);
    xsi_set_current_line(88, ng0);
    t2 = (t0 + 5992);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5832);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 0LL);

LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(73, ng0);

LAB13:    xsi_set_current_line(74, ng0);
    t28 = ((char*)((ng1)));
    t29 = (t0 + 3112);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 32, 0LL);
    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3592);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(76, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3432);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3752);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5832);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    goto LAB12;

}

static void Always_92_1(char *t0)
{
    char t6[8];
    char t7[8];
    char t25[8];
    char t61[8];
    char t68[8];
    char t109[8];
    char t110[8];
    char t129[16];
    char t130[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    unsigned int t14;
    int t15;
    char *t16;
    unsigned int t17;
    int t18;
    int t19;
    unsigned int t20;
    unsigned int t21;
    int t22;
    int t23;
    unsigned int t24;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    unsigned int t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
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
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    char *t67;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;
    char *t73;
    char *t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    char *t82;
    char *t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    char *t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    char *t104;
    char *t105;
    char *t106;
    char *t107;
    char *t108;
    char *t111;
    char *t112;
    char *t113;
    char *t114;
    char *t115;
    char *t116;
    char *t117;
    char *t118;
    char *t119;
    char *t120;
    unsigned int t121;
    char *t122;
    unsigned int t123;
    int t124;
    unsigned int t125;
    unsigned int t126;
    int t127;
    int t128;

LAB0:    t1 = (t0 + 7160U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(92, ng0);
    t2 = (t0 + 7496);
    *((int *)t2) = 1;
    t3 = (t0 + 7192);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(92, ng0);

LAB5:    xsi_set_current_line(93, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 2792);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(94, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2632);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(95, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2952);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(96, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4552);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(97, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4712);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(98, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4872);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(99, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5032);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(100, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5192);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(101, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5672);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(102, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5512);
    t4 = (t0 + 5512);
    t5 = (t4 + 72U);
    t8 = *((char **)t5);
    t9 = (t0 + 5512);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng1)));
    xsi_vlog_generic_convert_array_indices(t6, t7, t8, t11, 1, 1, t12, 32, 1);
    t13 = (t6 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (!(t14));
    t16 = (t7 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t15 && t18);
    if (t19 == 1)
        goto LAB6;

LAB7:    xsi_set_current_line(103, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 5512);
    t4 = (t0 + 5512);
    t5 = (t4 + 72U);
    t8 = *((char **)t5);
    t9 = (t0 + 5512);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng2)));
    xsi_vlog_generic_convert_array_indices(t6, t7, t8, t11, 1, 1, t12, 32, 1);
    t13 = (t6 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (!(t14));
    t16 = (t7 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t15 && t18);
    if (t19 == 1)
        goto LAB8;

LAB9:    xsi_set_current_line(104, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5512);
    t4 = (t0 + 5512);
    t5 = (t4 + 72U);
    t8 = *((char **)t5);
    t9 = (t0 + 5512);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng3)));
    xsi_vlog_generic_convert_array_indices(t6, t7, t8, t11, 1, 1, t12, 32, 1);
    t13 = (t6 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (!(t14));
    t16 = (t7 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t15 && t18);
    if (t19 == 1)
        goto LAB10;

LAB11:    xsi_set_current_line(105, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 5512);
    t4 = (t0 + 5512);
    t5 = (t4 + 72U);
    t8 = *((char **)t5);
    t9 = (t0 + 5512);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng4)));
    xsi_vlog_generic_convert_array_indices(t6, t7, t8, t11, 1, 1, t12, 32, 1);
    t13 = (t6 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (!(t14));
    t16 = (t7 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t15 && t18);
    if (t19 == 1)
        goto LAB12;

LAB13:    xsi_set_current_line(107, ng0);
    xsi_set_current_line(107, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4392);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB14:    t2 = (t0 + 4392);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t8 = (t6 + 4);
    t14 = *((unsigned int *)t8);
    t17 = (~(t14));
    t20 = *((unsigned int *)t6);
    t21 = (t20 & t17);
    t24 = (t21 != 0);
    if (t24 > 0)
        goto LAB15;

LAB16:    xsi_set_current_line(110, ng0);
    t2 = (t0 + 3112);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB19:    t5 = ((char*)((ng1)));
    t15 = xsi_vlog_signed_case_compare(t4, 32, t5, 32);
    if (t15 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng2)));
    t15 = xsi_vlog_signed_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng3)));
    t15 = xsi_vlog_signed_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB24;

LAB25:    t2 = ((char*)((ng5)));
    t15 = xsi_vlog_signed_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB26;

LAB27:    t2 = ((char*)((ng4)));
    t15 = xsi_vlog_signed_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB28;

LAB29:
LAB30:    goto LAB2;

LAB6:    t20 = *((unsigned int *)t6);
    t21 = *((unsigned int *)t7);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t7), t23);
    goto LAB7;

LAB8:    t20 = *((unsigned int *)t6);
    t21 = *((unsigned int *)t7);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t7), t23);
    goto LAB9;

LAB10:    t20 = *((unsigned int *)t6);
    t21 = *((unsigned int *)t7);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t7), t23);
    goto LAB11;

LAB12:    t20 = *((unsigned int *)t6);
    t21 = *((unsigned int *)t7);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t7), t23);
    goto LAB13;

LAB15:    xsi_set_current_line(108, ng0);
    t9 = ((char*)((ng1)));
    t10 = (t0 + 5352);
    t11 = (t0 + 5352);
    t12 = (t11 + 72U);
    t13 = *((char **)t12);
    t16 = (t0 + 5352);
    t26 = (t16 + 64U);
    t27 = *((char **)t26);
    t28 = (t0 + 4392);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    xsi_vlog_generic_convert_array_indices(t7, t25, t13, t27, 1, 1, t30, 32, 1);
    t31 = (t7 + 4);
    t32 = *((unsigned int *)t31);
    t15 = (!(t32));
    t33 = (t25 + 4);
    t34 = *((unsigned int *)t33);
    t18 = (!(t34));
    t19 = (t15 && t18);
    if (t19 == 1)
        goto LAB17;

LAB18:    xsi_set_current_line(107, ng0);
    t2 = (t0 + 4392);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t8 = (t0 + 4392);
    xsi_vlogvar_assign_value(t8, t6, 0, 0, 32);
    goto LAB14;

LAB17:    t35 = *((unsigned int *)t7);
    t36 = *((unsigned int *)t25);
    t22 = (t35 - t36);
    t23 = (t22 + 1);
    xsi_vlogvar_assign_value(t10, t9, 0, *((unsigned int *)t25), t23);
    goto LAB18;

LAB20:    xsi_set_current_line(111, ng0);

LAB31:    xsi_set_current_line(112, ng0);
    t8 = ((char*)((ng2)));
    t9 = (t0 + 3272);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 32);
    goto LAB30;

LAB22:    xsi_set_current_line(114, ng0);

LAB32:    xsi_set_current_line(116, ng0);
    xsi_set_current_line(116, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 4392);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 32);

LAB33:    t2 = (t0 + 4392);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t8 = (t0 + 744);
    t9 = *((char **)t8);
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t5, 32, t9, 32);
    t8 = (t6 + 4);
    t14 = *((unsigned int *)t8);
    t17 = (~(t14));
    t20 = *((unsigned int *)t6);
    t21 = (t20 & t17);
    t24 = (t21 != 0);
    if (t24 > 0)
        goto LAB34;

LAB35:    xsi_set_current_line(118, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4232);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(119, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5992);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(121, ng0);
    t2 = (t0 + 3592);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t8 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t9 = (t5 + 4);
    t10 = (t8 + 4);
    t14 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t8);
    t20 = (t14 ^ t17);
    t21 = *((unsigned int *)t9);
    t24 = *((unsigned int *)t10);
    t32 = (t21 ^ t24);
    t34 = (t20 | t32);
    t35 = *((unsigned int *)t9);
    t36 = *((unsigned int *)t10);
    t38 = (t35 | t36);
    t39 = (~(t38));
    t40 = (t34 & t39);
    if (t40 != 0)
        goto LAB41;

LAB38:    if (t38 != 0)
        goto LAB40;

LAB39:    *((unsigned int *)t6) = 1;

LAB41:    memset(t7, 0, 8);
    t12 = (t6 + 4);
    t41 = *((unsigned int *)t12);
    t42 = (~(t41));
    t43 = *((unsigned int *)t6);
    t44 = (t43 & t42);
    t45 = (t44 & 1U);
    if (t45 != 0)
        goto LAB42;

LAB43:    if (*((unsigned int *)t12) != 0)
        goto LAB44;

LAB45:    t16 = (t7 + 4);
    t46 = *((unsigned int *)t7);
    t47 = *((unsigned int *)t16);
    t48 = (t46 || t47);
    if (t48 > 0)
        goto LAB46;

LAB47:    memcpy(t68, t7, 8);

LAB48:    t98 = (t68 + 4);
    t99 = *((unsigned int *)t98);
    t100 = (~(t99));
    t101 = *((unsigned int *)t68);
    t102 = (t101 & t100);
    t103 = (t102 != 0);
    if (t103 > 0)
        goto LAB60;

LAB61:
LAB62:    goto LAB30;

LAB24:    xsi_set_current_line(127, ng0);

LAB66:    xsi_set_current_line(128, ng0);
    t3 = (t0 + 3592);
    t5 = (t3 + 56U);
    t8 = *((char **)t5);
    t9 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t10 = (t8 + 4);
    t11 = (t9 + 4);
    t14 = *((unsigned int *)t8);
    t17 = *((unsigned int *)t9);
    t20 = (t14 ^ t17);
    t21 = *((unsigned int *)t10);
    t24 = *((unsigned int *)t11);
    t32 = (t21 ^ t24);
    t34 = (t20 | t32);
    t35 = *((unsigned int *)t10);
    t36 = *((unsigned int *)t11);
    t38 = (t35 | t36);
    t39 = (~(t38));
    t40 = (t34 & t39);
    if (t40 != 0)
        goto LAB70;

LAB67:    if (t38 != 0)
        goto LAB69;

LAB68:    *((unsigned int *)t6) = 1;

LAB70:    memset(t7, 0, 8);
    t13 = (t6 + 4);
    t41 = *((unsigned int *)t13);
    t42 = (~(t41));
    t43 = *((unsigned int *)t6);
    t44 = (t43 & t42);
    t45 = (t44 & 1U);
    if (t45 != 0)
        goto LAB71;

LAB72:    if (*((unsigned int *)t13) != 0)
        goto LAB73;

LAB74:    t26 = (t7 + 4);
    t46 = *((unsigned int *)t7);
    t47 = *((unsigned int *)t26);
    t48 = (t46 || t47);
    if (t48 > 0)
        goto LAB75;

LAB76:    memcpy(t68, t7, 8);

LAB77:    t104 = (t68 + 4);
    t99 = *((unsigned int *)t104);
    t100 = (~(t99));
    t101 = *((unsigned int *)t68);
    t102 = (t101 & t100);
    t103 = (t102 != 0);
    if (t103 > 0)
        goto LAB89;

LAB90:
LAB91:    xsi_set_current_line(132, ng0);
    t2 = (t0 + 3592);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t8 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t9 = (t5 + 4);
    t10 = (t8 + 4);
    t14 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t8);
    t20 = (t14 ^ t17);
    t21 = *((unsigned int *)t9);
    t24 = *((unsigned int *)t10);
    t32 = (t21 ^ t24);
    t34 = (t20 | t32);
    t35 = *((unsigned int *)t9);
    t36 = *((unsigned int *)t10);
    t38 = (t35 | t36);
    t39 = (~(t38));
    t40 = (t34 & t39);
    if (t40 != 0)
        goto LAB98;

LAB95:    if (t38 != 0)
        goto LAB97;

LAB96:    *((unsigned int *)t6) = 1;

LAB98:    memset(t7, 0, 8);
    t12 = (t6 + 4);
    t41 = *((unsigned int *)t12);
    t42 = (~(t41));
    t43 = *((unsigned int *)t6);
    t44 = (t43 & t42);
    t45 = (t44 & 1U);
    if (t45 != 0)
        goto LAB99;

LAB100:    if (*((unsigned int *)t12) != 0)
        goto LAB101;

LAB102:    t16 = (t7 + 4);
    t46 = *((unsigned int *)t7);
    t47 = *((unsigned int *)t16);
    t48 = (t46 || t47);
    if (t48 > 0)
        goto LAB103;

LAB104:    memcpy(t68, t7, 8);

LAB105:    t98 = (t68 + 4);
    t99 = *((unsigned int *)t98);
    t100 = (~(t99));
    t101 = *((unsigned int *)t68);
    t102 = (t101 & t100);
    t103 = (t102 != 0);
    if (t103 > 0)
        goto LAB117;

LAB118:
LAB119:    goto LAB30;

LAB26:    xsi_set_current_line(143, ng0);

LAB129:    xsi_set_current_line(144, ng0);
    t3 = ((char*)((ng2)));
    t8 = (t0 + 2792);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 1);
    xsi_set_current_line(145, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2952);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(146, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 4072);
    t8 = (t3 + 56U);
    t9 = *((char **)t8);
    xsi_vlogtype_concat(t129, 34, 34, 2U, t9, 32, t2, 2);
    t10 = ((char*)((ng3)));
    xsi_vlog_unsigned_rshift(t130, 34, t129, 34, t10, 32);
    t11 = (t0 + 5192);
    xsi_vlogvar_assign_value(t11, t130, 0, 0, 2);
    t12 = (t0 + 5032);
    xsi_vlogvar_assign_value(t12, t130, 2, 0, 32);
    xsi_set_current_line(147, ng0);
    t2 = (t0 + 5032);
    t3 = (t2 + 56U);
    t8 = *((char **)t3);
    t9 = (t0 + 5192);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t13 = (t11 + 4);
    if (*((unsigned int *)t13) != 0)
        goto LAB131;

LAB130:    t16 = (t12 + 4);
    if (*((unsigned int *)t16) != 0)
        goto LAB131;

LAB134:    if (*((unsigned int *)t11) > *((unsigned int *)t12))
        goto LAB132;

LAB133:    memset(t7, 0, 8);
    xsi_vlog_unsigned_add(t7, 32, t8, 32, t6, 32);
    t27 = (t0 + 4552);
    xsi_vlogvar_assign_value(t27, t7, 0, 0, 32);
    xsi_set_current_line(148, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 5032);
    t8 = (t3 + 56U);
    t9 = *((char **)t8);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_multiply(t6, 32, t2, 32, t9, 32);
    t10 = (t0 + 5192);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = ((char*)((ng2)));
    memset(t7, 0, 8);
    t16 = (t12 + 4);
    if (*((unsigned int *)t16) != 0)
        goto LAB136;

LAB135:    t26 = (t13 + 4);
    if (*((unsigned int *)t26) != 0)
        goto LAB136;

LAB139:    if (*((unsigned int *)t12) > *((unsigned int *)t13))
        goto LAB137;

LAB138:    memset(t25, 0, 8);
    xsi_vlog_unsigned_add(t25, 32, t6, 32, t7, 32);
    t28 = (t0 + 4712);
    xsi_vlogvar_assign_value(t28, t25, 0, 0, 32);
    xsi_set_current_line(149, ng0);
    t2 = (t0 + 5032);
    t3 = (t2 + 56U);
    t8 = *((char **)t3);
    t9 = (t0 + 5192);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng3)));
    memset(t6, 0, 8);
    t13 = (t11 + 4);
    if (*((unsigned int *)t13) != 0)
        goto LAB141;

LAB140:    t16 = (t12 + 4);
    if (*((unsigned int *)t16) != 0)
        goto LAB141;

LAB144:    if (*((unsigned int *)t11) > *((unsigned int *)t12))
        goto LAB142;

LAB143:    memset(t7, 0, 8);
    xsi_vlog_unsigned_add(t7, 32, t8, 32, t6, 32);
    t27 = (t0 + 4872);
    xsi_vlogvar_assign_value(t27, t7, 0, 0, 32);
    xsi_set_current_line(150, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5352);
    t8 = (t0 + 5352);
    t9 = (t8 + 72U);
    t10 = *((char **)t9);
    t11 = (t0 + 5352);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t16 = ((char*)((ng1)));
    xsi_vlog_generic_convert_array_indices(t6, t7, t10, t13, 1, 1, t16, 32, 1);
    t26 = (t6 + 4);
    t14 = *((unsigned int *)t26);
    t15 = (!(t14));
    t27 = (t7 + 4);
    t17 = *((unsigned int *)t27);
    t18 = (!(t17));
    t19 = (t15 && t18);
    if (t19 == 1)
        goto LAB145;

LAB146:    xsi_set_current_line(151, ng0);
    t2 = (t0 + 4552);
    t3 = (t2 + 56U);
    t8 = *((char **)t3);
    t9 = (t0 + 5352);
    t10 = (t0 + 5352);
    t11 = (t10 + 72U);
    t12 = *((char **)t11);
    t13 = (t0 + 5352);
    t16 = (t13 + 64U);
    t26 = *((char **)t16);
    t27 = ((char*)((ng2)));
    xsi_vlog_generic_convert_array_indices(t6, t7, t12, t26, 1, 1, t27, 32, 1);
    t28 = (t6 + 4);
    t14 = *((unsigned int *)t28);
    t15 = (!(t14));
    t29 = (t7 + 4);
    t17 = *((unsigned int *)t29);
    t18 = (!(t17));
    t19 = (t15 && t18);
    if (t19 == 1)
        goto LAB147;

LAB148:    xsi_set_current_line(152, ng0);
    t2 = (t0 + 4552);
    t3 = (t2 + 56U);
    t8 = *((char **)t3);
    t9 = (t0 + 4712);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t8, 32, t11, 32);
    t12 = (t0 + 5352);
    t13 = (t0 + 5352);
    t16 = (t13 + 72U);
    t26 = *((char **)t16);
    t27 = (t0 + 5352);
    t28 = (t27 + 64U);
    t29 = *((char **)t28);
    t30 = ((char*)((ng3)));
    xsi_vlog_generic_convert_array_indices(t7, t25, t26, t29, 1, 1, t30, 32, 1);
    t31 = (t7 + 4);
    t14 = *((unsigned int *)t31);
    t15 = (!(t14));
    t33 = (t25 + 4);
    t17 = *((unsigned int *)t33);
    t18 = (!(t17));
    t19 = (t15 && t18);
    if (t19 == 1)
        goto LAB149;

LAB150:    xsi_set_current_line(153, ng0);
    t2 = (t0 + 4552);
    t3 = (t2 + 56U);
    t8 = *((char **)t3);
    t9 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t8, 32, t9, 32);
    t10 = (t0 + 5352);
    t11 = (t0 + 5352);
    t12 = (t11 + 72U);
    t13 = *((char **)t12);
    t16 = (t0 + 5352);
    t26 = (t16 + 64U);
    t27 = *((char **)t26);
    t28 = ((char*)((ng4)));
    xsi_vlog_generic_convert_array_indices(t7, t25, t13, t27, 1, 1, t28, 32, 1);
    t29 = (t7 + 4);
    t14 = *((unsigned int *)t29);
    t15 = (!(t14));
    t30 = (t25 + 4);
    t17 = *((unsigned int *)t30);
    t18 = (!(t17));
    t19 = (t15 && t18);
    if (t19 == 1)
        goto LAB151;

LAB152:    xsi_set_current_line(155, ng0);
    t2 = (t0 + 5352);
    t3 = (t2 + 56U);
    t8 = *((char **)t3);
    t9 = (t0 + 5352);
    t10 = (t9 + 72U);
    t11 = *((char **)t10);
    t12 = (t0 + 5352);
    t13 = (t12 + 64U);
    t16 = *((char **)t13);
    t26 = (t0 + 5832);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    memset(t7, 0, 8);
    t29 = (t7 + 4);
    t30 = (t28 + 4);
    t14 = *((unsigned int *)t28);
    t17 = (t14 >> 0);
    *((unsigned int *)t7) = t17;
    t20 = *((unsigned int *)t30);
    t21 = (t20 >> 0);
    *((unsigned int *)t29) = t21;
    t24 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t24 & 3U);
    t32 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t32 & 3U);
    xsi_vlog_generic_get_array_select_value(t6, 32, t8, t11, t16, 2, 1, t7, 2, 2);
    t31 = (t0 + 5512);
    t33 = (t31 + 56U);
    t37 = *((char **)t33);
    t67 = (t0 + 5512);
    t72 = (t67 + 72U);
    t73 = *((char **)t72);
    t74 = (t0 + 5512);
    t82 = (t74 + 64U);
    t83 = *((char **)t82);
    t98 = (t0 + 5832);
    t104 = (t98 + 56U);
    t105 = *((char **)t104);
    memset(t61, 0, 8);
    t106 = (t61 + 4);
    t107 = (t105 + 4);
    t34 = *((unsigned int *)t105);
    t35 = (t34 >> 0);
    *((unsigned int *)t61) = t35;
    t36 = *((unsigned int *)t107);
    t38 = (t36 >> 0);
    *((unsigned int *)t106) = t38;
    t39 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t39 & 3U);
    t40 = *((unsigned int *)t106);
    *((unsigned int *)t106) = (t40 & 3U);
    xsi_vlog_generic_get_array_select_value(t25, 32, t37, t73, t83, 2, 1, t61, 2, 2);
    t108 = (t0 + 5832);
    t111 = (t108 + 56U);
    t112 = *((char **)t111);
    memset(t68, 0, 8);
    t113 = (t68 + 4);
    t114 = (t112 + 4);
    t41 = *((unsigned int *)t112);
    t42 = (t41 >> 2);
    *((unsigned int *)t68) = t42;
    t43 = *((unsigned int *)t114);
    t44 = (t43 >> 2);
    *((unsigned int *)t113) = t44;
    t45 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t45 & 1073741823U);
    t46 = *((unsigned int *)t113);
    *((unsigned int *)t113) = (t46 & 1073741823U);
    memset(t109, 0, 8);
    xsi_vlog_unsigned_multiply(t109, 32, t25, 32, t68, 32);
    memset(t110, 0, 8);
    xsi_vlog_unsigned_add(t110, 32, t6, 32, t109, 32);
    t115 = (t0 + 5672);
    xsi_vlogvar_assign_value(t115, t110, 0, 0, 32);
    xsi_set_current_line(156, ng0);
    t2 = (t0 + 3912);
    t3 = (t2 + 56U);
    t8 = *((char **)t3);
    t9 = (t0 + 3912);
    t10 = (t9 + 72U);
    t11 = *((char **)t10);
    t12 = (t0 + 3912);
    t13 = (t12 + 64U);
    t16 = *((char **)t13);
    t26 = (t0 + 5672);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    xsi_vlog_generic_get_array_select_value(t6, 8, t8, t11, t16, 2, 1, t28, 32, 1);
    t29 = (t0 + 2632);
    xsi_vlogvar_assign_value(t29, t6, 0, 0, 8);
    xsi_set_current_line(158, ng0);
    t2 = (t0 + 5832);
    t3 = (t2 + 56U);
    t8 = *((char **)t3);
    t9 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t8, 32, t9, 32);
    t10 = (t0 + 5992);
    xsi_vlogvar_assign_value(t10, t6, 0, 0, 32);
    xsi_set_current_line(159, ng0);
    t2 = (t0 + 5992);
    t3 = (t2 + 56U);
    t8 = *((char **)t3);
    t9 = (t0 + 4072);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memset(t6, 0, 8);
    t12 = (t8 + 4);
    t13 = (t11 + 4);
    t14 = *((unsigned int *)t8);
    t17 = *((unsigned int *)t11);
    t20 = (t14 ^ t17);
    t21 = *((unsigned int *)t12);
    t24 = *((unsigned int *)t13);
    t32 = (t21 ^ t24);
    t34 = (t20 | t32);
    t35 = *((unsigned int *)t12);
    t36 = *((unsigned int *)t13);
    t38 = (t35 | t36);
    t39 = (~(t38));
    t40 = (t34 & t39);
    if (t40 != 0)
        goto LAB156;

LAB153:    if (t38 != 0)
        goto LAB155;

LAB154:    *((unsigned int *)t6) = 1;

LAB156:    t26 = (t6 + 4);
    t41 = *((unsigned int *)t26);
    t42 = (~(t41));
    t43 = *((unsigned int *)t6);
    t44 = (t43 & t42);
    t45 = (t44 != 0);
    if (t45 > 0)
        goto LAB157;

LAB158:
LAB159:    goto LAB30;

LAB28:    xsi_set_current_line(163, ng0);

LAB160:    xsi_set_current_line(164, ng0);
    t3 = ((char*)((ng2)));
    t8 = (t0 + 2792);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 1);
    xsi_set_current_line(165, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2952);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(166, ng0);
    t2 = (t0 + 4072);
    t3 = (t2 + 56U);
    t8 = *((char **)t3);
    t9 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_rshift(t6, 32, t8, 32, t9, 32);
    t10 = (t0 + 4072);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t0 + 4072);
    t16 = (t13 + 72U);
    t26 = *((char **)t16);
    t27 = ((char*)((ng1)));
    xsi_vlog_generic_get_index_select_value(t7, 32, t12, t26, 2, t27, 32, 1);
    memset(t25, 0, 8);
    xsi_vlog_unsigned_add(t25, 32, t6, 32, t7, 32);
    t28 = (t0 + 4552);
    xsi_vlogvar_assign_value(t28, t25, 0, 0, 32);
    xsi_set_current_line(167, ng0);
    t2 = (t0 + 4072);
    t3 = (t2 + 56U);
    t8 = *((char **)t3);
    t9 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_signed_rshift(t6, 32, t8, 32, t9, 32);
    t10 = (t0 + 4712);
    xsi_vlogvar_assign_value(t10, t6, 0, 0, 32);
    xsi_set_current_line(169, ng0);
    t2 = (t0 + 5832);
    t3 = (t2 + 56U);
    t8 = *((char **)t3);
    t9 = (t0 + 5832);
    t10 = (t9 + 72U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng1)));
    xsi_vlog_generic_get_index_select_value(t6, 32, t8, t11, 2, t12, 32, 1);
    t13 = (t0 + 4552);
    t16 = (t13 + 56U);
    t26 = *((char **)t16);
    memset(t7, 0, 8);
    xsi_vlog_unsigned_multiply(t7, 32, t6, 32, t26, 32);
    t27 = (t0 + 5832);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    memset(t25, 0, 8);
    t30 = (t25 + 4);
    t31 = (t29 + 4);
    t14 = *((unsigned int *)t29);
    t17 = (t14 >> 1);
    *((unsigned int *)t25) = t17;
    t20 = *((unsigned int *)t31);
    t21 = (t20 >> 1);
    *((unsigned int *)t30) = t21;
    t24 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t24 & 2147483647U);
    t32 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t32 & 2147483647U);
    memset(t61, 0, 8);
    xsi_vlog_unsigned_add(t61, 32, t7, 32, t25, 32);
    t33 = (t0 + 5672);
    xsi_vlogvar_assign_value(t33, t61, 0, 0, 32);
    xsi_set_current_line(170, ng0);
    t2 = (t0 + 3912);
    t3 = (t2 + 56U);
    t8 = *((char **)t3);
    t9 = (t0 + 3912);
    t10 = (t9 + 72U);
    t11 = *((char **)t10);
    t12 = (t0 + 3912);
    t13 = (t12 + 64U);
    t16 = *((char **)t13);
    t26 = (t0 + 5672);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    xsi_vlog_generic_get_array_select_value(t6, 8, t8, t11, t16, 2, 1, t28, 32, 1);
    t29 = (t0 + 2632);
    xsi_vlogvar_assign_value(t29, t6, 0, 0, 8);
    xsi_set_current_line(172, ng0);
    t2 = (t0 + 5832);
    t3 = (t2 + 56U);
    t8 = *((char **)t3);
    t9 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t8, 32, t9, 32);
    t10 = (t0 + 5992);
    xsi_vlogvar_assign_value(t10, t6, 0, 0, 32);
    xsi_set_current_line(173, ng0);
    t2 = (t0 + 5992);
    t3 = (t2 + 56U);
    t8 = *((char **)t3);
    t9 = (t0 + 4072);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memset(t6, 0, 8);
    t12 = (t8 + 4);
    t13 = (t11 + 4);
    t14 = *((unsigned int *)t8);
    t17 = *((unsigned int *)t11);
    t20 = (t14 ^ t17);
    t21 = *((unsigned int *)t12);
    t24 = *((unsigned int *)t13);
    t32 = (t21 ^ t24);
    t34 = (t20 | t32);
    t35 = *((unsigned int *)t12);
    t36 = *((unsigned int *)t13);
    t38 = (t35 | t36);
    t39 = (~(t38));
    t40 = (t34 & t39);
    if (t40 != 0)
        goto LAB164;

LAB161:    if (t38 != 0)
        goto LAB163;

LAB162:    *((unsigned int *)t6) = 1;

LAB164:    t26 = (t6 + 4);
    t41 = *((unsigned int *)t26);
    t42 = (~(t41));
    t43 = *((unsigned int *)t6);
    t44 = (t43 & t42);
    t45 = (t44 != 0);
    if (t45 > 0)
        goto LAB165;

LAB166:
LAB167:    goto LAB30;

LAB34:    xsi_set_current_line(117, ng0);
    t10 = ((char*)((ng1)));
    t11 = (t0 + 3912);
    t12 = (t0 + 3912);
    t13 = (t12 + 72U);
    t16 = *((char **)t13);
    t26 = (t0 + 3912);
    t27 = (t26 + 64U);
    t28 = *((char **)t27);
    t29 = (t0 + 4392);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    xsi_vlog_generic_convert_array_indices(t7, t25, t16, t28, 2, 1, t31, 32, 1);
    t33 = (t7 + 4);
    t32 = *((unsigned int *)t33);
    t15 = (!(t32));
    t37 = (t25 + 4);
    t34 = *((unsigned int *)t37);
    t18 = (!(t34));
    t19 = (t15 && t18);
    if (t19 == 1)
        goto LAB36;

LAB37:    xsi_set_current_line(116, ng0);
    t2 = (t0 + 4392);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t8 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t5, 32, t8, 32);
    t9 = (t0 + 4392);
    xsi_vlogvar_assign_value(t9, t6, 0, 0, 32);
    goto LAB33;

LAB36:    t35 = *((unsigned int *)t7);
    t36 = *((unsigned int *)t25);
    t22 = (t35 - t36);
    t23 = (t22 + 1);
    xsi_vlogvar_assign_value(t11, t10, 0, *((unsigned int *)t25), t23);
    goto LAB37;

LAB40:    t11 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB41;

LAB42:    *((unsigned int *)t7) = 1;
    goto LAB45;

LAB44:    t13 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB45;

LAB46:    t26 = (t0 + 3432);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t29 = ((char*)((ng6)));
    memset(t25, 0, 8);
    t30 = (t28 + 4);
    t31 = (t29 + 4);
    t49 = *((unsigned int *)t28);
    t50 = *((unsigned int *)t29);
    t51 = (t49 ^ t50);
    t52 = *((unsigned int *)t30);
    t53 = *((unsigned int *)t31);
    t54 = (t52 ^ t53);
    t55 = (t51 | t54);
    t56 = *((unsigned int *)t30);
    t57 = *((unsigned int *)t31);
    t58 = (t56 | t57);
    t59 = (~(t58));
    t60 = (t55 & t59);
    if (t60 != 0)
        goto LAB50;

LAB49:    if (t58 != 0)
        goto LAB51;

LAB52:    memset(t61, 0, 8);
    t37 = (t25 + 4);
    t62 = *((unsigned int *)t37);
    t63 = (~(t62));
    t64 = *((unsigned int *)t25);
    t65 = (t64 & t63);
    t66 = (t65 & 1U);
    if (t66 != 0)
        goto LAB53;

LAB54:    if (*((unsigned int *)t37) != 0)
        goto LAB55;

LAB56:    t69 = *((unsigned int *)t7);
    t70 = *((unsigned int *)t61);
    t71 = (t69 & t70);
    *((unsigned int *)t68) = t71;
    t72 = (t7 + 4);
    t73 = (t61 + 4);
    t74 = (t68 + 4);
    t75 = *((unsigned int *)t72);
    t76 = *((unsigned int *)t73);
    t77 = (t75 | t76);
    *((unsigned int *)t74) = t77;
    t78 = *((unsigned int *)t74);
    t79 = (t78 != 0);
    if (t79 == 1)
        goto LAB57;

LAB58:
LAB59:    goto LAB48;

LAB50:    *((unsigned int *)t25) = 1;
    goto LAB52;

LAB51:    t33 = (t25 + 4);
    *((unsigned int *)t25) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB52;

LAB53:    *((unsigned int *)t61) = 1;
    goto LAB56;

LAB55:    t67 = (t61 + 4);
    *((unsigned int *)t61) = 1;
    *((unsigned int *)t67) = 1;
    goto LAB56;

LAB57:    t80 = *((unsigned int *)t68);
    t81 = *((unsigned int *)t74);
    *((unsigned int *)t68) = (t80 | t81);
    t82 = (t7 + 4);
    t83 = (t61 + 4);
    t84 = *((unsigned int *)t7);
    t85 = (~(t84));
    t86 = *((unsigned int *)t82);
    t87 = (~(t86));
    t88 = *((unsigned int *)t61);
    t89 = (~(t88));
    t90 = *((unsigned int *)t83);
    t91 = (~(t90));
    t15 = (t85 & t87);
    t18 = (t89 & t91);
    t92 = (~(t15));
    t93 = (~(t18));
    t94 = *((unsigned int *)t74);
    *((unsigned int *)t74) = (t94 & t92);
    t95 = *((unsigned int *)t74);
    *((unsigned int *)t74) = (t95 & t93);
    t96 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t96 & t92);
    t97 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t97 & t93);
    goto LAB59;

LAB60:    xsi_set_current_line(121, ng0);

LAB63:    xsi_set_current_line(122, ng0);
    t104 = ((char*)((ng3)));
    t105 = (t0 + 3272);
    xsi_vlogvar_assign_value(t105, t104, 0, 0, 32);
    xsi_set_current_line(123, ng0);
    t2 = (t0 + 3432);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t8 = (t0 + 3912);
    t9 = (t0 + 3912);
    t10 = (t9 + 72U);
    t11 = *((char **)t10);
    t12 = (t0 + 3912);
    t13 = (t12 + 64U);
    t16 = *((char **)t13);
    t26 = (t0 + 4072);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    xsi_vlog_generic_convert_array_indices(t6, t7, t11, t16, 2, 1, t28, 32, 1);
    t29 = (t6 + 4);
    t14 = *((unsigned int *)t29);
    t15 = (!(t14));
    t30 = (t7 + 4);
    t17 = *((unsigned int *)t30);
    t18 = (!(t17));
    t19 = (t15 && t18);
    if (t19 == 1)
        goto LAB64;

LAB65:    xsi_set_current_line(124, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4232);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    goto LAB62;

LAB64:    t20 = *((unsigned int *)t6);
    t21 = *((unsigned int *)t7);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_assign_value(t8, t5, 0, *((unsigned int *)t7), t23);
    goto LAB65;

LAB69:    t12 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB70;

LAB71:    *((unsigned int *)t7) = 1;
    goto LAB74;

LAB73:    t16 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB74;

LAB75:    t27 = (t0 + 3432);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    t30 = ((char*)((ng6)));
    memset(t25, 0, 8);
    t31 = (t29 + 4);
    t33 = (t30 + 4);
    t49 = *((unsigned int *)t29);
    t50 = *((unsigned int *)t30);
    t51 = (t49 ^ t50);
    t52 = *((unsigned int *)t31);
    t53 = *((unsigned int *)t33);
    t54 = (t52 ^ t53);
    t55 = (t51 | t54);
    t56 = *((unsigned int *)t31);
    t57 = *((unsigned int *)t33);
    t58 = (t56 | t57);
    t59 = (~(t58));
    t60 = (t55 & t59);
    if (t60 != 0)
        goto LAB79;

LAB78:    if (t58 != 0)
        goto LAB80;

LAB81:    memset(t61, 0, 8);
    t67 = (t25 + 4);
    t62 = *((unsigned int *)t67);
    t63 = (~(t62));
    t64 = *((unsigned int *)t25);
    t65 = (t64 & t63);
    t66 = (t65 & 1U);
    if (t66 != 0)
        goto LAB82;

LAB83:    if (*((unsigned int *)t67) != 0)
        goto LAB84;

LAB85:    t69 = *((unsigned int *)t7);
    t70 = *((unsigned int *)t61);
    t71 = (t69 & t70);
    *((unsigned int *)t68) = t71;
    t73 = (t7 + 4);
    t74 = (t61 + 4);
    t82 = (t68 + 4);
    t75 = *((unsigned int *)t73);
    t76 = *((unsigned int *)t74);
    t77 = (t75 | t76);
    *((unsigned int *)t82) = t77;
    t78 = *((unsigned int *)t82);
    t79 = (t78 != 0);
    if (t79 == 1)
        goto LAB86;

LAB87:
LAB88:    goto LAB77;

LAB79:    *((unsigned int *)t25) = 1;
    goto LAB81;

LAB80:    t37 = (t25 + 4);
    *((unsigned int *)t25) = 1;
    *((unsigned int *)t37) = 1;
    goto LAB81;

LAB82:    *((unsigned int *)t61) = 1;
    goto LAB85;

LAB84:    t72 = (t61 + 4);
    *((unsigned int *)t61) = 1;
    *((unsigned int *)t72) = 1;
    goto LAB85;

LAB86:    t80 = *((unsigned int *)t68);
    t81 = *((unsigned int *)t82);
    *((unsigned int *)t68) = (t80 | t81);
    t83 = (t7 + 4);
    t98 = (t61 + 4);
    t84 = *((unsigned int *)t7);
    t85 = (~(t84));
    t86 = *((unsigned int *)t83);
    t87 = (~(t86));
    t88 = *((unsigned int *)t61);
    t89 = (~(t88));
    t90 = *((unsigned int *)t98);
    t91 = (~(t90));
    t18 = (t85 & t87);
    t19 = (t89 & t91);
    t92 = (~(t18));
    t93 = (~(t19));
    t94 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t94 & t92);
    t95 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t95 & t93);
    t96 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t96 & t92);
    t97 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t97 & t93);
    goto LAB88;

LAB89:    xsi_set_current_line(128, ng0);

LAB92:    xsi_set_current_line(129, ng0);
    t105 = (t0 + 3432);
    t106 = (t105 + 56U);
    t107 = *((char **)t106);
    t108 = (t0 + 3912);
    t111 = (t0 + 3912);
    t112 = (t111 + 72U);
    t113 = *((char **)t112);
    t114 = (t0 + 3912);
    t115 = (t114 + 64U);
    t116 = *((char **)t115);
    t117 = (t0 + 4072);
    t118 = (t117 + 56U);
    t119 = *((char **)t118);
    xsi_vlog_generic_convert_array_indices(t109, t110, t113, t116, 2, 1, t119, 32, 1);
    t120 = (t109 + 4);
    t121 = *((unsigned int *)t120);
    t22 = (!(t121));
    t122 = (t110 + 4);
    t123 = *((unsigned int *)t122);
    t23 = (!(t123));
    t124 = (t22 && t23);
    if (t124 == 1)
        goto LAB93;

LAB94:    xsi_set_current_line(130, ng0);
    t2 = (t0 + 4072);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t8 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t5, 32, t8, 32);
    t9 = (t0 + 4232);
    xsi_vlogvar_assign_value(t9, t6, 0, 0, 32);
    goto LAB91;

LAB93:    t125 = *((unsigned int *)t109);
    t126 = *((unsigned int *)t110);
    t127 = (t125 - t126);
    t128 = (t127 + 1);
    xsi_vlogvar_assign_value(t108, t107, 0, *((unsigned int *)t110), t128);
    goto LAB94;

LAB97:    t11 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB98;

LAB99:    *((unsigned int *)t7) = 1;
    goto LAB102;

LAB101:    t13 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB102;

LAB103:    t26 = (t0 + 3432);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t29 = ((char*)((ng6)));
    memset(t25, 0, 8);
    t30 = (t28 + 4);
    t31 = (t29 + 4);
    t49 = *((unsigned int *)t28);
    t50 = *((unsigned int *)t29);
    t51 = (t49 ^ t50);
    t52 = *((unsigned int *)t30);
    t53 = *((unsigned int *)t31);
    t54 = (t52 ^ t53);
    t55 = (t51 | t54);
    t56 = *((unsigned int *)t30);
    t57 = *((unsigned int *)t31);
    t58 = (t56 | t57);
    t59 = (~(t58));
    t60 = (t55 & t59);
    if (t60 != 0)
        goto LAB109;

LAB106:    if (t58 != 0)
        goto LAB108;

LAB107:    *((unsigned int *)t25) = 1;

LAB109:    memset(t61, 0, 8);
    t37 = (t25 + 4);
    t62 = *((unsigned int *)t37);
    t63 = (~(t62));
    t64 = *((unsigned int *)t25);
    t65 = (t64 & t63);
    t66 = (t65 & 1U);
    if (t66 != 0)
        goto LAB110;

LAB111:    if (*((unsigned int *)t37) != 0)
        goto LAB112;

LAB113:    t69 = *((unsigned int *)t7);
    t70 = *((unsigned int *)t61);
    t71 = (t69 & t70);
    *((unsigned int *)t68) = t71;
    t72 = (t7 + 4);
    t73 = (t61 + 4);
    t74 = (t68 + 4);
    t75 = *((unsigned int *)t72);
    t76 = *((unsigned int *)t73);
    t77 = (t75 | t76);
    *((unsigned int *)t74) = t77;
    t78 = *((unsigned int *)t74);
    t79 = (t78 != 0);
    if (t79 == 1)
        goto LAB114;

LAB115:
LAB116:    goto LAB105;

LAB108:    t33 = (t25 + 4);
    *((unsigned int *)t25) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB109;

LAB110:    *((unsigned int *)t61) = 1;
    goto LAB113;

LAB112:    t67 = (t61 + 4);
    *((unsigned int *)t61) = 1;
    *((unsigned int *)t67) = 1;
    goto LAB113;

LAB114:    t80 = *((unsigned int *)t68);
    t81 = *((unsigned int *)t74);
    *((unsigned int *)t68) = (t80 | t81);
    t82 = (t7 + 4);
    t83 = (t61 + 4);
    t84 = *((unsigned int *)t7);
    t85 = (~(t84));
    t86 = *((unsigned int *)t82);
    t87 = (~(t86));
    t88 = *((unsigned int *)t61);
    t89 = (~(t88));
    t90 = *((unsigned int *)t83);
    t91 = (~(t90));
    t15 = (t85 & t87);
    t18 = (t89 & t91);
    t92 = (~(t15));
    t93 = (~(t18));
    t94 = *((unsigned int *)t74);
    *((unsigned int *)t74) = (t94 & t92);
    t95 = *((unsigned int *)t74);
    *((unsigned int *)t74) = (t95 & t93);
    t96 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t96 & t92);
    t97 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t97 & t93);
    goto LAB116;

LAB117:    xsi_set_current_line(132, ng0);

LAB120:    xsi_set_current_line(133, ng0);
    t104 = ((char*)((ng2)));
    t105 = (t0 + 2952);
    xsi_vlogvar_assign_value(t105, t104, 0, 0, 1);
    xsi_set_current_line(134, ng0);
    t2 = (t0 + 3752);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);

LAB121:    t8 = ((char*)((ng3)));
    t15 = xsi_vlog_unsigned_case_compare(t5, 8, t8, 32);
    if (t15 == 1)
        goto LAB122;

LAB123:    t2 = ((char*)((ng4)));
    t15 = xsi_vlog_unsigned_case_compare(t5, 8, t2, 32);
    if (t15 == 1)
        goto LAB124;

LAB125:
LAB127:
LAB126:    xsi_set_current_line(137, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3272);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB128:    goto LAB119;

LAB122:    xsi_set_current_line(135, ng0);
    t9 = ((char*)((ng4)));
    t10 = (t0 + 3272);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 32);
    goto LAB128;

LAB124:    xsi_set_current_line(136, ng0);
    t3 = ((char*)((ng5)));
    t8 = (t0 + 3272);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 32);
    goto LAB128;

LAB131:    t26 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB133;

LAB132:    *((unsigned int *)t6) = 1;
    goto LAB133;

LAB136:    t27 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB138;

LAB137:    *((unsigned int *)t7) = 1;
    goto LAB138;

LAB141:    t26 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB143;

LAB142:    *((unsigned int *)t6) = 1;
    goto LAB143;

LAB145:    t20 = *((unsigned int *)t6);
    t21 = *((unsigned int *)t7);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t7), t23);
    goto LAB146;

LAB147:    t20 = *((unsigned int *)t6);
    t21 = *((unsigned int *)t7);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_assign_value(t9, t8, 0, *((unsigned int *)t7), t23);
    goto LAB148;

LAB149:    t20 = *((unsigned int *)t7);
    t21 = *((unsigned int *)t25);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_assign_value(t12, t6, 0, *((unsigned int *)t25), t23);
    goto LAB150;

LAB151:    t20 = *((unsigned int *)t7);
    t21 = *((unsigned int *)t25);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_assign_value(t10, t6, 0, *((unsigned int *)t25), t23);
    goto LAB152;

LAB155:    t16 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB156;

LAB157:    xsi_set_current_line(160, ng0);
    t27 = ((char*)((ng2)));
    t28 = (t0 + 3272);
    xsi_vlogvar_assign_value(t28, t27, 0, 0, 32);
    goto LAB159;

LAB163:    t16 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB164;

LAB165:    xsi_set_current_line(174, ng0);
    t27 = ((char*)((ng2)));
    t28 = (t0 + 3272);
    xsi_vlogvar_assign_value(t28, t27, 0, 0, 32);
    goto LAB167;

}


extern void reference_m_00000000000816262850_2026737544_init()
{
	static char *pe[] = {(void *)Always_72_0,(void *)Always_92_1};
	xsi_register_didat("reference_m_00000000000816262850_2026737544", "isim/tester.exe.sim/reference/m_00000000000816262850_2026737544.didat");
	xsi_register_executes(pe);
}
