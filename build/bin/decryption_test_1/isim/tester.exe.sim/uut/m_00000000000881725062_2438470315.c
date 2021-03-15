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
static const char *ng0 = "C:/Users/Alexandra/Desktop/tema2_task3_integration_tester/tema2_task3_checker/build/bin/decryption_regfile.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {65535U, 0U};
static unsigned int ng4[] = {2U, 0U};
static int ng5[] = {1, 0};
static unsigned int ng6[] = {16U, 0U};
static unsigned int ng7[] = {18U, 0U};
static unsigned int ng8[] = {20U, 0U};



static void Always_48_0(char *t0)
{
    char t6[8];
    char t31[8];
    char t32[8];
    char t54[8];
    char t61[8];
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
    int t30;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
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

LAB0:    t1 = (t0 + 5040U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 5608);
    *((int *)t2) = 1;
    t3 = (t0 + 5072);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(48, ng0);

LAB5:    xsi_set_current_line(50, ng0);
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

LAB11:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 1960U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng5)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB17;

LAB14:    if (t18 != 0)
        goto LAB16;

LAB15:    *((unsigned int *)t6) = 1;

LAB17:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB18;

LAB19:    xsi_set_current_line(80, ng0);
    t2 = (t0 + 1800U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng5)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB42;

LAB39:    if (t18 != 0)
        goto LAB41;

LAB40:    *((unsigned int *)t6) = 1;

LAB42:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB43;

LAB44:    xsi_set_current_line(104, ng0);
    t2 = (t0 + 1800U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB67;

LAB64:    if (t18 != 0)
        goto LAB66;

LAB65:    *((unsigned int *)t6) = 1;

LAB67:    memset(t31, 0, 8);
    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB68;

LAB69:    if (*((unsigned int *)t8) != 0)
        goto LAB70;

LAB71:    t29 = (t31 + 4);
    t37 = *((unsigned int *)t31);
    t38 = *((unsigned int *)t29);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB72;

LAB73:    memcpy(t61, t31, 8);

LAB74:    t92 = (t61 + 4);
    t93 = *((unsigned int *)t92);
    t94 = (~(t93));
    t95 = *((unsigned int *)t61);
    t96 = (t95 & t94);
    t97 = (t96 != 0);
    if (t97 > 0)
        goto LAB86;

LAB87:
LAB88:
LAB45:
LAB20:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(50, ng0);

LAB13:    xsi_set_current_line(51, ng0);
    t28 = ((char*)((ng2)));
    t29 = (t0 + 3640);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 17, 0LL);
    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3800);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 17, 0LL);
    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3960);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 17, 0LL);
    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4120);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 17, 0LL);
    goto LAB12;

LAB16:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB17;

LAB18:    xsi_set_current_line(56, ng0);

LAB21:    xsi_set_current_line(57, ng0);
    t21 = (t0 + 1640U);
    t22 = *((char **)t21);

LAB22:    t21 = ((char*)((ng2)));
    t30 = xsi_vlog_unsigned_case_compare(t22, 8, t21, 16);
    if (t30 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng6)));
    t30 = xsi_vlog_unsigned_case_compare(t22, 8, t2, 16);
    if (t30 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng7)));
    t30 = xsi_vlog_unsigned_case_compare(t22, 8, t2, 16);
    if (t30 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng8)));
    t30 = xsi_vlog_unsigned_case_compare(t22, 8, t2, 16);
    if (t30 == 1)
        goto LAB29;

LAB30:
LAB32:
LAB31:    xsi_set_current_line(74, ng0);

LAB38:    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2840);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(76, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2680);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB33:    goto LAB20;

LAB23:    xsi_set_current_line(58, ng0);

LAB34:    xsi_set_current_line(59, ng0);
    t28 = (t0 + 2120U);
    t29 = *((char **)t28);
    memcpy(t31, t29, 8);
    t28 = (t0 + 3640);
    xsi_vlogvar_wait_assign_value(t28, t31, 0, 0, 17, 0LL);
    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2680);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB33;

LAB25:    xsi_set_current_line(62, ng0);

LAB35:    xsi_set_current_line(63, ng0);
    t3 = (t0 + 2120U);
    t4 = *((char **)t3);
    memcpy(t6, t4, 8);
    t3 = (t0 + 3800);
    xsi_vlogvar_wait_assign_value(t3, t6, 0, 0, 17, 0LL);
    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2680);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB33;

LAB27:    xsi_set_current_line(66, ng0);

