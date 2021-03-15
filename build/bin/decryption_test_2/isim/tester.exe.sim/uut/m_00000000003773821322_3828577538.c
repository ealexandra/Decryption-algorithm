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
static const char *ng0 = "C:/Users/Alexandra/Desktop/tema2_task3_integration_tester/tema2_task3_checker/build/bin/demux.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {16U, 0U};
static int ng4[] = {1, 0};
static unsigned int ng5[] = {32U, 0U};
static unsigned int ng6[] = {1U, 0U};
static unsigned int ng7[] = {2U, 0U};
static unsigned int ng8[] = {33U, 0U};
static unsigned int ng9[] = {34U, 0U};
static unsigned int ng10[] = {35U, 0U};



static void Always_55_0(char *t0)
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

LAB0:    t1 = (t0 + 4720U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 5288);
    *((int *)t2) = 1;
    t3 = (t0 + 4752);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(55, ng0);

LAB5:    xsi_set_current_line(56, ng0);
    t4 = (t0 + 1640U);
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

LAB11:    xsi_set_current_line(59, ng0);

LAB14:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 3640);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3480);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 8, 0LL);

LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(56, ng0);

LAB13:    xsi_set_current_line(57, ng0);
    t28 = ((char*)((ng2)));
    t29 = (t0 + 3480);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 8, 0LL);
    goto LAB12;

}

static void Always_64_1(char *t0)
{
    char t11[8];
    char t32[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;
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
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    int t31;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;

LAB0:    t1 = (t0 + 4968U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 5304);
    *((int *)t2) = 1;
    t3 = (t0 + 5000);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(64, ng0);

LAB5:    xsi_set_current_line(65, ng0);
    t4 = (t0 + 3480);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 8, t7, 8);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 8, t2, 8);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 8, t2, 8);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng8)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 8, t2, 8);
    if (t8 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng9)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 8, t2, 8);
    if (t8 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng10)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 8, t2, 8);
    if (t8 == 1)
        goto LAB17;

LAB18:
LAB19:    goto LAB2;

LAB7:    xsi_set_current_line(67, ng0);

LAB20:    xsi_set_current_line(69, ng0);
    t9 = ((char*)((ng1)));
    t10 = (t0 + 3800);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 32);
    xsi_set_current_line(70, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2680);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3000);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3320);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2520);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(74, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2840);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3160);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3640);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    goto LAB19;

LAB9:    xsi_set_current_line(80, ng0);

LAB21:    xsi_set_current_line(81, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 2680);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(82, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3000);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(83, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3320);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(85, ng0);
    t2 = (t0 + 2120U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng4)));
    memset(t11, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t12 = *((unsigned int *)t3);
    t13 = *((unsigned int *)t2);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t5);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t4);
    t20 = *((unsigned int *)t5);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB25;

LAB22:    if (t21 != 0)
        goto LAB24;

LAB23:    *((unsigned int *)t11) = 1;

LAB25:    t9 = (t11 + 4);
    t24 = *((unsigned int *)t9);
    t25 = (~(t24));
    t26 = *((unsigned int *)t11);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB26;

LAB27:    xsi_set_current_line(89, ng0);

LAB30:    xsi_set_current_line(90, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3640);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);

LAB28:    goto LAB19;

LAB11:    xsi_set_current_line(94, ng0);

LAB31:    xsi_set_current_line(95, ng0);
    t3 = (t0 + 2120U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng1)));
    memset(t11, 0, 8);
    t5 = (t4 + 4);
    t7 = (t3 + 4);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t3);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t5);
    t16 = *((unsigned int *)t7);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t5);
    t20 = *((unsigned int *)t7);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB35;

LAB32:    if (t21 != 0)
        goto LAB34;

LAB33:    *((unsigned int *)t11) = 1;

LAB35:    t10 = (t11 + 4);
    t24 = *((unsigned int *)t10);
    t25 = (~(t24));
    t26 = *((unsigned int *)t11);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB36;

LAB37:    xsi_set_current_line(112, ng0);

LAB51:    xsi_set_current_line(113, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3640);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);

LAB38:    goto LAB19;

LAB13:    xsi_set_current_line(117, ng0);

LAB52:    xsi_set_current_line(118, ng0);
    t3 = (t0 + 1800U);
    t4 = *((char **)t3);

LAB53:    t3 = ((char*)((ng2)));
    t31 = xsi_vlog_unsigned_case_compare(t4, 2, t3, 2);
    if (t31 == 1)
        goto LAB54;

