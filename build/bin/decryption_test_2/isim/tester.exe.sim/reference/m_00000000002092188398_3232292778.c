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
static const char *ng0 = "C:/Users/Alexandra/Desktop/tema2_task3_integration_tester/tema2_task3_checker/build/bin/reference/ref_scytale_decryption.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static unsigned int ng3[] = {250U, 0U};
static int ng4[] = {2, 0};
static int ng5[] = {3, 0};



static void Always_66_0(char *t0)
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

LAB0:    t1 = (t0 + 6592U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 7160);
    *((int *)t2) = 1;
    t3 = (t0 + 6624);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(66, ng0);

LAB5:    xsi_set_current_line(67, ng0);
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

LAB11:    xsi_set_current_line(75, ng0);

LAB14:    xsi_set_current_line(76, ng0);
    t2 = (t0 + 2072U);
    t3 = *((char **)t2);
    t2 = (t0 + 4072);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(77, ng0);
    t2 = (t0 + 1912U);
    t3 = *((char **)t2);
    t2 = (t0 + 3912);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 8, 0LL);
    xsi_set_current_line(78, ng0);
    t2 = (t0 + 2232U);
    t3 = *((char **)t2);
    t2 = (t0 + 4232);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 8, 0LL);
    xsi_set_current_line(79, ng0);
    t2 = (t0 + 2392U);
    t3 = *((char **)t2);
    t2 = (t0 + 4392);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 8, 0LL);
    xsi_set_current_line(81, ng0);
    t2 = (t0 + 3432);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3272);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 0LL);
    xsi_set_current_line(82, ng0);
    t2 = (t0 + 3752);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3592);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 0LL);
    xsi_set_current_line(83, ng0);
    t2 = (t0 + 4872);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4552);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 0LL);
    xsi_set_current_line(84, ng0);
    t2 = (t0 + 5032);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4712);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 0LL);
    xsi_set_current_line(85, ng0);
    t2 = (t0 + 5512);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5352);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 0LL);

LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(67, ng0);

LAB13:    xsi_set_current_line(68, ng0);
    t28 = ((char*)((ng1)));
    t29 = (t0 + 3272);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 32, 0LL);
    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3592);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(70, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4072);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3912);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4232);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4392);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    goto LAB12;

}

static void Always_89_1(char *t0)
{
    char t9[8];
    char t17[8];
    char t18[8];
    char t61[8];
    char t68[8];
    char t109[8];
    char t110[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned int t29;
    char *t30;
    unsigned int t31;
    int t32;
    int t33;
    unsigned int t34;
    unsigned int t35;
    int t36;
    int t37;
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

LAB0:    t1 = (t0 + 6840U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(89, ng0);
    t2 = (t0 + 7176);
    *((int *)t2) = 1;
    t3 = (t0 + 6872);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(89, ng0);

LAB5:    xsi_set_current_line(90, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 2952);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(91, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2792);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(92, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3112);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(94, ng0);
    t2 = (t0 + 3272);
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

LAB10:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_signed_case_compare(t4, 32, t2, 32);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_signed_case_compare(t4, 32, t2, 32);
    if (t6 == 1)
        goto LAB13;

LAB14:
LAB15:    goto LAB2;

LAB7:    xsi_set_current_line(95, ng0);

LAB16:    xsi_set_current_line(96, ng0);
    t7 = ((char*)((ng2)));
    t8 = (t0 + 3432);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 32);
    goto LAB15;

LAB9:    xsi_set_current_line(98, ng0);

LAB17:    xsi_set_current_line(100, ng0);
    xsi_set_current_line(100, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 5672);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 32);

LAB18:    t2 = (t0 + 5672);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = (t0 + 744);
    t8 = *((char **)t7);
    memset(t9, 0, 8);
    xsi_vlog_signed_less(t9, 32, t5, 32, t8, 32);
    t7 = (t9 + 4);
    t10 = *((unsigned int *)t7);
    t11 = (~(t10));
    t12 = *((unsigned int *)t9);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB19;

LAB20:    xsi_set_current_line(102, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5512);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(103, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4872);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(104, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5032);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(106, ng0);
    t2 = (t0 + 4072);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = ((char*)((ng2)));
    memset(t9, 0, 8);
    t8 = (t5 + 4);
    t15 = (t7 + 4);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t7);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t8);
    t14 = *((unsigned int *)t15);
    t29 = (t13 ^ t14);
    t31 = (t12 | t29);
    t34 = *((unsigned int *)t8);
    t35 = *((unsigned int *)t15);
    t38 = (t34 | t35);
    t39 = (~(t38));
    t40 = (t31 & t39);
    if (t40 != 0)
        goto LAB26;

