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
static const char *ng0 = "C:/Users/Alexandra/Desktop/tema2_task3_integration_tester/tema2_task3_checker/build/bin/reference/ref_decryption_regfile.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {65535U, 0U};
static unsigned int ng4[] = {2U, 0U};
static int ng5[] = {1, 0};
static unsigned int ng6[] = {3U, 0U};
static unsigned int ng7[] = {16U, 0U};
static unsigned int ng8[] = {18U, 0U};
static unsigned int ng9[] = {20U, 0U};
static unsigned int ng10[] = {57005U, 0U};



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

LAB0:    t1 = (t0 + 5360U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 5928);
    *((int *)t2) = 1;
    t3 = (t0 + 5392);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(61, ng0);

LAB5:    xsi_set_current_line(62, ng0);
    t4 = (t0 + 1480U);
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

LAB11:    xsi_set_current_line(69, ng0);

LAB14:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 3800);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3640);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 0LL);
    xsi_set_current_line(71, ng0);
    t2 = (t0 + 1640U);
    t3 = *((char **)t2);
    t2 = (t0 + 3960);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 8, 0LL);
    xsi_set_current_line(72, ng0);
    t2 = (t0 + 1800U);
    t3 = *((char **)t2);
    t2 = (t0 + 4120);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(73, ng0);
    t2 = (t0 + 1960U);
    t3 = *((char **)t2);
    t2 = (t0 + 4280);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(74, ng0);
    t2 = (t0 + 2120U);
    t3 = *((char **)t2);
    t2 = (t0 + 4440);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 16, 0LL);

LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(62, ng0);

LAB13:    xsi_set_current_line(63, ng0);
    t28 = ((char*)((ng1)));
    t29 = (t0 + 3640);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 32, 0LL);
    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3960);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4120);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4280);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4440);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 16, 0LL);
    goto LAB12;

}

static void Always_78_1(char *t0)
{
    char t9[8];
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
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    unsigned int t35;
    int t36;
    int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;

LAB0:    t1 = (t0 + 5608U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(78, ng0);
    t2 = (t0 + 5944);
    *((int *)t2) = 1;
    t3 = (t0 + 5640);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(78, ng0);

LAB5:    xsi_set_current_line(79, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 2680);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(80, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2840);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(81, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2520);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);
    xsi_set_current_line(82, ng0);
    t2 = (t0 + 3640);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB6:    t5 = ((char*)((ng1)));
    t6 = xsi_vlog_signed_case_compare(t4, 32, t5, 32);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_signed_case_compare(t4, 32, t2, 32);
    if (t6 == 1)
        goto LAB9;

LAB10:
LAB11:    goto LAB2;

LAB7:    xsi_set_current_line(83, ng0);

LAB12:    xsi_set_current_line(84, ng0);
    t7 = ((char*)((ng1)));
    t8 = (t0 + 3000);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 16);
    xsi_set_current_line(85, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3160);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);
    xsi_set_current_line(86, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3320);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);
    xsi_set_current_line(87, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3480);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);
    xsi_set_current_line(88, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3800);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    goto LAB11;

LAB9:    xsi_set_current_line(90, ng0);

LAB13:    xsi_set_current_line(91, ng0);
    t3 = (t0 + 4280);
    t5 = (t3 + 56U);
    t7 = *((char **)t5);
    t8 = ((char*)((ng5)));
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

LAB17:    t25 = (t9 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t9);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB18;

LAB19:
LAB20:    xsi_set_current_line(102, ng0);
    t2 = (t0 + 4120);
    t3 = (t2 + 56U);
    t7 = *((char **)t3);
    t8 = ((char*)((ng5)));
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
        goto LAB40;

LAB37:    if (t21 != 0)
        goto LAB39;

LAB38:    *((unsigned int *)t9) = 1;

LAB40:    t25 = (t9 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t9);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB41;

LAB42:
LAB43:    goto LAB11;

LAB16:    t24 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB17;

LAB18:    xsi_set_current_line(91, ng0);

LAB21:    xsi_set_current_line(92, ng0);
    t31 = ((char*)((ng5)));
    t32 = (t0 + 2680);
    xsi_vlogvar_assign_value(t32, t31, 0, 0, 1);
    xsi_set_current_line(93, ng0);
    t2 = (t0 + 3960);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);

LAB22:    t7 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 8, t7, 8);
    if (t6 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 8, t2, 8);
    if (t6 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 8, t2, 8);
    if (t6 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 8, t2, 8);
    if (t6 == 1)
        goto LAB29;

LAB30:
LAB32:
LAB31:    xsi_set_current_line(98, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2840);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB33:    goto LAB20;