LAB55:    t2 = ((char*)((ng6)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t8 == 1)
        goto LAB56;

LAB57:    t2 = ((char*)((ng7)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t8 == 1)
        goto LAB58;

LAB59:
LAB60:    xsi_set_current_line(132, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 3640);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    goto LAB19;

LAB15:    xsi_set_current_line(135, ng0);

LAB64:    xsi_set_current_line(136, ng0);
    t3 = (t0 + 1800U);
    t5 = *((char **)t3);

LAB65:    t3 = ((char*)((ng2)));
    t31 = xsi_vlog_unsigned_case_compare(t5, 2, t3, 2);
    if (t31 == 1)
        goto LAB66;

LAB67:    t2 = ((char*)((ng6)));
    t8 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t8 == 1)
        goto LAB68;

LAB69:    t2 = ((char*)((ng7)));
    t8 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t8 == 1)
        goto LAB70;

LAB71:
LAB72:    xsi_set_current_line(150, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 3640);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    goto LAB19;

LAB17:    xsi_set_current_line(153, ng0);

LAB76:    xsi_set_current_line(154, ng0);
    t3 = (t0 + 1800U);
    t7 = *((char **)t3);

LAB77:    t3 = ((char*)((ng2)));
    t31 = xsi_vlog_unsigned_case_compare(t7, 2, t3, 2);
    if (t31 == 1)
        goto LAB78;

LAB79:    t2 = ((char*)((ng6)));
    t8 = xsi_vlog_unsigned_case_compare(t7, 2, t2, 2);
    if (t8 == 1)
        goto LAB80;

LAB81:    t2 = ((char*)((ng7)));
    t8 = xsi_vlog_unsigned_case_compare(t7, 2, t2, 2);
    if (t8 == 1)
        goto LAB82;

LAB83:
LAB84:    xsi_set_current_line(168, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3640);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    goto LAB19;

LAB24:    t7 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB25;

LAB26:    xsi_set_current_line(85, ng0);

LAB29:    xsi_set_current_line(86, ng0);
    t10 = (t0 + 1960U);
    t29 = *((char **)t10);
    t10 = (t0 + 3800);
    xsi_vlogvar_assign_value(t10, t29, 0, 0, 32);
    xsi_set_current_line(87, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3640);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    goto LAB28;

LAB34:    t9 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB35;

LAB36:    xsi_set_current_line(95, ng0);

LAB39:    xsi_set_current_line(96, ng0);
    t29 = (t0 + 1800U);
    t30 = *((char **)t29);

LAB40:    t29 = ((char*)((ng2)));
    t31 = xsi_vlog_unsigned_case_compare(t30, 2, t29, 2);
    if (t31 == 1)
        goto LAB41;

LAB42:    t2 = ((char*)((ng6)));
    t8 = xsi_vlog_unsigned_case_compare(t30, 2, t2, 2);
    if (t8 == 1)
        goto LAB43;

LAB44:    t2 = ((char*)((ng7)));
    t8 = xsi_vlog_unsigned_case_compare(t30, 2, t2, 2);
    if (t8 == 1)
        goto LAB45;

LAB46:
LAB47:    xsi_set_current_line(110, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 3640);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    goto LAB38;

LAB41:    xsi_set_current_line(97, ng0);

LAB48:    xsi_set_current_line(98, ng0);
    t33 = (t0 + 3800);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    memset(t32, 0, 8);
    t36 = (t32 + 4);
    t37 = (t35 + 4);
    t38 = *((unsigned int *)t35);
    t39 = (t38 >> 0);
    *((unsigned int *)t32) = t39;
    t40 = *((unsigned int *)t37);
    t41 = (t40 >> 0);
    *((unsigned int *)t36) = t41;
    t42 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t42 & 255U);
    t43 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t43 & 255U);
    t44 = (t0 + 2520);
    xsi_vlogvar_assign_value(t44, t32, 0, 0, 8);
    xsi_set_current_line(99, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2680);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB47;

LAB43:    xsi_set_current_line(101, ng0);