LAB23:    if (t38 != 0)
        goto LAB25;

LAB24:    *((unsigned int *)t9) = 1;

LAB26:    memset(t17, 0, 8);
    t19 = (t9 + 4);
    t41 = *((unsigned int *)t19);
    t42 = (~(t41));
    t43 = *((unsigned int *)t9);
    t44 = (t43 & t42);
    t45 = (t44 & 1U);
    if (t45 != 0)
        goto LAB27;

LAB28:    if (*((unsigned int *)t19) != 0)
        goto LAB29;

LAB30:    t21 = (t17 + 4);
    t46 = *((unsigned int *)t17);
    t47 = *((unsigned int *)t21);
    t48 = (t46 || t47);
    if (t48 > 0)
        goto LAB31;

LAB32:    memcpy(t68, t17, 8);

LAB33:    t98 = (t68 + 4);
    t99 = *((unsigned int *)t98);
    t100 = (~(t99));
    t101 = *((unsigned int *)t68);
    t102 = (t101 & t100);
    t103 = (t102 != 0);
    if (t103 > 0)
        goto LAB45;

LAB46:
LAB47:    goto LAB15;

LAB11:    xsi_set_current_line(112, ng0);

LAB51:    xsi_set_current_line(113, ng0);
    t3 = (t0 + 4072);
    t5 = (t3 + 56U);
    t7 = *((char **)t5);
    t8 = ((char*)((ng2)));
    memset(t9, 0, 8);
    t15 = (t7 + 4);
    t16 = (t8 + 4);
    t10 = *((unsigned int *)t7);
    t11 = *((unsigned int *)t8);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t15);
    t14 = *((unsigned int *)t16);
    t29 = (t13 ^ t14);
    t31 = (t12 | t29);
    t34 = *((unsigned int *)t15);
    t35 = *((unsigned int *)t16);
    t38 = (t34 | t35);
    t39 = (~(t38));
    t40 = (t31 & t39);
    if (t40 != 0)
        goto LAB55;

LAB52:    if (t38 != 0)
        goto LAB54;

LAB53:    *((unsigned int *)t9) = 1;

LAB55:    memset(t17, 0, 8);
    t20 = (t9 + 4);
    t41 = *((unsigned int *)t20);
    t42 = (~(t41));
    t43 = *((unsigned int *)t9);
    t44 = (t43 & t42);
    t45 = (t44 & 1U);
    if (t45 != 0)
        goto LAB56;

LAB57:    if (*((unsigned int *)t20) != 0)
        goto LAB58;

LAB59:    t22 = (t17 + 4);
    t46 = *((unsigned int *)t17);
    t47 = *((unsigned int *)t22);
    t48 = (t46 || t47);
    if (t48 > 0)
        goto LAB60;

LAB61:    memcpy(t68, t17, 8);

LAB62:    t104 = (t68 + 4);
    t99 = *((unsigned int *)t104);
    t100 = (~(t99));
    t101 = *((unsigned int *)t68);
    t102 = (t101 & t100);
    t103 = (t102 != 0);
    if (t103 > 0)
        goto LAB74;

LAB75:
LAB76:    xsi_set_current_line(117, ng0);
    t2 = (t0 + 4072);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = ((char*)((ng2)));
    memset(t9, 0, 8);
    t8 = (t5 + 4);
    t15 = (t7 + 4);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t7);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t8);
    t14 = *((unsigned int *)t15);
    t29 = (t13 ^ t14);
    t31 = (t12 | t29);
    t34 = *((unsigned int *)t8);
    t35 = *((unsigned int *)t15);
    t38 = (t34 | t35);
    t39 = (~(t38));
    t40 = (t31 & t39);
    if (t40 != 0)
        goto LAB83;

LAB80:    if (t38 != 0)
        goto LAB82;

LAB81:    *((unsigned int *)t9) = 1;

