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



static void Gate_82_0(char *t0)
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
    char *t11;

LAB0:    t1 = (t0 + 8032U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 3992U);
    t3 = *((char **)t2);
    t2 = (t0 + 4152U);
    t4 = *((char **)t2);
    t2 = (t0 + 4312U);
    t5 = *((char **)t2);
    t2 = (t0 + 8432);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    xsi_vlog_OrGate(t9, 3, t3, t4, t5);
    t10 = (t0 + 8432);
    xsi_driver_vfirst_trans(t10, 0, 0);
    t11 = (t0 + 8352);
    *((int *)t11) = 1;

LAB1:    return;
}


extern void uut_m_00000000000964318784_3576250209_init()
{
	static char *pe[] = {(void *)Gate_82_0};
	xsi_register_didat("uut_m_00000000000964318784_3576250209", "isim/tester.exe.sim/uut/m_00000000000964318784_3576250209.didat");
	xsi_register_executes(pe);
}