LAB49:    xsi_set_current_line(102, ng0);
    t3 = (t0 + 3800);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t11, 0, 8);
    t7 = (t11 + 4);
    t9 = (t5 + 4);
    t12 = *((unsigned int *)t5);
    t13 = (t12 >> 0);
    *((unsigned int *)t11) = t13;
    t14 = *((unsigned int *)t9);
    t15 = (t14 >> 0);
    *((unsigned int *)t7) = t15;
    t16 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t16 & 255U);
    t17 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t17 & 255U);
    t10 = (t0 + 2840);
    xsi_vlogvar_assign_value(t10, t11, 0, 0, 8);
    xsi_set_current_line(103, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3000);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB47;

LAB45:    xsi_set_current_line(105, ng0);

LAB50:    xsi_set_current_line(106, ng0);
    t3 = (t0 + 3800);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t11, 0, 8);
    t7 = (t11 + 4);
    t9 = (t5 + 4);
    t12 = *((unsigned int *)t5);
    t13 = (t12 >> 0);
    *((unsigned int *)t11) = t13;
    t14 = *((unsigned int *)t9);
    t15 = (t14 >> 0);
    *((unsigned int *)t7) = t15;
    t16 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t16 & 255U);
    t17 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t17 & 255U);
    t10 = (t0 + 3160);
    xsi_vlogvar_assign_value(t10, t11, 0, 0, 8);
    xsi_set_current_line(107, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3320);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB47;

LAB54:    xsi_set_current_line(119, ng0);

LAB61:    xsi_set_current_line(120, ng0);
    t5 = (t0 + 3800);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    memset(t11, 0, 8);
    t10 = (t11 + 4);
    t29 = (t9 + 4);
    t12 = *((unsigned int *)t9);
    t13 = (t12 >> 8);
    *((unsigned int *)t11) = t13;
    t14 = *((unsigned int *)t29);
    t15 = (t14 >> 8);
    *((unsigned int *)t10) = t15;
    t16 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t16 & 255U);
    t17 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t17 & 255U);
    t33 = (t0 + 2520);
    xsi_vlogvar_assign_value(t33, t11, 0, 0, 8);
    xsi_set_current_line(121, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2680);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB60;

LAB56:    xsi_set_current_line(123, ng0);

LAB62:    xsi_set_current_line(124, ng0);
    t3 = (t0 + 3800);
    t5 = (t3 + 56U);
    t7 = *((char **)t5);
    memset(t11, 0, 8);
    t9 = (t11 + 4);
    t10 = (t7 + 4);
    t12 = *((unsigned int *)t7);
    t13 = (t12 >> 8);
    *((unsigned int *)t11) = t13;
    t14 = *((unsigned int *)t10);
    t15 = (t14 >> 8);
    *((unsigned int *)t9) = t15;
    t16 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t16 & 255U);
    t17 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t17 & 255U);
    t29 = (t0 + 2840);
    xsi_vlogvar_assign_value(t29, t11, 0, 0, 8);
    xsi_set_current_line(125, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3000);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB60;

LAB58:    xsi_set_current_line(127, ng0);

LAB63:    xsi_set_current_line(128, ng0);
    t3 = (t0 + 3800);
    t5 = (t3 + 56U);
    t7 = *((char **)t5);
    memset(t11, 0, 8);
    t9 = (t11 + 4);
    t10 = (t7 + 4);
    t12 = *((unsigned int *)t7);
    t13 = (t12 >> 8);
    *((unsigned int *)t11) = t13;
    t14 = *((unsigned int *)t10);
    t15 = (t14 >> 8);
    *((unsigned int *)t9) = t15;
    t16 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t16 & 255U);
    t17 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t17 & 255U);
    t29 = (t0 + 3160);
    xsi_vlogvar_assign_value(t29, t11, 0, 0, 8);
    xsi_set_current_line(129, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3320);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB60;

LAB66:    xsi_set_current_line(137, ng0);

LAB73:    xsi_set_current_line(138, ng0);
    t7 = (t0 + 3800);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    memset(t11, 0, 8);
    t29 = (t11 + 4);
    t33 = (t10 + 4);
    t12 = *((unsigned int *)t10);
    t13 = (t12 >> 16);
    *((unsigned int *)t11) = t13;
    t14 = *((unsigned int *)t33);
    t15 = (t14 >> 16);
    *((unsigned int *)t29) = t15;
    t16 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t16 & 255U);
    t17 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t17 & 255U);
    t34 = (t0 + 2520);
    xsi_vlogvar_assign_value(t34, t11, 0, 0, 8);
    xsi_set_current_line(139, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2680);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB72;

LAB68:    xsi_set_current_line(141, ng0);