LAB83:    memset(t17, 0, 8);
    t19 = (t9 + 4);
    t41 = *((unsigned int *)t19);
    t42 = (~(t41));
    t43 = *((unsigned int *)t9);
    t44 = (t43 & t42);
    t45 = (t44 & 1U);
    if (t45 != 0)
        goto LAB84;

LAB85:    if (*((unsigned int *)t19) != 0)
        goto LAB86;

LAB87:    t21 = (t17 + 4);
    t46 = *((unsigned int *)t17);
    t47 = *((unsigned int *)t21);
    t48 = (t46 || t47);
    if (t48 > 0)
        goto LAB88;

LAB89:    memcpy(t68, t17, 8);

LAB90:    t98 = (t68 + 4);
    t99 = *((unsigned int *)t98);
    t100 = (~(t99));
    t101 = *((unsigned int *)t68);
    t102 = (t101 & t100);
    t103 = (t102 != 0);
    if (t103 > 0)
        goto LAB102;

LAB103:
LAB104:    goto LAB15;

LAB13:    xsi_set_current_line(123, ng0);

LAB106:    xsi_set_current_line(124, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 2952);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(125, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3112);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(126, ng0);
    t2 = (t0 + 5192);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = (t0 + 5192);
    t8 = (t7 + 72U);
    t15 = *((char **)t8);
    t16 = (t0 + 5192);
    t19 = (t16 + 64U);
    t20 = *((char **)t19);
    t21 = (t0 + 4712);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t0 + 4232);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memset(t17, 0, 8);
    xsi_vlog_unsigned_multiply(t17, 32, t23, 32, t26, 8);
    t27 = (t0 + 4552);
    t28 = (t27 + 56U);
    t30 = *((char **)t28);
    memset(t18, 0, 8);
    xsi_vlog_unsigned_add(t18, 32, t17, 32, t30, 32);
    xsi_vlog_generic_get_array_select_value(t9, 8, t5, t15, t20, 2, 1, t18, 32, 2);
    t67 = (t0 + 2792);
    xsi_vlogvar_assign_value(t67, t9, 0, 0, 8);
    xsi_set_current_line(127, ng0);
    t2 = (t0 + 4712);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = (t0 + 4392);
    t8 = (t7 + 56U);
    t15 = *((char **)t8);
    t16 = ((char*)((ng2)));
    memset(t9, 0, 8);
    xsi_vlog_unsigned_minus(t9, 32, t15, 8, t16, 32);
    memset(t17, 0, 8);
    t19 = (t5 + 4);
    t20 = (t9 + 4);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t9);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t19);
    t14 = *((unsigned int *)t20);
    t29 = (t13 ^ t14);
    t31 = (t12 | t29);
    t34 = *((unsigned int *)t19);
    t35 = *((unsigned int *)t20);
    t38 = (t34 | t35);
    t39 = (~(t38));
    t40 = (t31 & t39);
    if (t40 != 0)
        goto LAB110;

LAB107:    if (t38 != 0)
        goto LAB109;

LAB108:    *((unsigned int *)t17) = 1;

LAB110:    t22 = (t17 + 4);
    t41 = *((unsigned int *)t22);
    t42 = (~(t41));
    t43 = *((unsigned int *)t17);
    t44 = (t43 & t42);
    t45 = (t44 != 0);
    if (t45 > 0)
        goto LAB111;

LAB112:    xsi_set_current_line(132, ng0);
    t2 = (t0 + 4712);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = ((char*)((ng2)));
    memset(t9, 0, 8);
    xsi_vlog_signed_add(t9, 32, t5, 32, t7, 32);
    t8 = (t0 + 5032);
    xsi_vlogvar_assign_value(t8, t9, 0, 0, 32);

LAB113:    xsi_set_current_line(133, ng0);
    t2 = (t0 + 4712);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = (t0 + 4392);
    t8 = (t7 + 56U);
    t15 = *((char **)t8);
    t16 = ((char*)((ng2)));
    memset(t9, 0, 8);
    xsi_vlog_unsigned_minus(t9, 32, t15, 8, t16, 32);
    memset(t17, 0, 8);
    t19 = (t5 + 4);
    t20 = (t9 + 4);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t9);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t19);
    t14 = *((unsigned int *)t20);
    t29 = (t13 ^ t14);
    t31 = (t12 | t29);
    t34 = *((unsigned int *)t19);
    t35 = *((unsigned int *)t20);
    t38 = (t34 | t35);
    t39 = (~(t38));
    t40 = (t31 & t39);
    if (t40 != 0)
        goto LAB118;