LAB36:    xsi_set_current_line(67, ng0);
    t3 = (t0 + 2120U);
    t4 = *((char **)t3);
    memcpy(t6, t4, 8);
    t3 = (t0 + 3960);
    xsi_vlogvar_wait_assign_value(t3, t6, 0, 0, 17, 0LL);
    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2680);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB33;

LAB29:    xsi_set_current_line(70, ng0);

LAB37:    xsi_set_current_line(71, ng0);
    t3 = (t0 + 2120U);
    t4 = *((char **)t3);
    memcpy(t6, t4, 8);
    t3 = (t0 + 4120);
    xsi_vlogvar_wait_assign_value(t3, t6, 0, 0, 17, 0LL);
    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2680);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB33;

LAB41:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB42;

LAB43:    xsi_set_current_line(80, ng0);

LAB46:    xsi_set_current_line(81, ng0);
    t21 = (t0 + 1640U);
    t28 = *((char **)t21);

LAB47:    t21 = ((char*)((ng2)));
    t30 = xsi_vlog_unsigned_case_compare(t28, 8, t21, 16);
    if (t30 == 1)
        goto LAB48;

LAB49:    t2 = ((char*)((ng6)));
    t30 = xsi_vlog_unsigned_case_compare(t28, 8, t2, 16);
    if (t30 == 1)
        goto LAB50;

LAB51:    t2 = ((char*)((ng7)));
    t30 = xsi_vlog_unsigned_case_compare(t28, 8, t2, 16);
    if (t30 == 1)
        goto LAB52;

LAB53:    t2 = ((char*)((ng8)));
    t30 = xsi_vlog_unsigned_case_compare(t28, 8, t2, 16);
    if (t30 == 1)
        goto LAB54;

LAB55:
LAB57:
LAB56:    xsi_set_current_line(98, ng0);

LAB63:    xsi_set_current_line(99, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2840);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(100, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2680);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB58:    goto LAB45;

LAB48:    xsi_set_current_line(82, ng0);

LAB59:    xsi_set_current_line(83, ng0);
    t29 = (t0 + 3640);
    t33 = (t29 + 56U);
    t34 = *((char **)t33);
    memset(t32, 0, 8);
    t35 = (t32 + 4);
    t36 = (t34 + 4);
    t37 = *((unsigned int *)t34);
    t38 = (t37 >> 0);
    *((unsigned int *)t32) = t38;
    t39 = *((unsigned int *)t36);
    t40 = (t39 >> 0);
    *((unsigned int *)t35) = t40;
    t41 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t41 & 3U);
    t42 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t42 & 3U);
    t43 = ((char*)((ng2)));
    xsi_vlogtype_concat(t31, 16, 16, 2U, t43, 14, t32, 2);
    t44 = (t0 + 2520);
    xsi_vlogvar_wait_assign_value(t44, t31, 0, 0, 16, 0LL);
    xsi_set_current_line(84, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2680);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB58;

LAB50:    xsi_set_current_line(86, ng0);

LAB60:    xsi_set_current_line(87, ng0);
    t3 = (t0 + 3800);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 2520);
    xsi_vlogvar_wait_assign_value(t7, t5, 0, 0, 16, 0LL);
    xsi_set_current_line(88, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2680);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB58;

LAB52:    xsi_set_current_line(90, ng0);

LAB61:    xsi_set_current_line(91, ng0);
    t3 = (t0 + 3960);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 2520);
    xsi_vlogvar_wait_assign_value(t7, t5, 0, 0, 16, 0LL);
    xsi_set_current_line(92, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2680);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB58;

LAB54:    xsi_set_current_line(94, ng0);

LAB62:    xsi_set_current_line(95, ng0);
    t3 = (t0 + 4120);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 2520);
    xsi_vlogvar_wait_assign_value(t7, t5, 0, 0, 16, 0LL);
    xsi_set_current_line(96, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2680);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB58;

LAB66:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB67;

LAB68:    *((unsigned int *)t31) = 1;
    goto LAB71;

LAB70:    t21 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB71;

LAB72:    t33 = (t0 + 1960U);
    t34 = *((char **)t33);
    t33 = ((char*)((ng1)));
    memset(t32, 0, 8);
    t35 = (t34 + 4);
    t36 = (t33 + 4);
    t40 = *((unsigned int *)t34);
    t41 = *((unsigned int *)t33);
    t42 = (t40 ^ t41);
    t45 = *((unsigned int *)t35);
    t46 = *((unsigned int *)t36);
    t47 = (t45 ^ t46);
    t48 = (t42 | t47);
    t49 = *((unsigned int *)t35);
    t50 = *((unsigned int *)t36);
    t51 = (t49 | t50);
    t52 = (~(t51));
    t53 = (t48 & t52);
    if (t53 != 0)
        goto LAB78;

