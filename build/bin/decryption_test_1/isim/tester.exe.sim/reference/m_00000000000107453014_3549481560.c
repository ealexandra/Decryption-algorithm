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
static const char *ng0 = "C:/Users/Alexandra/Desktop/tema2_task3_integration_tester/tema2_task3_checker/build/bin/reference/ref_demux.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static int ng3[] = {2, 0};



static void Always_60_0(char *t0)
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

LAB0:    t1 = (t0 + 4744U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 5560);
    *((int *)t2) = 1;
    t3 = (t0 + 4776);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(60, ng0);

LAB5:    xsi_set_current_line(61, ng0);
    t4 = (t0 + 1504U);
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

LAB11:    xsi_set_current_line(65, ng0);

LAB14:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 1984U);
    t3 = *((char **)t2);
    t2 = (t0 + 3504);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(67, ng0);
    t2 = (t0 + 1824U);
    t3 = *((char **)t2);
    t2 = (t0 + 3344);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);

LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(61, ng0);

LAB13:    xsi_set_current_line(62, ng0);
    t28 = ((char*)((ng1)));
    t29 = (t0 + 3504);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 1, 0LL);
    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3344);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    goto LAB12;

}

static void Always_71_1(char *t0)
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

LAB0:    t1 = (t0 + 4992U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(71, ng0);
    t2 = (t0 + 5576);
    *((int *)t2) = 1;
    t3 = (t0 + 5024);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(71, ng0);

LAB5:    xsi_set_current_line(72, ng0);
    t4 = (t0 + 1504U);
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
    t2 = (t0 + 3824);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3664);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 0LL);

LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(72, ng0);

LAB13:    xsi_set_current_line(73, ng0);
    t28 = ((char*)((ng1)));
    t29 = (t0 + 3664);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 32, 0LL);
    goto LAB12;

}

static void Always_80_2(char *t0)
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
    int t33;
    char *t34;
    char *t35;

LAB0:    t1 = (t0 + 5240U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(80, ng0);
    t2 = (t0 + 5592);
    *((int *)t2) = 1;
    t3 = (t0 + 5272);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(80, ng0);

LAB5:    xsi_set_current_line(81, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 2544);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(82, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2384);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(83, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2864);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(84, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2704);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(85, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3184);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(86, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3024);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(88, ng0);
    t2 = (t0 + 3664);
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

LAB10:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_signed_case_compare(t4, 32, t2, 32);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng3)));
    t3 = ((char*)((ng2)));
    memset(t9, 0, 8);
    xsi_vlog_signed_add(t9, 32, t2, 32, t3, 32);
    t6 = xsi_vlog_signed_case_compare(t4, 32, t9, 32);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng3)));
    t3 = ((char*)((ng3)));
    memset(t9, 0, 8);
    xsi_vlog_signed_add(t9, 32, t2, 32, t3, 32);
    t6 = xsi_vlog_signed_case_compare(t4, 32, t9, 32);
    if (t6 == 1)
        goto LAB15;

LAB16:
LAB17:    goto LAB2;

LAB7:    xsi_set_current_line(89, ng0);

LAB18:    xsi_set_current_line(90, ng0);
    t7 = ((char*)((ng2)));
    t8 = (t0 + 3824);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 32);
    goto LAB17;

LAB9:    xsi_set_current_line(93, ng0);

LAB19:    xsi_set_current_line(94, ng0);
    t3 = (t0 + 3504);
    t5 = (t3 + 56U);
    t7 = *((char **)t5);
    t8 = ((char*)((ng2)));
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
        goto LAB23;

LAB20:    if (t21 != 0)
        goto LAB22;

LAB21:    *((unsigned int *)t9) = 1;

LAB23:    t25 = (t9 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t9);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB24;

LAB25:
LAB26:    goto LAB17;

LAB11:    xsi_set_current_line(103, ng0);

LAB39:    xsi_set_current_line(104, ng0);
    t3 = (t0 + 1664U);
    t5 = *((char **)t3);

LAB40:    t3 = ((char*)((ng1)));
    t33 = xsi_vlog_unsigned_case_compare(t5, 2, t3, 32);
    if (t33 == 1)
        goto LAB41;

LAB42:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 32);
    if (t6 == 1)
        goto LAB43;

LAB44:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 32);
    if (t6 == 1)
        goto LAB45;

LAB46:
LAB47:    xsi_set_current_line(109, ng0);
    t2 = ((char*)((ng3)));
    t3 = ((char*)((ng2)));
    memset(t9, 0, 8);
    xsi_vlog_signed_add(t9, 32, t2, 32, t3, 32);
    t7 = (t0 + 3824);
    xsi_vlogvar_assign_value(t7, t9, 0, 0, 32);
    goto LAB17;