LAB115:    if (t38 != 0)
        goto LAB117;

LAB116:    *((unsigned int *)t17) = 1;

LAB118:    memset(t18, 0, 8);
    t22 = (t17 + 4);
    t41 = *((unsigned int *)t22);
    t42 = (~(t41));
    t43 = *((unsigned int *)t17);
    t44 = (t43 & t42);
    t45 = (t44 & 1U);
    if (t45 != 0)
        goto LAB119;

LAB120:    if (*((unsigned int *)t22) != 0)
        goto LAB121;

LAB122:    t24 = (t18 + 4);
    t46 = *((unsigned int *)t18);
    t47 = *((unsigned int *)t24);
    t48 = (t46 || t47);
    if (t48 > 0)
        goto LAB123;

LAB124:    memcpy(t110, t18, 8);

LAB125:    t111 = (t110 + 4);
    t99 = *((unsigned int *)t111);
    t100 = (~(t99));
    t101 = *((unsigned int *)t110);
    t102 = (t101 & t100);
    t103 = (t102 != 0);
    if (t103 > 0)
        goto LAB137;

LAB138:
LAB139:    goto LAB15;

LAB19:    xsi_set_current_line(101, ng0);
    t15 = ((char*)((ng1)));
    t16 = (t0 + 5192);
    t19 = (t0 + 5192);
    t20 = (t19 + 72U);
    t21 = *((char **)t20);
    t22 = (t0 + 5192);
    t23 = (t22 + 64U);
    t24 = *((char **)t23);
    t25 = (t0 + 5672);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    xsi_vlog_generic_convert_array_indices(t17, t18, t21, t24, 2, 1, t27, 32, 1);
    t28 = (t17 + 4);
    t29 = *((unsigned int *)t28);
    t6 = (!(t29));
    t30 = (t18 + 4);
    t31 = *((unsigned int *)t30);
    t32 = (!(t31));
    t33 = (t6 && t32);
    if (t33 == 1)
        goto LAB21;

LAB22:    xsi_set_current_line(100, ng0);
    t2 = (t0 + 5672);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = ((char*)((ng2)));
    memset(t9, 0, 8);
    xsi_vlog_signed_add(t9, 32, t5, 32, t7, 32);
    t8 = (t0 + 5672);
    xsi_vlogvar_assign_value(t8, t9, 0, 0, 32);
    goto LAB18;

LAB21:    t34 = *((unsigned int *)t17);
    t35 = *((unsigned int *)t18);
    t36 = (t34 - t35);
    t37 = (t36 + 1);
    xsi_vlogvar_assign_value(t16, t15, 0, *((unsigned int *)t18), t37);
    goto LAB22;

LAB25:    t16 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB26;

LAB27:    *((unsigned int *)t17) = 1;
    goto LAB30;

LAB29:    t20 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB30;

LAB31:    t22 = (t0 + 3912);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = ((char*)((ng3)));
    memset(t18, 0, 8);
    t26 = (t24 + 4);
    t27 = (t25 + 4);
    t49 = *((unsigned int *)t24);
    t50 = *((unsigned int *)t25);
    t51 = (t49 ^ t50);
    t52 = *((unsigned int *)t26);
    t53 = *((unsigned int *)t27);
    t54 = (t52 ^ t53);
    t55 = (t51 | t54);
    t56 = *((unsigned int *)t26);
    t57 = *((unsigned int *)t27);
    t58 = (t56 | t57);
    t59 = (~(t58));
    t60 = (t55 & t59);
    if (t60 != 0)
        goto LAB35;

LAB34:    if (t58 != 0)
        goto LAB36;

LAB37:    memset(t61, 0, 8);
    t30 = (t18 + 4);
    t62 = *((unsigned int *)t30);
    t63 = (~(t62));
    t64 = *((unsigned int *)t18);
    t65 = (t64 & t63);
    t66 = (t65 & 1U);
    if (t66 != 0)
        goto LAB38;

LAB39:    if (*((unsigned int *)t30) != 0)
        goto LAB40;