LAB75:    if (t51 != 0)
        goto LAB77;

LAB76:    *((unsigned int *)t32) = 1;

LAB78:    memset(t54, 0, 8);
    t44 = (t32 + 4);
    t55 = *((unsigned int *)t44);
    t56 = (~(t55));
    t57 = *((unsigned int *)t32);
    t58 = (t57 & t56);
    t59 = (t58 & 1U);
    if (t59 != 0)
        goto LAB79;

LAB80:    if (*((unsigned int *)t44) != 0)
        goto LAB81;

LAB82:    t62 = *((unsigned int *)t31);
    t63 = *((unsigned int *)t54);
    t64 = (t62 & t63);
    *((unsigned int *)t61) = t64;
    t65 = (t31 + 4);
    t66 = (t54 + 4);
    t67 = (t61 + 4);
    t68 = *((unsigned int *)t65);
    t69 = *((unsigned int *)t66);
    t70 = (t68 | t69);
    *((unsigned int *)t67) = t70;
    t71 = *((unsigned int *)t67);
    t72 = (t71 != 0);
    if (t72 == 1)
        goto LAB83;

LAB84:
LAB85:    goto LAB74;

LAB77:    t43 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t43) = 1;
    goto LAB78;

LAB79:    *((unsigned int *)t54) = 1;
    goto LAB82;

LAB81:    t60 = (t54 + 4);
    *((unsigned int *)t54) = 1;
    *((unsigned int *)t60) = 1;
    goto LAB82;

LAB83:    t73 = *((unsigned int *)t61);
    t74 = *((unsigned int *)t67);
    *((unsigned int *)t61) = (t73 | t74);
    t75 = (t31 + 4);
    t76 = (t54 + 4);
    t77 = *((unsigned int *)t31);
    t78 = (~(t77));
    t79 = *((unsigned int *)t75);
    t80 = (~(t79));
    t81 = *((unsigned int *)t54);
    t82 = (~(t81));
    t83 = *((unsigned int *)t76);
    t84 = (~(t83));
    t30 = (t78 & t80);
    t85 = (t82 & t84);
    t86 = (~(t30));
    t87 = (~(t85));
    t88 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t88 & t86);
    t89 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t89 & t87);
    t90 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t90 & t86);
    t91 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t91 & t87);
    goto LAB85;

LAB86:    xsi_set_current_line(104, ng0);

LAB89:    xsi_set_current_line(105, ng0);
    t98 = ((char*)((ng1)));
    t99 = (t0 + 2680);
    xsi_vlogvar_wait_assign_value(t99, t98, 0, 0, 1, 0LL);
    goto LAB88;

}

static void Always_109_1(char *t0)
{
    char t4[8];
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    char *t18;

LAB0:    t1 = (t0 + 5288U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(109, ng0);
    t2 = (t0 + 5624);
    *((int *)t2) = 1;
    t3 = (t0 + 5320);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(109, ng0);

LAB5:    xsi_set_current_line(110, ng0);
    t6 = (t0 + 3640);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memset(t5, 0, 8);
    t9 = (t5 + 4);
    t10 = (t8 + 4);
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 0);
    *((unsigned int *)t5) = t12;
    t13 = *((unsigned int *)t10);
    t14 = (t13 >> 0);
    *((unsigned int *)t9) = t14;
    t15 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t15 & 3U);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 & 3U);
    t17 = ((char*)((ng2)));
    xsi_vlogtype_concat(t4, 16, 16, 2U, t17, 14, t5, 2);
    t18 = (t0 + 3000);
    xsi_vlogvar_assign_value(t18, t4, 0, 0, 16);
    xsi_set_current_line(111, ng0);
    t2 = (t0 + 3800);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t0 + 3160);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 16);
    xsi_set_current_line(112, ng0);
    t2 = (t0 + 3960);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t0 + 3320);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 16);
    xsi_set_current_line(113, ng0);
    t2 = (t0 + 4120);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t0 + 3480);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 16);
    goto LAB2;

}


extern void uut_m_00000000000881725062_2438470315_init()
{
	static char *pe[] = {(void *)Always_48_0,(void *)Always_109_1};
	xsi_register_didat("uut_m_00000000000881725062_2438470315", "isim/tester.exe.sim/uut/m_00000000000881725062_2438470315.didat");
	xsi_register_executes(pe);
}
