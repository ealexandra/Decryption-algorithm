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
static const char *ng0 = "C:/Users/Alexandra/Desktop/tema2_task3_integration_tester/tema2_task3_checker/build/bin/mux.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {16U, 0U};
static int ng4[] = {1, 0};
static unsigned int ng5[] = {32U, 0U};
static unsigned int ng6[] = {1U, 0U};
static unsigned int ng7[] = {2U, 0U};



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

LAB0:    t1 = (t0 + 4424U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 4992);
    *((int *)t2) = 1;
    t3 = (t0 + 4456);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(55, ng0);

LAB5:    xsi_set_current_line(56, ng0);
    t4 = (t0 + 1344U);
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
    t2 = (t0 + 3344);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3184);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 8, 0LL);

LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(56, ng0);

LAB13:    xsi_set_current_line(57, ng0);
    t28 = ((char*)((ng2)));
    t29 = (t0 + 3184);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 8, 0LL);
    goto LAB12;

}

static void Always_64_1(char *t0)
{
    char t11[8];
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
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;

LAB0:    t1 = (t0 + 4672U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 5008);
    *((int *)t2) = 1;
    t3 = (t0 + 4704);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(64, ng0);

LAB5:    xsi_set_current_line(65, ng0);
    t4 = (t0 + 3184);
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

LAB12:
LAB13:    goto LAB2;

LAB7:    xsi_set_current_line(67, ng0);

LAB14:    xsi_set_current_line(70, ng0);
    t9 = ((char*)((ng3)));
    t10 = (t0 + 3344);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 8);
    goto LAB13;

LAB9:    xsi_set_current_line(73, ng0);

LAB15:    xsi_set_current_line(74, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 3024);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(75, ng0);
    t2 = (t0 + 1504U);
    t3 = *((char **)t2);

LAB16:    t2 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t8 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng6)));
    t8 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t8 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng7)));
    t8 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t8 == 1)
        goto LAB21;

LAB22:
LAB23:    goto LAB13;

LAB11:    xsi_set_current_line(98, ng0);

LAB51:    xsi_set_current_line(99, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t0 + 3024);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(100, ng0);
    t2 = (t0 + 3504);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 2864);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 8);
    xsi_set_current_line(101, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 3344);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 8);
    goto LAB13;

LAB17:    xsi_set_current_line(76, ng0);

LAB24:    xsi_set_current_line(77, ng0);
    t4 = (t0 + 1824U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng4)));
    memset(t11, 0, 8);
    t7 = (t5 + 4);
    t9 = (t4 + 4);
    t12 = *((unsigned int *)t5);
    t13 = *((unsigned int *)t4);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t7);
    t16 = *((unsigned int *)t9);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t7);
    t20 = *((unsigned int *)t9);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB28;

LAB25:    if (t21 != 0)
        goto LAB27;

LAB26:    *((unsigned int *)t11) = 1;

LAB28:    t24 = (t11 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t11);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB29;

LAB30:
LAB31:    goto LAB23;

LAB19:    xsi_set_current_line(82, ng0);

LAB33:    xsi_set_current_line(83, ng0);
    t4 = (t0 + 2144U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng4)));
    memset(t11, 0, 8);
    t7 = (t5 + 4);
    t9 = (t4 + 4);
    t12 = *((unsigned int *)t5);
    t13 = *((unsigned int *)t4);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t7);
    t16 = *((unsigned int *)t9);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t7);
    t20 = *((unsigned int *)t9);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB37;

LAB34:    if (t21 != 0)
        goto LAB36;

LAB35:    *((unsigned int *)t11) = 1;

LAB37:    t24 = (t11 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t11);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB38;

LAB39:
LAB40:    goto LAB23;

LAB21:    xsi_set_current_line(88, ng0);

LAB42:    xsi_set_current_line(89, ng0);
    t4 = (t0 + 2464U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng4)));
    memset(t11, 0, 8);
    t7 = (t5 + 4);
    t9 = (t4 + 4);
    t12 = *((unsigned int *)t5);
    t13 = *((unsigned int *)t4);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t7);
    t16 = *((unsigned int *)t9);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t7);
    t20 = *((unsigned int *)t9);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB46;

LAB43:    if (t21 != 0)
        goto LAB45;

LAB44:    *((unsigned int *)t11) = 1;

LAB46:    t24 = (t11 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t11);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB47;

LAB48:
LAB49:    goto LAB23;

LAB27:    t10 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB28;

LAB29:    xsi_set_current_line(77, ng0);

LAB32:    xsi_set_current_line(78, ng0);
    t30 = (t0 + 1664U);
    t31 = *((char **)t30);
    t30 = (t0 + 3504);
    xsi_vlogvar_assign_value(t30, t31, 0, 0, 8);
    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng5)));
    t4 = (t0 + 3344);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 8);
    goto LAB31;

LAB36:    t10 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB37;

LAB38:    xsi_set_current_line(83, ng0);

LAB41:    xsi_set_current_line(84, ng0);
    t30 = (t0 + 1984U);
    t31 = *((char **)t30);
    t30 = (t0 + 3504);
    xsi_vlogvar_assign_value(t30, t31, 0, 0, 8);
    xsi_set_current_line(85, ng0);
    t2 = ((char*)((ng5)));
    t4 = (t0 + 3344);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 8);
    goto LAB40;

LAB45:    t10 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB46;

LAB47:    xsi_set_current_line(89, ng0);

LAB50:    xsi_set_current_line(90, ng0);
    t30 = (t0 + 2304U);
    t31 = *((char **)t30);
    t30 = (t0 + 3504);
    xsi_vlogvar_assign_value(t30, t31, 0, 0, 8);
    xsi_set_current_line(91, ng0);
    t2 = ((char*)((ng5)));
    t4 = (t0 + 3344);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 8);
    goto LAB49;

}


extern void uut_m_00000000000109541039_1323274903_init()
{
	static char *pe[] = {(void *)Always_55_0,(void *)Always_64_1};
	xsi_register_didat("uut_m_00000000000109541039_1323274903", "isim/tester.exe.sim/uut/m_00000000000109541039_1323274903.didat");
	xsi_register_executes(pe);
}