LAB41:    t69 = *((unsigned int *)t17);
    t70 = *((unsigned int *)t61);
    t71 = (t69 & t70);
    *((unsigned int *)t68) = t71;
    t72 = (t17 + 4);
    t73 = (t61 + 4);
    t74 = (t68 + 4);
    t75 = *((unsigned int *)t72);
    t76 = *((unsigned int *)t73);
    t77 = (t75 | t76);
    *((unsigned int *)t74) = t77;
    t78 = *((unsigned int *)t74);
    t79 = (t78 != 0);
    if (t79 == 1)
        goto LAB42;

LAB43:
LAB44:    goto LAB33;

LAB35:    *((unsigned int *)t18) = 1;
    goto LAB37;

LAB36:    t28 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB37;

LAB38:    *((unsigned int *)t61) = 1;
    goto LAB41;

LAB40:    t67 = (t61 + 4);
    *((unsigned int *)t61) = 1;
    *((unsigned int *)t67) = 1;
    goto LAB41;

LAB42:    t80 = *((unsigned int *)t68);
    t81 = *((unsigned int *)t74);
    *((unsigned int *)t68) = (t80 | t81);
    t82 = (t17 + 4);
    t83 = (t61 + 4);
    t84 = *((unsigned int *)t17);
    t85 = (~(t84));
    t86 = *((unsigned int *)t82);
    t87 = (~(t86));
    t88 = *((unsigned int *)t61);
    t89 = (~(t88));
    t90 = *((unsigned int *)t83);
    t91 = (~(t90));
    t6 = (t85 & t87);
    t32 = (t89 & t91);
    t92 = (~(t6));
    t93 = (~(t32));
    t94 = *((unsigned int *)t74);
    *((unsigned int *)t74) = (t94 & t92);
    t95 = *((unsigned int *)t74);
    *((unsigned int *)t74) = (t95 & t93);
    t96 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t96 & t92);
    t97 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t97 & t93);
    goto LAB44;

LAB45:    xsi_set_current_line(106, ng0);

LAB48:    xsi_set_current_line(107, ng0);
    t104 = ((char*)((ng4)));
    t105 = (t0 + 3432);
    xsi_vlogvar_assign_value(t105, t104, 0, 0, 32);
    xsi_set_current_line(108, ng0);
    t2 = (t0 + 3912);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = (t0 + 5192);
    t8 = (t0 + 5192);
    t15 = (t8 + 72U);
    t16 = *((char **)t15);
    t19 = (t0 + 5192);
    t20 = (t19 + 64U);
    t21 = *((char **)t20);
    t22 = (t0 + 5352);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    xsi_vlog_generic_convert_array_indices(t9, t17, t16, t21, 2, 1, t24, 32, 1);
    t25 = (t9 + 4);
    t10 = *((unsigned int *)t25);
    t6 = (!(t10));
    t26 = (t17 + 4);
    t11 = *((unsigned int *)t26);
    t32 = (!(t11));
    t33 = (t6 && t32);
    if (t33 == 1)
        goto LAB49;

LAB50:    xsi_set_current_line(109, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5512);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    goto LAB47;

LAB49:    t12 = *((unsigned int *)t9);
    t13 = *((unsigned int *)t17);
    t36 = (t12 - t13);
    t37 = (t36 + 1);
    xsi_vlogvar_assign_value(t7, t5, 0, *((unsigned int *)t17), t37);
    goto LAB50;

LAB54:    t19 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB55;

LAB56:    *((unsigned int *)t17) = 1;
    goto LAB59;

LAB58:    t21 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB59;

LAB60:    t23 = (t0 + 3912);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    t26 = ((char*)((ng3)));
    memset(t18, 0, 8);
    t27 = (t25 + 4);
    t28 = (t26 + 4);
    t49 = *((unsigned int *)t25);
    t50 = *((unsigned int *)t26);
    t51 = (t49 ^ t50);
    t52 = *((unsigned int *)t27);
    t53 = *((unsigned int *)t28);
    t54 = (t52 ^ t53);
    t55 = (t51 | t54);
    t56 = *((unsigned int *)t27);
    t57 = *((unsigned int *)t28);
    t58 = (t56 | t57);
    t59 = (~(t58));
    t60 = (t55 & t59);
    if (t60 != 0)
        goto LAB64;

