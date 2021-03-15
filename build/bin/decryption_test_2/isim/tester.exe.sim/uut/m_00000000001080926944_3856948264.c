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
static const char *ng0 = "C:/Users/Alexandra/Desktop/tema2_task3_integration_tester/tema2_task3_checker/build/bin/caesar_decryption.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {0U, 0U};
static int ng3[] = {1, 0};



static void Always_47_0(char *t0)
{
    char t4[8];
    char t21[8];
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
    char *t19;
    char *t20;

LAB0:    t1 = (t0 + 3920U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 4488);
    *((int *)t2) = 1;
    t3 = (t0 + 3952);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(47, ng0);

LAB5:    xsi_set_current_line(48, ng0);
    t5 = (t0 + 1480U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 1800U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB14;

LAB15:    xsi_set_current_line(56, ng0);

LAB18:    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2840);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3000);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB16:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(48, ng0);

LAB13:    xsi_set_current_line(49, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 2840);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 8, 0LL);
    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3000);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB12;

LAB14:    xsi_set_current_line(52, ng0);

LAB17:    xsi_set_current_line(53, ng0);
    t5 = (t0 + 1640U);
    t6 = *((char **)t5);
    t5 = ((char*)((ng2)));
    xsi_vlogtype_concat(t4, 16, 16, 2U, t5, 8, t6, 8);
    t12 = (t0 + 1960U);
    t13 = *((char **)t12);
    memset(t21, 0, 8);
    xsi_vlog_unsigned_minus(t21, 16, t4, 16, t13, 16);
    t12 = (t0 + 2840);
    xsi_vlogvar_wait_assign_value(t12, t21, 0, 0, 8, 0LL);
    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3000);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB16;

}

static void Always_62_1(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;

LAB0:    t1 = (t0 + 4168U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 4504);
    *((int *)t2) = 1;
    t3 = (t0 + 4200);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(62, ng0);

LAB5:    xsi_set_current_line(63, ng0);
    t5 = (t0 + 2840);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t4, 0, 8);
    t8 = (t4 + 4);
    t9 = (t7 + 4);
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 0);
    *((unsigned int *)t4) = t11;
    t12 = *((unsigned int *)t9);
    t13 = (t12 >> 0);
    *((unsigned int *)t8) = t13;
    t14 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t14 & 255U);
    t15 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t15 & 255U);
    t16 = (t0 + 2360);
    xsi_vlogvar_assign_value(t16, t4, 0, 0, 8);
    xsi_set_current_line(64, ng0);
    t2 = (t0 + 3000);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 2520);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 1);
    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2680);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB2;

}


extern void uut_m_00000000001080926944_3856948264_init()
{
	static char *pe[] = {(void *)Always_47_0,(void *)Always_62_1};
	xsi_register_didat("uut_m_00000000001080926944_3856948264", "isim/tester.exe.sim/uut/m_00000000001080926944_3856948264.didat");
	xsi_register_executes(pe);
}