LAB13:    xsi_set_current_line(112, ng0);

LAB51:    xsi_set_current_line(113, ng0);
    t7 = (t0 + 1664U);
    t8 = *((char **)t7);

LAB52:    t7 = ((char*)((ng1)));
    t33 = xsi_vlog_unsigned_case_compare(t8, 2, t7, 32);
    if (t33 == 1)
        goto LAB53;

LAB54:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t8, 2, t2, 32);
    if (t6 == 1)
        goto LAB55;

LAB56:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t8, 2, t2, 32);
    if (t6 == 1)
        goto LAB57;

LAB58:
LAB59:    xsi_set_current_line(118, ng0);
    t2 = ((char*)((ng3)));
    t3 = ((char*)((ng3)));
    memset(t9, 0, 8);
    xsi_vlog_signed_add(t9, 32, t2, 32, t3, 32);
    t7 = (t0 + 3824);
    xsi_vlogvar_assign_value(t7, t9, 0, 0, 32);
    goto LAB17;

LAB15:    xsi_set_current_line(121, ng0);

LAB63:    xsi_set_current_line(122, ng0);
    t7 = (t0 + 1664U);
    t10 = *((char **)t7);

LAB64:    t7 = ((char*)((ng1)));
    t33 = xsi_vlog_unsigned_case_compare(t10, 2, t7, 32);
    if (t33 == 1)
        goto LAB65;

LAB66:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t10, 2, t2, 32);
    if (t6 == 1)
        goto LAB67;

LAB68:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t10, 2, t2, 32);
    if (t6 == 1)
        goto LAB69;

LAB70:
LAB71:    xsi_set_current_line(127, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3824);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    goto LAB17;

LAB22:    t24 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB23;

LAB24:    xsi_set_current_line(94, ng0);

LAB27:    xsi_set_current_line(95, ng0);
    t31 = (t0 + 1664U);
    t32 = *((char **)t31);

LAB28:    t31 = ((char*)((ng1)));
    t33 = xsi_vlog_unsigned_case_compare(t32, 2, t31, 32);
    if (t33 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t32, 2, t2, 32);
    if (t6 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t32, 2, t2, 32);
    if (t6 == 1)
        goto LAB33;

LAB34:
LAB35:    xsi_set_current_line(100, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3824);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    goto LAB26;

LAB29:    xsi_set_current_line(96, ng0);

LAB36:    xsi_set_current_line(96, ng0);
    t34 = ((char*)((ng2)));
    t35 = (t0 + 2544);
    xsi_vlogvar_assign_value(t35, t34, 0, 0, 1);
    xsi_set_current_line(96, ng0);
    t2 = (t0 + 3344);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t9, 0, 8);
    t7 = (t9 + 4);
    t8 = (t5 + 4);
    t12 = *((unsigned int *)t5);
    t13 = (t12 >> 24);
    *((unsigned int *)t9) = t13;
    t14 = *((unsigned int *)t8);
    t15 = (t14 >> 24);
    *((unsigned int *)t7) = t15;
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 & 255U);
    t17 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t17 & 255U);
    t10 = (t0 + 2384);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 8);
    goto LAB35;

LAB31:    xsi_set_current_line(97, ng0);

LAB37:    xsi_set_current_line(97, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 2864);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(97, ng0);
    t2 = (t0 + 3344);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t9, 0, 8);
    t7 = (t9 + 4);
    t8 = (t5 + 4);
    t12 = *((unsigned int *)t5);
    t13 = (t12 >> 24);
    *((unsigned int *)t9) = t13;
    t14 = *((unsigned int *)t8);
    t15 = (t14 >> 24);
    *((unsigned int *)t7) = t15;
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 & 255U);
    t17 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t17 & 255U);
    t10 = (t0 + 2704);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 8);
    goto LAB35;

LAB33:    xsi_set_current_line(98, ng0);

LAB38:    xsi_set_current_line(98, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 3184);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(98, ng0);
    t2 = (t0 + 3344);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t9, 0, 8);
    t7 = (t9 + 4);
    t8 = (t5 + 4);
    t12 = *((unsigned int *)t5);
    t13 = (t12 >> 24);
    *((unsigned int *)t9) = t13;
    t14 = *((unsigned int *)t8);
    t15 = (t14 >> 24);
    *((unsigned int *)t7) = t15;
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 & 255U);
    t17 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t17 & 255U);
    t10 = (t0 + 3024);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 8);
    goto LAB35;