LAB63:    if (t58 != 0)
        goto LAB65;

LAB66:    memset(t61, 0, 8);
    t67 = (t18 + 4);
    t62 = *((unsigned int *)t67);
    t63 = (~(t62));
    t64 = *((unsigned int *)t18);
    t65 = (t64 & t63);
    t66 = (t65 & 1U);
    if (t66 != 0)
        goto LAB67;

LAB68:    if (*((unsigned int *)t67) != 0)
        goto LAB69;

LAB70:    t69 = *((unsigned int *)t17);
    t70 = *((unsigned int *)t61);
    t71 = (t69 & t70);
    *((unsigned int *)t68) = t71;
    t73 = (t17 + 4);
    t74 = (t61 + 4);
    t82 = (t68 + 4);
    t75 = *((unsigned int *)t73);
    t76 = *((unsigned int *)t74);
    t77 = (t75 | t76);
    *((unsigned int *)t82) = t77;
    t78 = *((unsigned int *)t82);
    t79 = (t78 != 0);
    if (t79 == 1)
        goto LAB71;

LAB72:
LAB73:    goto LAB62;

LAB64:    *((unsigned int *)t18) = 1;
    goto LAB66;

LAB65:    t30 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB66;

LAB67:    *((unsigned int *)t61) = 1;
    goto LAB70;

LAB69:    t72 = (t61 + 4);
    *((unsigned int *)t61) = 1;
    *((unsigned int *)t72) = 1;
    goto LAB70;

LAB71:    t80 = *((unsigned int *)t68);
    t81 = *((unsigned int *)t82);
    *((unsigned int *)t68) = (t80 | t81);
    t83 = (t17 + 4);
    t98 = (t61 + 4);
    t84 = *((unsigned int *)t17);
    t85 = (~(t84));
    t86 = *((unsigned int *)t83);
    t87 = (~(t86));
    t88 = *((unsigned int *)t61);
    t89 = (~(t88));
    t90 = *((unsigned int *)t98);
    t91 = (~(t90));
    t32 = (t85 & t87);
    t33 = (t89 & t91);
    t92 = (~(t32));
    t93 = (~(t33));
    t94 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t94 & t92);
    t95 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t95 & t93);
    t96 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t96 & t92);
    t97 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t97 & t93);
    goto LAB73;

LAB74:    xsi_set_current_line(113, ng0);

LAB77:    xsi_set_current_line(114, ng0);
    t105 = (t0 + 3912);
    t106 = (t105 + 56U);
    t107 = *((char **)t106);
    t108 = (t0 + 5192);
    t111 = (t0 + 5192);
    t112 = (t111 + 72U);
    t113 = *((char **)t112);
    t114 = (t0 + 5192);
    t115 = (t114 + 64U);
    t116 = *((char **)t115);
    t117 = (t0 + 5352);
    t118 = (t117 + 56U);
    t119 = *((char **)t118);
    xsi_vlog_generic_convert_array_indices(t109, t110, t113, t116, 2, 1, t119, 32, 1);
    t120 = (t109 + 4);
    t121 = *((unsigned int *)t120);
    t36 = (!(t121));
    t122 = (t110 + 4);
    t123 = *((unsigned int *)t122);
    t37 = (!(t123));
    t124 = (t36 && t37);
    if (t124 == 1)
        goto LAB78;

LAB79:    xsi_set_current_line(115, ng0);
    t2 = (t0 + 5352);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = ((char*)((ng2)));
    memset(t9, 0, 8);
    xsi_vlog_signed_add(t9, 32, t5, 32, t7, 32);
    t8 = (t0 + 5512);
    xsi_vlogvar_assign_value(t8, t9, 0, 0, 32);
    goto LAB76;

LAB78:    t125 = *((unsigned int *)t109);
    t126 = *((unsigned int *)t110);
    t127 = (t125 - t126);
    t128 = (t127 + 1);
    xsi_vlogvar_assign_value(t108, t107, 0, *((unsigned int *)t110), t128);
    goto LAB79;

LAB82:    t16 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB83;

LAB84:    *((unsigned int *)t17) = 1;
    goto LAB87;

LAB86:    t20 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB87;