LAB74:    xsi_set_current_line(142, ng0);
    t3 = (t0 + 3800);
    t7 = (t3 + 56U);
    t9 = *((char **)t7);
    memset(t11, 0, 8);
    t10 = (t11 + 4);
    t29 = (t9 + 4);
    t12 = *((unsigned int *)t9);
    t13 = (t12 >> 16);
    *((unsigned int *)t11) = t13;
    t14 = *((unsigned int *)t29);
    t15 = (t14 >> 16);
    *((unsigned int *)t10) = t15;
    t16 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t16 & 255U);
    t17 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t17 & 255U);
    t33 = (t0 + 2840);
    xsi_vlogvar_assign_value(t33, t11, 0, 0, 8);
    xsi_set_current_line(143, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3000);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB72;

LAB70:    xsi_set_current_line(145, ng0);

LAB75:    xsi_set_current_line(146, ng0);
    t3 = (t0 + 3800);
    t7 = (t3 + 56U);
    t9 = *((char **)t7);
    memset(t11, 0, 8);
    t10 = (t11 + 4);
    t29 = (t9 + 4);
    t12 = *((unsigned int *)t9);
    t13 = (t12 >> 16);
    *((unsigned int *)t11) = t13;
    t14 = *((unsigned int *)t29);
    t15 = (t14 >> 16);
    *((unsigned int *)t10) = t15;
    t16 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t16 & 255U);
    t17 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t17 & 255U);
    t33 = (t0 + 3160);
    xsi_vlogvar_assign_value(t33, t11, 0, 0, 8);
    xsi_set_current_line(147, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3320);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB72;

LAB78:    xsi_set_current_line(155, ng0);

LAB85:    xsi_set_current_line(156, ng0);
    t9 = (t0 + 3800);
    t10 = (t9 + 56U);
    t29 = *((char **)t10);
    memset(t11, 0, 8);
    t33 = (t11 + 4);
    t34 = (t29 + 4);
    t12 = *((unsigned int *)t29);
    t13 = (t12 >> 24);
    *((unsigned int *)t11) = t13;
    t14 = *((unsigned int *)t34);
    t15 = (t14 >> 24);
    *((unsigned int *)t33) = t15;
    t16 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t16 & 255U);
    t17 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t17 & 255U);
    t35 = (t0 + 2520);
    xsi_vlogvar_assign_value(t35, t11, 0, 0, 8);
    xsi_set_current_line(157, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2680);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB84;

LAB80:    xsi_set_current_line(159, ng0);

LAB86:    xsi_set_current_line(160, ng0);
    t3 = (t0 + 3800);
    t9 = (t3 + 56U);
    t10 = *((char **)t9);
    memset(t11, 0, 8);
    t29 = (t11 + 4);
    t33 = (t10 + 4);
    t12 = *((unsigned int *)t10);
    t13 = (t12 >> 24);
    *((unsigned int *)t11) = t13;
    t14 = *((unsigned int *)t33);
    t15 = (t14 >> 24);
    *((unsigned int *)t29) = t15;
    t16 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t16 & 255U);
    t17 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t17 & 255U);
    t34 = (t0 + 2840);
    xsi_vlogvar_assign_value(t34, t11, 0, 0, 8);
    xsi_set_current_line(161, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3000);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB84;

LAB82:    xsi_set_current_line(163, ng0);

LAB87:    xsi_set_current_line(164, ng0);
    t3 = (t0 + 3800);
    t9 = (t3 + 56U);
    t10 = *((char **)t9);
    memset(t11, 0, 8);
    t29 = (t11 + 4);
    t33 = (t10 + 4);
    t12 = *((unsigned int *)t10);
    t13 = (t12 >> 24);
    *((unsigned int *)t11) = t13;
    t14 = *((unsigned int *)t33);
    t15 = (t14 >> 24);
    *((unsigned int *)t29) = t15;
    t16 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t16 & 255U);
    t17 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t17 & 255U);
    t34 = (t0 + 3160);
    xsi_vlogvar_assign_value(t34, t11, 0, 0, 8);
    xsi_set_current_line(165, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3320);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB84;

}


extern void uut_m_00000000003773821322_3828577538_init()
{
	static char *pe[] = {(void *)Always_55_0,(void *)Always_64_1};
	xsi_register_didat("uut_m_00000000003773821322_3828577538", "isim/tester.exe.sim/uut/m_00000000003773821322_3828577538.didat");
	xsi_register_executes(pe);
}