LAB41:    xsi_set_current_line(105, ng0);

LAB48:    xsi_set_current_line(105, ng0);
    t7 = ((char*)((ng2)));
    t8 = (t0 + 2544);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 1);
    xsi_set_current_line(105, ng0);
    t2 = (t0 + 3344);
    t3 = (t2 + 56U);
    t7 = *((char **)t3);
    memset(t9, 0, 8);
    t8 = (t9 + 4);
    t10 = (t7 + 4);
    t12 = *((unsigned int *)t7);
    t13 = (t12 >> 16);
    *((unsigned int *)t9) = t13;
    t14 = *((unsigned int *)t10);
    t15 = (t14 >> 16);
    *((unsigned int *)t8) = t15;
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 & 255U);
    t17 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t17 & 255U);
    t11 = (t0 + 2384);
    xsi_vlogvar_assign_value(t11, t9, 0, 0, 8);
    goto LAB47;

LAB43:    xsi_set_current_line(106, ng0);

LAB49:    xsi_set_current_line(106, ng0);
    t3 = ((char*)((ng2)));
    t7 = (t0 + 2864);
    xsi_vlogvar_assign_value(t7, t3, 0, 0, 1);
    xsi_set_current_line(106, ng0);
    t2 = (t0 + 3344);
    t3 = (t2 + 56U);
    t7 = *((char **)t3);
    memset(t9, 0, 8);
    t8 = (t9 + 4);
    t10 = (t7 + 4);
    t12 = *((unsigned int *)t7);
    t13 = (t12 >> 16);
    *((unsigned int *)t9) = t13;
    t14 = *((unsigned int *)t10);
    t15 = (t14 >> 16);
    *((unsigned int *)t8) = t15;
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 & 255U);
    t17 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t17 & 255U);
    t11 = (t0 + 2704);
    xsi_vlogvar_assign_value(t11, t9, 0, 0, 8);
    goto LAB47;

LAB45:    xsi_set_current_line(107, ng0);

LAB50:    xsi_set_current_line(107, ng0);
    t3 = ((char*)((ng2)));
    t7 = (t0 + 3184);
    xsi_vlogvar_assign_value(t7, t3, 0, 0, 1);
    xsi_set_current_line(107, ng0);
    t2 = (t0 + 3344);
    t3 = (t2 + 56U);
    t7 = *((char **)t3);
    memset(t9, 0, 8);
    t8 = (t9 + 4);
    t10 = (t7 + 4);
    t12 = *((unsigned int *)t7);
    t13 = (t12 >> 16);
    *((unsigned int *)t9) = t13;
    t14 = *((unsigned int *)t10);
    t15 = (t14 >> 16);
    *((unsigned int *)t8) = t15;
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 & 255U);
    t17 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t17 & 255U);
    t11 = (t0 + 3024);
    xsi_vlogvar_assign_value(t11, t9, 0, 0, 8);
    goto LAB47;

LAB53:    xsi_set_current_line(114, ng0);

LAB60:    xsi_set_current_line(114, ng0);
    t10 = ((char*)((ng2)));
    t11 = (t0 + 2544);
    xsi_vlogvar_assign_value(t11, t10, 0, 0, 1);
    xsi_set_current_line(114, ng0);
    t2 = (t0 + 3344);
    t3 = (t2 + 56U);
    t7 = *((char **)t3);
    memset(t9, 0, 8);
    t10 = (t9 + 4);
    t11 = (t7 + 4);
    t12 = *((unsigned int *)t7);
    t13 = (t12 >> 8);
    *((unsigned int *)t9) = t13;
    t14 = *((unsigned int *)t11);
    t15 = (t14 >> 8);
    *((unsigned int *)t10) = t15;
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 & 255U);
    t17 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t17 & 255U);
    t24 = (t0 + 2384);
    xsi_vlogvar_assign_value(t24, t9, 0, 0, 8);
    goto LAB59;

LAB55:    xsi_set_current_line(115, ng0);

LAB61:    xsi_set_current_line(115, ng0);
    t3 = ((char*)((ng2)));
    t7 = (t0 + 2864);
    xsi_vlogvar_assign_value(t7, t3, 0, 0, 1);
    xsi_set_current_line(115, ng0);
    t2 = (t0 + 3344);
    t3 = (t2 + 56U);
    t7 = *((char **)t3);
    memset(t9, 0, 8);
    t10 = (t9 + 4);
    t11 = (t7 + 4);
    t12 = *((unsigned int *)t7);
    t13 = (t12 >> 8);
    *((unsigned int *)t9) = t13;
    t14 = *((unsigned int *)t11);
    t15 = (t14 >> 8);
    *((unsigned int *)t10) = t15;
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 & 255U);
    t17 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t17 & 255U);
    t24 = (t0 + 2704);
    xsi_vlogvar_assign_value(t24, t9, 0, 0, 8);
    goto LAB59;