LAB88:    t22 = (t0 + 3912);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = ((char*)((ng3)));
    memset(t18, 0, 8);
    t26 = (t24 + 4);
    t27 = (t25 + 4);
    t49 = *((unsigned int *)t24);
    t50 = *((unsigned int *)t25);
    t51 = (t49 ^ t50);
    t52 = *((unsigned int *)t26);
    t53 = *((unsigned int *)t27);
    t54 = (t52 ^ t53);
    t55 = (t51 | t54);
    t56 = *((unsigned int *)t26);
    t57 = *((unsigned int *)t27);
    t58 = (t56 | t57);
    t59 = (~(t58));
    t60 = (t55 & t59);
    if (t60 != 0)
        goto LAB94;

LAB91:    if (t58 != 0)
        goto LAB93;

LAB92:    *((unsigned int *)t18) = 1;

LAB94:    memset(t61, 0, 8);
    t30 = (t18 + 4);
    t62 = *((unsigned int *)t30);
    t63 = (~(t62));
    t64 = *((unsigned int *)t18);
    t65 = (t64 & t63);
    t66 = (t65 & 1U);
    if (t66 != 0)
        goto LAB95;

LAB96:    if (*((unsigned int *)t30) != 0)
        goto LAB97;

LAB98:    t69 = *((unsigned int *)t17);
    t70 = *((unsigned int *)t61);
    t71 = (t69 & t70);
    *((unsigned int *)t68) = t71;
    t72 = (t17 + 4);
    t73 = (t61 + 4);
    t74 = (t68 + 4);
    t75 = *((unsigned int *)t72);
    t76 = *((unsigned int *)t73);
    t77 = (t75 | t76);
    *((unsigned int *)t74) = t77;
    t78 = *((unsigned int *)t74);
    t79 = (t78 != 0);
    if (t79 == 1)
        goto LAB99;

LAB100:
LAB101:    goto LAB90;

LAB93:    t28 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB94;

LAB95:    *((unsigned int *)t61) = 1;
    goto LAB98;

LAB97:    t67 = (t61 + 4);
    *((unsigned int *)t61) = 1;
    *((unsigned int *)t67) = 1;
    goto LAB98;

LAB99:    t80 = *((unsigned int *)t68);
    t81 = *((unsigned int *)t74);
    *((unsigned int *)t68) = (t80 | t81);
    t82 = (t17 + 4);
    t83 = (t61 + 4);
    t84 = *((unsigned int *)t17);
    t85 = (~(t84));
    t86 = *((unsigned int *)t82);
    t87 = (~(t86));
    t88 = *((unsigned int *)t61);
    t89 = (~(t88));
    t90 = *((unsigned int *)t83);
    t91 = (~(t90));
    t6 = (t85 & t87);
    t32 = (t89 & t91);
    t92 = (~(t6));
    t93 = (~(t32));
    t94 = *((unsigned int *)t74);
    *((unsigned int *)t74) = (t94 & t92);
    t95 = *((unsigned int *)t74);
    *((unsigned int *)t74) = (t95 & t93);
    t96 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t96 & t92);
    t97 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t97 & t93);
    goto LAB101;

LAB102:    xsi_set_current_line(117, ng0);

LAB105:    xsi_set_current_line(118, ng0);
    t104 = ((char*)((ng2)));
    t105 = (t0 + 3112);
    xsi_vlogvar_assign_value(t105, t104, 0, 0, 1);
    xsi_set_current_line(119, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3432);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    goto LAB104;

LAB109:    t21 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB110;

LAB111:    xsi_set_current_line(127, ng0);

LAB114:    xsi_set_current_line(128, ng0);
    t23 = ((char*)((ng1)));
    t24 = (t0 + 5032);
    xsi_vlogvar_assign_value(t24, t23, 0, 0, 32);
    xsi_set_current_line(129, ng0);
    t2 = (t0 + 4552);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = ((char*)((ng2)));
    memset(t9, 0, 8);
    xsi_vlog_signed_add(t9, 32, t5, 32, t7, 32);
    t8 = (t0 + 4872);
    xsi_vlogvar_assign_value(t8, t9, 0, 0, 32);
    goto LAB113;

LAB117:    t21 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB118;

LAB119:    *((unsigned int *)t18) = 1;
    goto LAB122;

LAB121:    t23 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB122;