LAB23:    xsi_set_current_line(94, ng0);
    t8 = (t0 + 4440);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    t24 = ((char*)((ng6)));
    t12 = *((unsigned int *)t11);
    t13 = *((unsigned int *)t24);
    t14 = (t12 & t13);
    *((unsigned int *)t9) = t14;
    t25 = (t11 + 4);
    t31 = (t24 + 4);
    t32 = (t9 + 4);
    t15 = *((unsigned int *)t25);
    t16 = *((unsigned int *)t31);
    t17 = (t15 | t16);
    *((unsigned int *)t32) = t17;
    t18 = *((unsigned int *)t32);
    t19 = (t18 != 0);
    if (t19 == 1)
        goto LAB34;

LAB35:
LAB36:    t44 = (t0 + 3000);
    xsi_vlogvar_assign_value(t44, t9, 0, 0, 16);
    goto LAB33;

LAB25:    xsi_set_current_line(95, ng0);
    t3 = (t0 + 4440);
    t7 = (t3 + 56U);
    t8 = *((char **)t7);
    t10 = (t0 + 3160);
    xsi_vlogvar_assign_value(t10, t8, 0, 0, 16);
    goto LAB33;

LAB27:    xsi_set_current_line(96, ng0);
    t3 = (t0 + 4440);
    t7 = (t3 + 56U);
    t8 = *((char **)t7);
    t10 = (t0 + 3320);
    xsi_vlogvar_assign_value(t10, t8, 0, 0, 16);
    goto LAB33;

LAB29:    xsi_set_current_line(97, ng0);
    t3 = (t0 + 4440);
    t7 = (t3 + 56U);
    t8 = *((char **)t7);
    t10 = (t0 + 3480);
    xsi_vlogvar_assign_value(t10, t8, 0, 0, 16);
    goto LAB33;

LAB34:    t20 = *((unsigned int *)t9);
    t21 = *((unsigned int *)t32);
    *((unsigned int *)t9) = (t20 | t21);
    t33 = (t11 + 4);
    t34 = (t24 + 4);
    t22 = *((unsigned int *)t11);
    t23 = (~(t22));
    t26 = *((unsigned int *)t33);
    t27 = (~(t26));
    t28 = *((unsigned int *)t24);
    t29 = (~(t28));
    t30 = *((unsigned int *)t34);
    t35 = (~(t30));
    t36 = (t23 & t27);
    t37 = (t29 & t35);
    t38 = (~(t36));
    t39 = (~(t37));
    t40 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t40 & t38);
    t41 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t41 & t39);
    t42 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t42 & t38);
    t43 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t43 & t39);
    goto LAB36;

LAB39:    t24 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB40;

LAB41:    xsi_set_current_line(102, ng0);

LAB44:    xsi_set_current_line(103, ng0);
    t31 = ((char*)((ng5)));
    t32 = (t0 + 2680);
    xsi_vlogvar_assign_value(t32, t31, 0, 0, 1);
    xsi_set_current_line(104, ng0);
    t2 = (t0 + 3960);
    t3 = (t2 + 56U);
    t7 = *((char **)t3);

LAB45:    t8 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t7, 8, t8, 8);
    if (t6 == 1)
        goto LAB46;

LAB47:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t7, 8, t2, 8);
    if (t6 == 1)
        goto LAB48;

LAB49:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t7, 8, t2, 8);
    if (t6 == 1)
        goto LAB50;

LAB51:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t7, 8, t2, 8);
    if (t6 == 1)
        goto LAB52;

LAB53:
LAB55:
LAB54:    xsi_set_current_line(109, ng0);

LAB57:    xsi_set_current_line(110, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2840);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(111, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 2520);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);

LAB56:    goto LAB43;

LAB46:    xsi_set_current_line(105, ng0);
    t10 = (t0 + 3000);
    t11 = (t10 + 56U);
    t24 = *((char **)t11);
    t25 = (t0 + 2520);
    xsi_vlogvar_assign_value(t25, t24, 0, 0, 16);
    goto LAB56;

LAB48:    xsi_set_current_line(106, ng0);
    t3 = (t0 + 3160);
    t8 = (t3 + 56U);
    t10 = *((char **)t8);
    t11 = (t0 + 2520);
    xsi_vlogvar_assign_value(t11, t10, 0, 0, 16);
    goto LAB56;

LAB50:    xsi_set_current_line(107, ng0);
    t3 = (t0 + 3320);
    t8 = (t3 + 56U);
    t10 = *((char **)t8);
    t11 = (t0 + 2520);
    xsi_vlogvar_assign_value(t11, t10, 0, 0, 16);
    goto LAB56;

LAB52:    xsi_set_current_line(108, ng0);
    t3 = (t0 + 3480);
    t8 = (t3 + 56U);
    t10 = *((char **)t8);
    t11 = (t0 + 2520);
    xsi_vlogvar_assign_value(t11, t10, 0, 0, 16);
    goto LAB56;

}


extern void reference_m_00000000002111280355_4238855196_init()
{
	static char *pe[] = {(void *)Always_61_0,(void *)Always_78_1};
	xsi_register_didat("reference_m_00000000002111280355_4238855196", "isim/tester.exe.sim/reference/m_00000000002111280355_4238855196.didat");
	xsi_register_executes(pe);
}