LAB57:    xsi_set_current_line(116, ng0);

LAB62:    xsi_set_current_line(116, ng0);
    t3 = ((char*)((ng2)));
    t7 = (t0 + 3184);
    xsi_vlogvar_assign_value(t7, t3, 0, 0, 1);
    xsi_set_current_line(116, ng0);
    t2 = (t0 + 3344);
    t3 = (t2 + 56U);
    t7 = *((char **)t3);
    memset(t9, 0, 8);
    t10 = (t9 + 4);
    t11 = (t7 + 4);
    t12 = *((unsigned int *)t7);
    t13 = (t12 >> 8);
    *((unsigned int *)t9) = t13;
    t14 = *((unsigned int *)t11);
    t15 = (t14 >> 8);
    *((unsigned int *)t10) = t15;
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 & 255U);
    t17 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t17 & 255U);
    t24 = (t0 + 3024);
    xsi_vlogvar_assign_value(t24, t9, 0, 0, 8);
    goto LAB59;

LAB65:    xsi_set_current_line(123, ng0);

LAB72:    xsi_set_current_line(123, ng0);
    t11 = ((char*)((ng2)));
    t24 = (t0 + 2544);
    xsi_vlogvar_assign_value(t24, t11, 0, 0, 1);
    xsi_set_current_line(123, ng0);
    t2 = (t0 + 3344);
    t3 = (t2 + 56U);
    t7 = *((char **)t3);
    memset(t9, 0, 8);
    t11 = (t9 + 4);
    t24 = (t7 + 4);
    t12 = *((unsigned int *)t7);
    t13 = (t12 >> 0);
    *((unsigned int *)t9) = t13;
    t14 = *((unsigned int *)t24);
    t15 = (t14 >> 0);
    *((unsigned int *)t11) = t15;
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 & 255U);
    t17 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t17 & 255U);
    t25 = (t0 + 2384);
    xsi_vlogvar_assign_value(t25, t9, 0, 0, 8);
    goto LAB71;

LAB67:    xsi_set_current_line(124, ng0);

LAB73:    xsi_set_current_line(124, ng0);
    t3 = ((char*)((ng2)));
    t7 = (t0 + 2864);
    xsi_vlogvar_assign_value(t7, t3, 0, 0, 1);
    xsi_set_current_line(124, ng0);
    t2 = (t0 + 3344);
    t3 = (t2 + 56U);
    t7 = *((char **)t3);
    memset(t9, 0, 8);
    t11 = (t9 + 4);
    t24 = (t7 + 4);
    t12 = *((unsigned int *)t7);
    t13 = (t12 >> 0);
    *((unsigned int *)t9) = t13;
    t14 = *((unsigned int *)t24);
    t15 = (t14 >> 0);
    *((unsigned int *)t11) = t15;
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 & 255U);
    t17 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t17 & 255U);
    t25 = (t0 + 2704);
    xsi_vlogvar_assign_value(t25, t9, 0, 0, 8);
    goto LAB71;

LAB69:    xsi_set_current_line(125, ng0);

LAB74:    xsi_set_current_line(125, ng0);
    t3 = ((char*)((ng2)));
    t7 = (t0 + 3184);
    xsi_vlogvar_assign_value(t7, t3, 0, 0, 1);
    xsi_set_current_line(125, ng0);
    t2 = (t0 + 3344);
    t3 = (t2 + 56U);
    t7 = *((char **)t3);
    memset(t9, 0, 8);
    t11 = (t9 + 4);
    t24 = (t7 + 4);
    t12 = *((unsigned int *)t7);
    t13 = (t12 >> 0);
    *((unsigned int *)t9) = t13;
    t14 = *((unsigned int *)t24);
    t15 = (t14 >> 0);
    *((unsigned int *)t11) = t15;
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 & 255U);
    t17 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t17 & 255U);
    t25 = (t0 + 3024);
    xsi_vlogvar_assign_value(t25, t9, 0, 0, 8);
    goto LAB71;

}


extern void reference_m_00000000000107453014_3549481560_init()
{
	static char *pe[] = {(void *)Always_60_0,(void *)Always_71_1,(void *)Always_80_2};
	xsi_register_didat("reference_m_00000000000107453014_3549481560", "isim/tester.exe.sim/reference/m_00000000000107453014_3549481560.didat");
	xsi_register_executes(pe);
}