LAB123:    t25 = (t0 + 4552);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    t28 = (t0 + 4232);
    t30 = (t28 + 56U);
    t67 = *((char **)t30);
    t72 = ((char*)((ng2)));
    memset(t61, 0, 8);
    xsi_vlog_unsigned_minus(t61, 32, t67, 8, t72, 32);
    memset(t68, 0, 8);
    t73 = (t27 + 4);
    t74 = (t61 + 4);
    t49 = *((unsigned int *)t27);
    t50 = *((unsigned int *)t61);
    t51 = (t49 ^ t50);
    t52 = *((unsigned int *)t73);
    t53 = *((unsigned int *)t74);
    t54 = (t52 ^ t53);
    t55 = (t51 | t54);
    t56 = *((unsigned int *)t73);
    t57 = *((unsigned int *)t74);
    t58 = (t56 | t57);
    t59 = (~(t58));
    t60 = (t55 & t59);
    if (t60 != 0)
        goto LAB129;

LAB126:    if (t58 != 0)
        goto LAB128;

LAB127:    *((unsigned int *)t68) = 1;

LAB129:    memset(t109, 0, 8);
    t83 = (t68 + 4);
    t62 = *((unsigned int *)t83);
    t63 = (~(t62));
    t64 = *((unsigned int *)t68);
    t65 = (t64 & t63);
    t66 = (t65 & 1U);
    if (t66 != 0)
        goto LAB130;

LAB131:    if (*((unsigned int *)t83) != 0)
        goto LAB132;

LAB133:    t69 = *((unsigned int *)t18);
    t70 = *((unsigned int *)t109);
    t71 = (t69 & t70);
    *((unsigned int *)t110) = t71;
    t104 = (t18 + 4);
    t105 = (t109 + 4);
    t106 = (t110 + 4);
    t75 = *((unsigned int *)t104);
    t76 = *((unsigned int *)t105);
    t77 = (t75 | t76);
    *((unsigned int *)t106) = t77;
    t78 = *((unsigned int *)t106);
    t79 = (t78 != 0);
    if (t79 == 1)
        goto LAB134;

LAB135:
LAB136:    goto LAB125;

LAB128:    t82 = (t68 + 4);
    *((unsigned int *)t68) = 1;
    *((unsigned int *)t82) = 1;
    goto LAB129;

LAB130:    *((unsigned int *)t109) = 1;
    goto LAB133;

LAB132:    t98 = (t109 + 4);
    *((unsigned int *)t109) = 1;
    *((unsigned int *)t98) = 1;
    goto LAB133;

LAB134:    t80 = *((unsigned int *)t110);
    t81 = *((unsigned int *)t106);
    *((unsigned int *)t110) = (t80 | t81);
    t107 = (t18 + 4);
    t108 = (t109 + 4);
    t84 = *((unsigned int *)t18);
    t85 = (~(t84));
    t86 = *((unsigned int *)t107);
    t87 = (~(t86));
    t88 = *((unsigned int *)t109);
    t89 = (~(t88));
    t90 = *((unsigned int *)t108);
    t91 = (~(t90));
    t6 = (t85 & t87);
    t32 = (t89 & t91);
    t92 = (~(t6));
    t93 = (~(t32));
    t94 = *((unsigned int *)t106);
    *((unsigned int *)t106) = (t94 & t92);
    t95 = *((unsigned int *)t106);
    *((unsigned int *)t106) = (t95 & t93);
    t96 = *((unsigned int *)t110);
    *((unsigned int *)t110) = (t96 & t92);
    t97 = *((unsigned int *)t110);
    *((unsigned int *)t110) = (t97 & t93);
    goto LAB136;

LAB137:    xsi_set_current_line(133, ng0);

LAB140:    xsi_set_current_line(134, ng0);
    t112 = ((char*)((ng2)));
    t113 = (t0 + 3432);
    xsi_vlogvar_assign_value(t113, t112, 0, 0, 32);
    goto LAB139;

}


extern void reference_m_00000000002092188398_3232292778_init()
{
	static char *pe[] = {(void *)Always_66_0,(void *)Always_89_1};
	xsi_register_didat("reference_m_00000000002092188398_3232292778", "isim/tester.exe.sim/reference/m_00000000002092188398_3232292778.didat");
	xsi_register_executes(pe);
}
