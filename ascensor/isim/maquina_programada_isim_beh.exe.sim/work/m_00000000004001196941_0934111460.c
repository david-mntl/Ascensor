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
static const char *ng0 = "C:/Users/jairo-mm/OneDrive/Documentos/TallerDeDigitales/ascensor/maquina_programada.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {0, 0};
static int ng3[] = {1, 0};
static unsigned int ng4[] = {1U, 0U};
static unsigned int ng5[] = {2U, 0U};
static unsigned int ng6[] = {3U, 0U};



static void Initial_38_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(38, ng0);

LAB2:    xsi_set_current_line(39, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2568);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 2);

LAB1:    return;
}

static void Always_41_1(char *t0)
{
    char t14[8];
    char t27[8];
    char t43[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    int t13;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    char *t26;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    char *t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    int t67;
    int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    char *t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    char *t81;
    char *t82;

LAB0:    t1 = (t0 + 3736U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 4056);
    *((int *)t2) = 1;
    t3 = (t0 + 3768);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(41, ng0);

LAB5:    xsi_set_current_line(44, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(52, ng0);

LAB10:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB11:    t5 = ((char*)((ng1)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 2, t5, 2);
    if (t13 == 1)
        goto LAB12;

LAB13:    t2 = ((char*)((ng4)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t13 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng5)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t13 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng6)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t13 == 1)
        goto LAB18;

LAB19:
LAB20:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(44, ng0);

LAB9:    xsi_set_current_line(45, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 2, 0LL);
    xsi_set_current_line(46, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB8;

LAB12:    xsi_set_current_line(56, ng0);

LAB21:    xsi_set_current_line(57, ng0);
    t11 = (t0 + 1368U);
    t12 = *((char **)t11);
    t11 = ((char*)((ng2)));
    memset(t14, 0, 8);
    t15 = (t12 + 4);
    t16 = (t11 + 4);
    t6 = *((unsigned int *)t12);
    t7 = *((unsigned int *)t11);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t15);
    t10 = *((unsigned int *)t16);
    t17 = (t9 ^ t10);
    t18 = (t8 | t17);
    t19 = *((unsigned int *)t15);
    t20 = *((unsigned int *)t16);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB25;

LAB22:    if (t21 != 0)
        goto LAB24;

LAB23:    *((unsigned int *)t14) = 1;

LAB25:    t25 = (t0 + 1528U);
    t26 = *((char **)t25);
    t25 = ((char*)((ng2)));
    memset(t27, 0, 8);
    t28 = (t26 + 4);
    t29 = (t25 + 4);
    t30 = *((unsigned int *)t26);
    t31 = *((unsigned int *)t25);
    t32 = (t30 ^ t31);
    t33 = *((unsigned int *)t28);
    t34 = *((unsigned int *)t29);
    t35 = (t33 ^ t34);
    t36 = (t32 | t35);
    t37 = *((unsigned int *)t28);
    t38 = *((unsigned int *)t29);
    t39 = (t37 | t38);
    t40 = (~(t39));
    t41 = (t36 & t40);
    if (t41 != 0)
        goto LAB29;

LAB26:    if (t39 != 0)
        goto LAB28;

LAB27:    *((unsigned int *)t27) = 1;

LAB29:    t44 = *((unsigned int *)t14);
    t45 = *((unsigned int *)t27);
    t46 = (t44 & t45);
    *((unsigned int *)t43) = t46;
    t47 = (t14 + 4);
    t48 = (t27 + 4);
    t49 = (t43 + 4);
    t50 = *((unsigned int *)t47);
    t51 = *((unsigned int *)t48);
    t52 = (t50 | t51);
    *((unsigned int *)t49) = t52;
    t53 = *((unsigned int *)t49);
    t54 = (t53 != 0);
    if (t54 == 1)
        goto LAB30;

LAB31:
LAB32:    t75 = (t43 + 4);
    t76 = *((unsigned int *)t75);
    t77 = (~(t76));
    t78 = *((unsigned int *)t43);
    t79 = (t78 & t77);
    t80 = (t79 != 0);
    if (t80 > 0)
        goto LAB33;

LAB34:
LAB35:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t14, 0, 8);
    t5 = (t3 + 4);
    t11 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t11);
    t17 = (t9 ^ t10);
    t18 = (t8 | t17);
    t19 = *((unsigned int *)t5);
    t20 = *((unsigned int *)t11);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB40;

LAB37:    if (t21 != 0)
        goto LAB39;

LAB38:    *((unsigned int *)t14) = 1;

LAB40:    t15 = (t0 + 1528U);
    t16 = *((char **)t15);
    t15 = ((char*)((ng3)));
    memset(t27, 0, 8);
    t24 = (t16 + 4);
    t25 = (t15 + 4);
    t30 = *((unsigned int *)t16);
    t31 = *((unsigned int *)t15);
    t32 = (t30 ^ t31);
    t33 = *((unsigned int *)t24);
    t34 = *((unsigned int *)t25);
    t35 = (t33 ^ t34);
    t36 = (t32 | t35);
    t37 = *((unsigned int *)t24);
    t38 = *((unsigned int *)t25);
    t39 = (t37 | t38);
    t40 = (~(t39));
    t41 = (t36 & t40);
    if (t41 != 0)
        goto LAB44;

LAB41:    if (t39 != 0)
        goto LAB43;

LAB42:    *((unsigned int *)t27) = 1;

LAB44:    t44 = *((unsigned int *)t14);
    t45 = *((unsigned int *)t27);
    t46 = (t44 & t45);
    *((unsigned int *)t43) = t46;
    t28 = (t14 + 4);
    t29 = (t27 + 4);
    t42 = (t43 + 4);
    t50 = *((unsigned int *)t28);
    t51 = *((unsigned int *)t29);
    t52 = (t50 | t51);
    *((unsigned int *)t42) = t52;
    t53 = *((unsigned int *)t42);
    t54 = (t53 != 0);
    if (t54 == 1)
        goto LAB45;

LAB46:
LAB47:    t49 = (t43 + 4);
    t76 = *((unsigned int *)t49);
    t77 = (~(t76));
    t78 = *((unsigned int *)t43);
    t79 = (t78 & t77);
    t80 = (t79 != 0);
    if (t80 > 0)
        goto LAB48;

LAB49:
LAB50:    xsi_set_current_line(72, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t14, 0, 8);
    t5 = (t3 + 4);
    t11 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t11);
    t17 = (t9 ^ t10);
    t18 = (t8 | t17);
    t19 = *((unsigned int *)t5);
    t20 = *((unsigned int *)t11);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB56;

LAB53:    if (t21 != 0)
        goto LAB55;

LAB54:    *((unsigned int *)t14) = 1;

LAB56:    t15 = (t0 + 1528U);
    t16 = *((char **)t15);
    t15 = ((char*)((ng2)));
    memset(t27, 0, 8);
    t24 = (t16 + 4);
    t25 = (t15 + 4);
    t30 = *((unsigned int *)t16);
    t31 = *((unsigned int *)t15);
    t32 = (t30 ^ t31);
    t33 = *((unsigned int *)t24);
    t34 = *((unsigned int *)t25);
    t35 = (t33 ^ t34);
    t36 = (t32 | t35);
    t37 = *((unsigned int *)t24);
    t38 = *((unsigned int *)t25);
    t39 = (t37 | t38);
    t40 = (~(t39));
    t41 = (t36 & t40);
    if (t41 != 0)
        goto LAB60;

LAB57:    if (t39 != 0)
        goto LAB59;

LAB58:    *((unsigned int *)t27) = 1;

LAB60:    t44 = *((unsigned int *)t14);
    t45 = *((unsigned int *)t27);
    t46 = (t44 & t45);
    *((unsigned int *)t43) = t46;
    t28 = (t14 + 4);
    t29 = (t27 + 4);
    t42 = (t43 + 4);
    t50 = *((unsigned int *)t28);
    t51 = *((unsigned int *)t29);
    t52 = (t50 | t51);
    *((unsigned int *)t42) = t52;
    t53 = *((unsigned int *)t42);
    t54 = (t53 != 0);
    if (t54 == 1)
        goto LAB61;

LAB62:
LAB63:    t49 = (t43 + 4);
    t76 = *((unsigned int *)t49);
    t77 = (~(t76));
    t78 = *((unsigned int *)t43);
    t79 = (t78 & t77);
    t80 = (t79 != 0);
    if (t80 > 0)
        goto LAB64;

LAB65:
LAB66:    xsi_set_current_line(84, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t14, 0, 8);
    t5 = (t3 + 4);
    t11 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t11);
    t17 = (t9 ^ t10);
    t18 = (t8 | t17);
    t19 = *((unsigned int *)t5);
    t20 = *((unsigned int *)t11);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB73;

LAB70:    if (t21 != 0)
        goto LAB72;

LAB71:    *((unsigned int *)t14) = 1;

LAB73:    t15 = (t0 + 1528U);
    t16 = *((char **)t15);
    t15 = ((char*)((ng3)));
    memset(t27, 0, 8);
    t24 = (t16 + 4);
    t25 = (t15 + 4);
    t30 = *((unsigned int *)t16);
    t31 = *((unsigned int *)t15);
    t32 = (t30 ^ t31);
    t33 = *((unsigned int *)t24);
    t34 = *((unsigned int *)t25);
    t35 = (t33 ^ t34);
    t36 = (t32 | t35);
    t37 = *((unsigned int *)t24);
    t38 = *((unsigned int *)t25);
    t39 = (t37 | t38);
    t40 = (~(t39));
    t41 = (t36 & t40);
    if (t41 != 0)
        goto LAB77;

LAB74:    if (t39 != 0)
        goto LAB76;

LAB75:    *((unsigned int *)t27) = 1;

LAB77:    t44 = *((unsigned int *)t14);
    t45 = *((unsigned int *)t27);
    t46 = (t44 & t45);
    *((unsigned int *)t43) = t46;
    t28 = (t14 + 4);
    t29 = (t27 + 4);
    t42 = (t43 + 4);
    t50 = *((unsigned int *)t28);
    t51 = *((unsigned int *)t29);
    t52 = (t50 | t51);
    *((unsigned int *)t42) = t52;
    t53 = *((unsigned int *)t42);
    t54 = (t53 != 0);
    if (t54 == 1)
        goto LAB78;

LAB79:
LAB80:    t49 = (t43 + 4);
    t76 = *((unsigned int *)t49);
    t77 = (~(t76));
    t78 = *((unsigned int *)t43);
    t79 = (t78 & t77);
    t80 = (t79 != 0);
    if (t80 > 0)
        goto LAB81;

LAB82:
LAB83:    goto LAB20;

LAB14:    xsi_set_current_line(100, ng0);

LAB88:    xsi_set_current_line(101, ng0);
    t3 = (t0 + 1368U);
    t5 = *((char **)t3);
    t3 = ((char*)((ng2)));
    memset(t14, 0, 8);
    t11 = (t5 + 4);
    t12 = (t3 + 4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t3);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t17 = (t9 ^ t10);
    t18 = (t8 | t17);
    t19 = *((unsigned int *)t11);
    t20 = *((unsigned int *)t12);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB92;

LAB89:    if (t21 != 0)
        goto LAB91;

LAB90:    *((unsigned int *)t14) = 1;

LAB92:    t16 = (t0 + 1528U);
    t24 = *((char **)t16);
    t16 = ((char*)((ng2)));
    memset(t27, 0, 8);
    t25 = (t24 + 4);
    t26 = (t16 + 4);
    t30 = *((unsigned int *)t24);
    t31 = *((unsigned int *)t16);
    t32 = (t30 ^ t31);
    t33 = *((unsigned int *)t25);
    t34 = *((unsigned int *)t26);
    t35 = (t33 ^ t34);
    t36 = (t32 | t35);
    t37 = *((unsigned int *)t25);
    t38 = *((unsigned int *)t26);
    t39 = (t37 | t38);
    t40 = (~(t39));
    t41 = (t36 & t40);
    if (t41 != 0)
        goto LAB96;

LAB93:    if (t39 != 0)
        goto LAB95;

LAB94:    *((unsigned int *)t27) = 1;

LAB96:    t44 = *((unsigned int *)t14);
    t45 = *((unsigned int *)t27);
    t46 = (t44 & t45);
    *((unsigned int *)t43) = t46;
    t29 = (t14 + 4);
    t42 = (t27 + 4);
    t47 = (t43 + 4);
    t50 = *((unsigned int *)t29);
    t51 = *((unsigned int *)t42);
    t52 = (t50 | t51);
    *((unsigned int *)t47) = t52;
    t53 = *((unsigned int *)t47);
    t54 = (t53 != 0);
    if (t54 == 1)
        goto LAB97;

LAB98:
LAB99:    t57 = (t43 + 4);
    t76 = *((unsigned int *)t57);
    t77 = (~(t76));
    t78 = *((unsigned int *)t43);
    t79 = (t78 & t77);
    t80 = (t79 != 0);
    if (t80 > 0)
        goto LAB100;

LAB101:
LAB102:    xsi_set_current_line(110, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t14, 0, 8);
    t5 = (t3 + 4);
    t11 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t11);
    t17 = (t9 ^ t10);
    t18 = (t8 | t17);
    t19 = *((unsigned int *)t5);
    t20 = *((unsigned int *)t11);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB108;

LAB105:    if (t21 != 0)
        goto LAB107;

LAB106:    *((unsigned int *)t14) = 1;

LAB108:    t15 = (t0 + 1528U);
    t16 = *((char **)t15);
    t15 = ((char*)((ng3)));
    memset(t27, 0, 8);
    t24 = (t16 + 4);
    t25 = (t15 + 4);
    t30 = *((unsigned int *)t16);
    t31 = *((unsigned int *)t15);
    t32 = (t30 ^ t31);
    t33 = *((unsigned int *)t24);
    t34 = *((unsigned int *)t25);
    t35 = (t33 ^ t34);
    t36 = (t32 | t35);
    t37 = *((unsigned int *)t24);
    t38 = *((unsigned int *)t25);
    t39 = (t37 | t38);
    t40 = (~(t39));
    t41 = (t36 & t40);
    if (t41 != 0)
        goto LAB112;

LAB109:    if (t39 != 0)
        goto LAB111;

LAB110:    *((unsigned int *)t27) = 1;

LAB112:    t44 = *((unsigned int *)t14);
    t45 = *((unsigned int *)t27);
    t46 = (t44 & t45);
    *((unsigned int *)t43) = t46;
    t28 = (t14 + 4);
    t29 = (t27 + 4);
    t42 = (t43 + 4);
    t50 = *((unsigned int *)t28);
    t51 = *((unsigned int *)t29);
    t52 = (t50 | t51);
    *((unsigned int *)t42) = t52;
    t53 = *((unsigned int *)t42);
    t54 = (t53 != 0);
    if (t54 == 1)
        goto LAB113;

LAB114:
LAB115:    t49 = (t43 + 4);
    t76 = *((unsigned int *)t49);
    t77 = (~(t76));
    t78 = *((unsigned int *)t43);
    t79 = (t78 & t77);
    t80 = (t79 != 0);
    if (t80 > 0)
        goto LAB116;

LAB117:
LAB118:    xsi_set_current_line(117, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t14, 0, 8);
    t5 = (t3 + 4);
    t11 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t11);
    t17 = (t9 ^ t10);
    t18 = (t8 | t17);
    t19 = *((unsigned int *)t5);
    t20 = *((unsigned int *)t11);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB123;

LAB120:    if (t21 != 0)
        goto LAB122;

LAB121:    *((unsigned int *)t14) = 1;

LAB123:    t15 = (t0 + 1528U);
    t16 = *((char **)t15);
    t15 = ((char*)((ng2)));
    memset(t27, 0, 8);
    t24 = (t16 + 4);
    t25 = (t15 + 4);
    t30 = *((unsigned int *)t16);
    t31 = *((unsigned int *)t15);
    t32 = (t30 ^ t31);
    t33 = *((unsigned int *)t24);
    t34 = *((unsigned int *)t25);
    t35 = (t33 ^ t34);
    t36 = (t32 | t35);
    t37 = *((unsigned int *)t24);
    t38 = *((unsigned int *)t25);
    t39 = (t37 | t38);
    t40 = (~(t39));
    t41 = (t36 & t40);
    if (t41 != 0)
        goto LAB127;

LAB124:    if (t39 != 0)
        goto LAB126;

LAB125:    *((unsigned int *)t27) = 1;

LAB127:    t44 = *((unsigned int *)t14);
    t45 = *((unsigned int *)t27);
    t46 = (t44 & t45);
    *((unsigned int *)t43) = t46;
    t28 = (t14 + 4);
    t29 = (t27 + 4);
    t42 = (t43 + 4);
    t50 = *((unsigned int *)t28);
    t51 = *((unsigned int *)t29);
    t52 = (t50 | t51);
    *((unsigned int *)t42) = t52;
    t53 = *((unsigned int *)t42);
    t54 = (t53 != 0);
    if (t54 == 1)
        goto LAB128;

LAB129:
LAB130:    t49 = (t43 + 4);
    t76 = *((unsigned int *)t49);
    t77 = (~(t76));
    t78 = *((unsigned int *)t43);
    t79 = (t78 & t77);
    t80 = (t79 != 0);
    if (t80 > 0)
        goto LAB131;

LAB132:
LAB133:    xsi_set_current_line(126, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t14, 0, 8);
    t5 = (t3 + 4);
    t11 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t11);
    t17 = (t9 ^ t10);
    t18 = (t8 | t17);
    t19 = *((unsigned int *)t5);
    t20 = *((unsigned int *)t11);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB139;

LAB136:    if (t21 != 0)
        goto LAB138;

LAB137:    *((unsigned int *)t14) = 1;

LAB139:    t15 = (t0 + 1528U);
    t16 = *((char **)t15);
    t15 = ((char*)((ng3)));
    memset(t27, 0, 8);
    t24 = (t16 + 4);
    t25 = (t15 + 4);
    t30 = *((unsigned int *)t16);
    t31 = *((unsigned int *)t15);
    t32 = (t30 ^ t31);
    t33 = *((unsigned int *)t24);
    t34 = *((unsigned int *)t25);
    t35 = (t33 ^ t34);
    t36 = (t32 | t35);
    t37 = *((unsigned int *)t24);
    t38 = *((unsigned int *)t25);
    t39 = (t37 | t38);
    t40 = (~(t39));
    t41 = (t36 & t40);
    if (t41 != 0)
        goto LAB143;

LAB140:    if (t39 != 0)
        goto LAB142;

LAB141:    *((unsigned int *)t27) = 1;

LAB143:    t44 = *((unsigned int *)t14);
    t45 = *((unsigned int *)t27);
    t46 = (t44 & t45);
    *((unsigned int *)t43) = t46;
    t28 = (t14 + 4);
    t29 = (t27 + 4);
    t42 = (t43 + 4);
    t50 = *((unsigned int *)t28);
    t51 = *((unsigned int *)t29);
    t52 = (t50 | t51);
    *((unsigned int *)t42) = t52;
    t53 = *((unsigned int *)t42);
    t54 = (t53 != 0);
    if (t54 == 1)
        goto LAB144;

LAB145:
LAB146:    t49 = (t43 + 4);
    t76 = *((unsigned int *)t49);
    t77 = (~(t76));
    t78 = *((unsigned int *)t43);
    t79 = (t78 & t77);
    t80 = (t79 != 0);
    if (t80 > 0)
        goto LAB147;

LAB148:
LAB149:    goto LAB20;

LAB16:    xsi_set_current_line(139, ng0);

LAB153:    xsi_set_current_line(140, ng0);
    t3 = (t0 + 1368U);
    t5 = *((char **)t3);
    t3 = ((char*)((ng2)));
    memset(t14, 0, 8);
    t11 = (t5 + 4);
    t12 = (t3 + 4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t3);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t17 = (t9 ^ t10);
    t18 = (t8 | t17);
    t19 = *((unsigned int *)t11);
    t20 = *((unsigned int *)t12);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB157;

LAB154:    if (t21 != 0)
        goto LAB156;

LAB155:    *((unsigned int *)t14) = 1;

LAB157:    t16 = (t0 + 1528U);
    t24 = *((char **)t16);
    t16 = ((char*)((ng2)));
    memset(t27, 0, 8);
    t25 = (t24 + 4);
    t26 = (t16 + 4);
    t30 = *((unsigned int *)t24);
    t31 = *((unsigned int *)t16);
    t32 = (t30 ^ t31);
    t33 = *((unsigned int *)t25);
    t34 = *((unsigned int *)t26);
    t35 = (t33 ^ t34);
    t36 = (t32 | t35);
    t37 = *((unsigned int *)t25);
    t38 = *((unsigned int *)t26);
    t39 = (t37 | t38);
    t40 = (~(t39));
    t41 = (t36 & t40);
    if (t41 != 0)
        goto LAB161;

LAB158:    if (t39 != 0)
        goto LAB160;

LAB159:    *((unsigned int *)t27) = 1;

LAB161:    t44 = *((unsigned int *)t14);
    t45 = *((unsigned int *)t27);
    t46 = (t44 & t45);
    *((unsigned int *)t43) = t46;
    t29 = (t14 + 4);
    t42 = (t27 + 4);
    t47 = (t43 + 4);
    t50 = *((unsigned int *)t29);
    t51 = *((unsigned int *)t42);
    t52 = (t50 | t51);
    *((unsigned int *)t47) = t52;
    t53 = *((unsigned int *)t47);
    t54 = (t53 != 0);
    if (t54 == 1)
        goto LAB162;

LAB163:
LAB164:    t57 = (t43 + 4);
    t76 = *((unsigned int *)t57);
    t77 = (~(t76));
    t78 = *((unsigned int *)t43);
    t79 = (t78 & t77);
    t80 = (t79 != 0);
    if (t80 > 0)
        goto LAB165;

LAB166:
LAB167:    xsi_set_current_line(151, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t14, 0, 8);
    t5 = (t3 + 4);
    t11 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t11);
    t17 = (t9 ^ t10);
    t18 = (t8 | t17);
    t19 = *((unsigned int *)t5);
    t20 = *((unsigned int *)t11);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB174;

LAB171:    if (t21 != 0)
        goto LAB173;

LAB172:    *((unsigned int *)t14) = 1;

LAB174:    t15 = (t0 + 1528U);
    t16 = *((char **)t15);
    t15 = ((char*)((ng3)));
    memset(t27, 0, 8);
    t24 = (t16 + 4);
    t25 = (t15 + 4);
    t30 = *((unsigned int *)t16);
    t31 = *((unsigned int *)t15);
    t32 = (t30 ^ t31);
    t33 = *((unsigned int *)t24);
    t34 = *((unsigned int *)t25);
    t35 = (t33 ^ t34);
    t36 = (t32 | t35);
    t37 = *((unsigned int *)t24);
    t38 = *((unsigned int *)t25);
    t39 = (t37 | t38);
    t40 = (~(t39));
    t41 = (t36 & t40);
    if (t41 != 0)
        goto LAB178;

LAB175:    if (t39 != 0)
        goto LAB177;

LAB176:    *((unsigned int *)t27) = 1;

LAB178:    t44 = *((unsigned int *)t14);
    t45 = *((unsigned int *)t27);
    t46 = (t44 & t45);
    *((unsigned int *)t43) = t46;
    t28 = (t14 + 4);
    t29 = (t27 + 4);
    t42 = (t43 + 4);
    t50 = *((unsigned int *)t28);
    t51 = *((unsigned int *)t29);
    t52 = (t50 | t51);
    *((unsigned int *)t42) = t52;
    t53 = *((unsigned int *)t42);
    t54 = (t53 != 0);
    if (t54 == 1)
        goto LAB179;

LAB180:
LAB181:    t49 = (t43 + 4);
    t76 = *((unsigned int *)t49);
    t77 = (~(t76));
    t78 = *((unsigned int *)t43);
    t79 = (t78 & t77);
    t80 = (t79 != 0);
    if (t80 > 0)
        goto LAB182;

LAB183:
LAB184:    xsi_set_current_line(159, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t14, 0, 8);
    t5 = (t3 + 4);
    t11 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t11);
    t17 = (t9 ^ t10);
    t18 = (t8 | t17);
    t19 = *((unsigned int *)t5);
    t20 = *((unsigned int *)t11);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB190;

LAB187:    if (t21 != 0)
        goto LAB189;

LAB188:    *((unsigned int *)t14) = 1;

LAB190:    t15 = (t0 + 1528U);
    t16 = *((char **)t15);
    t15 = ((char*)((ng2)));
    memset(t27, 0, 8);
    t24 = (t16 + 4);
    t25 = (t15 + 4);
    t30 = *((unsigned int *)t16);
    t31 = *((unsigned int *)t15);
    t32 = (t30 ^ t31);
    t33 = *((unsigned int *)t24);
    t34 = *((unsigned int *)t25);
    t35 = (t33 ^ t34);
    t36 = (t32 | t35);
    t37 = *((unsigned int *)t24);
    t38 = *((unsigned int *)t25);
    t39 = (t37 | t38);
    t40 = (~(t39));
    t41 = (t36 & t40);
    if (t41 != 0)
        goto LAB194;

LAB191:    if (t39 != 0)
        goto LAB193;

LAB192:    *((unsigned int *)t27) = 1;

LAB194:    t44 = *((unsigned int *)t14);
    t45 = *((unsigned int *)t27);
    t46 = (t44 & t45);
    *((unsigned int *)t43) = t46;
    t28 = (t14 + 4);
    t29 = (t27 + 4);
    t42 = (t43 + 4);
    t50 = *((unsigned int *)t28);
    t51 = *((unsigned int *)t29);
    t52 = (t50 | t51);
    *((unsigned int *)t42) = t52;
    t53 = *((unsigned int *)t42);
    t54 = (t53 != 0);
    if (t54 == 1)
        goto LAB195;

LAB196:
LAB197:    t49 = (t43 + 4);
    t76 = *((unsigned int *)t49);
    t77 = (~(t76));
    t78 = *((unsigned int *)t43);
    t79 = (t78 & t77);
    t80 = (t79 != 0);
    if (t80 > 0)
        goto LAB198;

LAB199:
LAB200:    xsi_set_current_line(167, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t14, 0, 8);
    t5 = (t3 + 4);
    t11 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t11);
    t17 = (t9 ^ t10);
    t18 = (t8 | t17);
    t19 = *((unsigned int *)t5);
    t20 = *((unsigned int *)t11);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB205;

LAB202:    if (t21 != 0)
        goto LAB204;

LAB203:    *((unsigned int *)t14) = 1;

LAB205:    t15 = (t0 + 1528U);
    t16 = *((char **)t15);
    t15 = ((char*)((ng3)));
    memset(t27, 0, 8);
    t24 = (t16 + 4);
    t25 = (t15 + 4);
    t30 = *((unsigned int *)t16);
    t31 = *((unsigned int *)t15);
    t32 = (t30 ^ t31);
    t33 = *((unsigned int *)t24);
    t34 = *((unsigned int *)t25);
    t35 = (t33 ^ t34);
    t36 = (t32 | t35);
    t37 = *((unsigned int *)t24);
    t38 = *((unsigned int *)t25);
    t39 = (t37 | t38);
    t40 = (~(t39));
    t41 = (t36 & t40);
    if (t41 != 0)
        goto LAB209;

LAB206:    if (t39 != 0)
        goto LAB208;

LAB207:    *((unsigned int *)t27) = 1;

LAB209:    t44 = *((unsigned int *)t14);
    t45 = *((unsigned int *)t27);
    t46 = (t44 & t45);
    *((unsigned int *)t43) = t46;
    t28 = (t14 + 4);
    t29 = (t27 + 4);
    t42 = (t43 + 4);
    t50 = *((unsigned int *)t28);
    t51 = *((unsigned int *)t29);
    t52 = (t50 | t51);
    *((unsigned int *)t42) = t52;
    t53 = *((unsigned int *)t42);
    t54 = (t53 != 0);
    if (t54 == 1)
        goto LAB210;

LAB211:
LAB212:    t49 = (t43 + 4);
    t76 = *((unsigned int *)t49);
    t77 = (~(t76));
    t78 = *((unsigned int *)t43);
    t79 = (t78 & t77);
    t80 = (t79 != 0);
    if (t80 > 0)
        goto LAB213;

LAB214:
LAB215:    goto LAB20;

LAB18:    xsi_set_current_line(176, ng0);

LAB218:    xsi_set_current_line(177, ng0);
    t3 = (t0 + 1368U);
    t5 = *((char **)t3);
    t3 = ((char*)((ng2)));
    memset(t14, 0, 8);
    t11 = (t5 + 4);
    t12 = (t3 + 4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t3);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t17 = (t9 ^ t10);
    t18 = (t8 | t17);
    t19 = *((unsigned int *)t11);
    t20 = *((unsigned int *)t12);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB222;

LAB219:    if (t21 != 0)
        goto LAB221;

LAB220:    *((unsigned int *)t14) = 1;

LAB222:    t16 = (t0 + 1528U);
    t24 = *((char **)t16);
    t16 = ((char*)((ng2)));
    memset(t27, 0, 8);
    t25 = (t24 + 4);
    t26 = (t16 + 4);
    t30 = *((unsigned int *)t24);
    t31 = *((unsigned int *)t16);
    t32 = (t30 ^ t31);
    t33 = *((unsigned int *)t25);
    t34 = *((unsigned int *)t26);
    t35 = (t33 ^ t34);
    t36 = (t32 | t35);
    t37 = *((unsigned int *)t25);
    t38 = *((unsigned int *)t26);
    t39 = (t37 | t38);
    t40 = (~(t39));
    t41 = (t36 & t40);
    if (t41 != 0)
        goto LAB226;

LAB223:    if (t39 != 0)
        goto LAB225;

LAB224:    *((unsigned int *)t27) = 1;

LAB226:    t44 = *((unsigned int *)t14);
    t45 = *((unsigned int *)t27);
    t46 = (t44 & t45);
    *((unsigned int *)t43) = t46;
    t29 = (t14 + 4);
    t42 = (t27 + 4);
    t47 = (t43 + 4);
    t50 = *((unsigned int *)t29);
    t51 = *((unsigned int *)t42);
    t52 = (t50 | t51);
    *((unsigned int *)t47) = t52;
    t53 = *((unsigned int *)t47);
    t54 = (t53 != 0);
    if (t54 == 1)
        goto LAB227;

LAB228:
LAB229:    t57 = (t43 + 4);
    t76 = *((unsigned int *)t57);
    t77 = (~(t76));
    t78 = *((unsigned int *)t43);
    t79 = (t78 & t77);
    t80 = (t79 != 0);
    if (t80 > 0)
        goto LAB230;

LAB231:
LAB232:    xsi_set_current_line(191, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t14, 0, 8);
    t5 = (t3 + 4);
    t11 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t11);
    t17 = (t9 ^ t10);
    t18 = (t8 | t17);
    t19 = *((unsigned int *)t5);
    t20 = *((unsigned int *)t11);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB240;

LAB237:    if (t21 != 0)
        goto LAB239;

LAB238:    *((unsigned int *)t14) = 1;

LAB240:    t15 = (t0 + 1528U);
    t16 = *((char **)t15);
    t15 = ((char*)((ng3)));
    memset(t27, 0, 8);
    t24 = (t16 + 4);
    t25 = (t15 + 4);
    t30 = *((unsigned int *)t16);
    t31 = *((unsigned int *)t15);
    t32 = (t30 ^ t31);
    t33 = *((unsigned int *)t24);
    t34 = *((unsigned int *)t25);
    t35 = (t33 ^ t34);
    t36 = (t32 | t35);
    t37 = *((unsigned int *)t24);
    t38 = *((unsigned int *)t25);
    t39 = (t37 | t38);
    t40 = (~(t39));
    t41 = (t36 & t40);
    if (t41 != 0)
        goto LAB244;

LAB241:    if (t39 != 0)
        goto LAB243;

LAB242:    *((unsigned int *)t27) = 1;

LAB244:    t44 = *((unsigned int *)t14);
    t45 = *((unsigned int *)t27);
    t46 = (t44 & t45);
    *((unsigned int *)t43) = t46;
    t28 = (t14 + 4);
    t29 = (t27 + 4);
    t42 = (t43 + 4);
    t50 = *((unsigned int *)t28);
    t51 = *((unsigned int *)t29);
    t52 = (t50 | t51);
    *((unsigned int *)t42) = t52;
    t53 = *((unsigned int *)t42);
    t54 = (t53 != 0);
    if (t54 == 1)
        goto LAB245;

LAB246:
LAB247:    t49 = (t43 + 4);
    t76 = *((unsigned int *)t49);
    t77 = (~(t76));
    t78 = *((unsigned int *)t43);
    t79 = (t78 & t77);
    t80 = (t79 != 0);
    if (t80 > 0)
        goto LAB248;

LAB249:
LAB250:    xsi_set_current_line(202, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t14, 0, 8);
    t5 = (t3 + 4);
    t11 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t11);
    t17 = (t9 ^ t10);
    t18 = (t8 | t17);
    t19 = *((unsigned int *)t5);
    t20 = *((unsigned int *)t11);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB257;

LAB254:    if (t21 != 0)
        goto LAB256;

LAB255:    *((unsigned int *)t14) = 1;

LAB257:    t15 = (t0 + 1528U);
    t16 = *((char **)t15);
    t15 = ((char*)((ng2)));
    memset(t27, 0, 8);
    t24 = (t16 + 4);
    t25 = (t15 + 4);
    t30 = *((unsigned int *)t16);
    t31 = *((unsigned int *)t15);
    t32 = (t30 ^ t31);
    t33 = *((unsigned int *)t24);
    t34 = *((unsigned int *)t25);
    t35 = (t33 ^ t34);
    t36 = (t32 | t35);
    t37 = *((unsigned int *)t24);
    t38 = *((unsigned int *)t25);
    t39 = (t37 | t38);
    t40 = (~(t39));
    t41 = (t36 & t40);
    if (t41 != 0)
        goto LAB261;

LAB258:    if (t39 != 0)
        goto LAB260;

LAB259:    *((unsigned int *)t27) = 1;

LAB261:    t44 = *((unsigned int *)t14);
    t45 = *((unsigned int *)t27);
    t46 = (t44 & t45);
    *((unsigned int *)t43) = t46;
    t28 = (t14 + 4);
    t29 = (t27 + 4);
    t42 = (t43 + 4);
    t50 = *((unsigned int *)t28);
    t51 = *((unsigned int *)t29);
    t52 = (t50 | t51);
    *((unsigned int *)t42) = t52;
    t53 = *((unsigned int *)t42);
    t54 = (t53 != 0);
    if (t54 == 1)
        goto LAB262;

LAB263:
LAB264:    t49 = (t43 + 4);
    t76 = *((unsigned int *)t49);
    t77 = (~(t76));
    t78 = *((unsigned int *)t43);
    t79 = (t78 & t77);
    t80 = (t79 != 0);
    if (t80 > 0)
        goto LAB265;

LAB266:
LAB267:    xsi_set_current_line(210, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t14, 0, 8);
    t5 = (t3 + 4);
    t11 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t11);
    t17 = (t9 ^ t10);
    t18 = (t8 | t17);
    t19 = *((unsigned int *)t5);
    t20 = *((unsigned int *)t11);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB273;

LAB270:    if (t21 != 0)
        goto LAB272;

LAB271:    *((unsigned int *)t14) = 1;

LAB273:    t15 = (t0 + 1528U);
    t16 = *((char **)t15);
    t15 = ((char*)((ng3)));
    memset(t27, 0, 8);
    t24 = (t16 + 4);
    t25 = (t15 + 4);
    t30 = *((unsigned int *)t16);
    t31 = *((unsigned int *)t15);
    t32 = (t30 ^ t31);
    t33 = *((unsigned int *)t24);
    t34 = *((unsigned int *)t25);
    t35 = (t33 ^ t34);
    t36 = (t32 | t35);
    t37 = *((unsigned int *)t24);
    t38 = *((unsigned int *)t25);
    t39 = (t37 | t38);
    t40 = (~(t39));
    t41 = (t36 & t40);
    if (t41 != 0)
        goto LAB277;

LAB274:    if (t39 != 0)
        goto LAB276;

LAB275:    *((unsigned int *)t27) = 1;

LAB277:    t44 = *((unsigned int *)t14);
    t45 = *((unsigned int *)t27);
    t46 = (t44 & t45);
    *((unsigned int *)t43) = t46;
    t28 = (t14 + 4);
    t29 = (t27 + 4);
    t42 = (t43 + 4);
    t50 = *((unsigned int *)t28);
    t51 = *((unsigned int *)t29);
    t52 = (t50 | t51);
    *((unsigned int *)t42) = t52;
    t53 = *((unsigned int *)t42);
    t54 = (t53 != 0);
    if (t54 == 1)
        goto LAB278;

LAB279:
LAB280:    t49 = (t43 + 4);
    t76 = *((unsigned int *)t49);
    t77 = (~(t76));
    t78 = *((unsigned int *)t43);
    t79 = (t78 & t77);
    t80 = (t79 != 0);
    if (t80 > 0)
        goto LAB281;

LAB282:
LAB283:    goto LAB20;

LAB24:    t24 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB25;

LAB28:    t42 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t42) = 1;
    goto LAB29;

LAB30:    t55 = *((unsigned int *)t43);
    t56 = *((unsigned int *)t49);
    *((unsigned int *)t43) = (t55 | t56);
    t57 = (t14 + 4);
    t58 = (t27 + 4);
    t59 = *((unsigned int *)t14);
    t60 = (~(t59));
    t61 = *((unsigned int *)t57);
    t62 = (~(t61));
    t63 = *((unsigned int *)t27);
    t64 = (~(t63));
    t65 = *((unsigned int *)t58);
    t66 = (~(t65));
    t67 = (t60 & t62);
    t68 = (t64 & t66);
    t69 = (~(t67));
    t70 = (~(t68));
    t71 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t71 & t69);
    t72 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t72 & t70);
    t73 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t73 & t69);
    t74 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t74 & t70);
    goto LAB32;

LAB33:    xsi_set_current_line(57, ng0);

LAB36:    xsi_set_current_line(58, ng0);
    t81 = ((char*)((ng1)));
    t82 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t82, t81, 0, 0, 2, 0LL);
    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB35;

LAB39:    t12 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB40;

LAB43:    t26 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB44;

LAB45:    t55 = *((unsigned int *)t43);
    t56 = *((unsigned int *)t42);
    *((unsigned int *)t43) = (t55 | t56);
    t47 = (t14 + 4);
    t48 = (t27 + 4);
    t59 = *((unsigned int *)t14);
    t60 = (~(t59));
    t61 = *((unsigned int *)t47);
    t62 = (~(t61));
    t63 = *((unsigned int *)t27);
    t64 = (~(t63));
    t65 = *((unsigned int *)t48);
    t66 = (~(t65));
    t13 = (t60 & t62);
    t67 = (t64 & t66);
    t69 = (~(t13));
    t70 = (~(t67));
    t71 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t71 & t69);
    t72 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t72 & t70);
    t73 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t73 & t69);
    t74 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t74 & t70);
    goto LAB47;

LAB48:    xsi_set_current_line(64, ng0);

LAB51:    xsi_set_current_line(66, ng0);
    t57 = ((char*)((ng3)));
    t58 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t58, t57, 0, 0, 1, 0LL);
    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(70, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(71, ng0);
    t2 = (t0 + 3544);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB52;
    goto LAB1;

LAB52:    goto LAB50;

LAB55:    t12 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB56;

LAB59:    t26 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB60;

LAB61:    t55 = *((unsigned int *)t43);
    t56 = *((unsigned int *)t42);
    *((unsigned int *)t43) = (t55 | t56);
    t47 = (t14 + 4);
    t48 = (t27 + 4);
    t59 = *((unsigned int *)t14);
    t60 = (~(t59));
    t61 = *((unsigned int *)t47);
    t62 = (~(t61));
    t63 = *((unsigned int *)t27);
    t64 = (~(t63));
    t65 = *((unsigned int *)t48);
    t66 = (~(t65));
    t13 = (t60 & t62);
    t67 = (t64 & t66);
    t69 = (~(t13));
    t70 = (~(t67));
    t71 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t71 & t69);
    t72 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t72 & t70);
    t73 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t73 & t69);
    t74 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t74 & t70);
    goto LAB63;

LAB64:    xsi_set_current_line(72, ng0);

LAB67:    xsi_set_current_line(73, ng0);
    t57 = ((char*)((ng5)));
    t58 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t58, t57, 0, 0, 2, 0LL);
    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(76, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(79, ng0);
    t2 = (t0 + 3544);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB68;
    goto LAB1;

LAB68:    xsi_set_current_line(80, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(81, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(82, ng0);
    t2 = (t0 + 3544);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB69;
    goto LAB1;

LAB69:    goto LAB66;

LAB72:    t12 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB73;

LAB76:    t26 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB77;

LAB78:    t55 = *((unsigned int *)t43);
    t56 = *((unsigned int *)t42);
    *((unsigned int *)t43) = (t55 | t56);
    t47 = (t14 + 4);
    t48 = (t27 + 4);
    t59 = *((unsigned int *)t14);
    t60 = (~(t59));
    t61 = *((unsigned int *)t47);
    t62 = (~(t61));
    t63 = *((unsigned int *)t27);
    t64 = (~(t63));
    t65 = *((unsigned int *)t48);
    t66 = (~(t65));
    t13 = (t60 & t62);
    t67 = (t64 & t66);
    t69 = (~(t13));
    t70 = (~(t67));
    t71 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t71 & t69);
    t72 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t72 & t70);
    t73 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t73 & t69);
    t74 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t74 & t70);
    goto LAB80;

LAB81:    xsi_set_current_line(84, ng0);

LAB84:    xsi_set_current_line(85, ng0);
    t57 = ((char*)((ng6)));
    t58 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t58, t57, 0, 0, 2, 0LL);
    xsi_set_current_line(87, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(88, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(89, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(90, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(91, ng0);
    t2 = (t0 + 3544);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB85;
    goto LAB1;

LAB85:    xsi_set_current_line(92, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(93, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(94, ng0);
    t2 = (t0 + 3544);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB86;
    goto LAB1;

LAB86:    xsi_set_current_line(95, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(96, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(97, ng0);
    t2 = (t0 + 3544);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB87;
    goto LAB1;

LAB87:    goto LAB83;

LAB91:    t15 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB92;

LAB95:    t28 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB96;

LAB97:    t55 = *((unsigned int *)t43);
    t56 = *((unsigned int *)t47);
    *((unsigned int *)t43) = (t55 | t56);
    t48 = (t14 + 4);
    t49 = (t27 + 4);
    t59 = *((unsigned int *)t14);
    t60 = (~(t59));
    t61 = *((unsigned int *)t48);
    t62 = (~(t61));
    t63 = *((unsigned int *)t27);
    t64 = (~(t63));
    t65 = *((unsigned int *)t49);
    t66 = (~(t65));
    t67 = (t60 & t62);
    t68 = (t64 & t66);
    t69 = (~(t67));
    t70 = (~(t68));
    t71 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t71 & t69);
    t72 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t72 & t70);
    t73 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t73 & t69);
    t74 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t74 & t70);
    goto LAB99;

LAB100:    xsi_set_current_line(101, ng0);

LAB103:    xsi_set_current_line(102, ng0);
    t58 = ((char*)((ng1)));
    t75 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t75, t58, 0, 0, 2, 0LL);
    xsi_set_current_line(104, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(105, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(106, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(107, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(108, ng0);
    t2 = (t0 + 3544);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB104;
    goto LAB1;

LAB104:    goto LAB102;

LAB107:    t12 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB108;

LAB111:    t26 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB112;

LAB113:    t55 = *((unsigned int *)t43);
    t56 = *((unsigned int *)t42);
    *((unsigned int *)t43) = (t55 | t56);
    t47 = (t14 + 4);
    t48 = (t27 + 4);
    t59 = *((unsigned int *)t14);
    t60 = (~(t59));
    t61 = *((unsigned int *)t47);
    t62 = (~(t61));
    t63 = *((unsigned int *)t27);
    t64 = (~(t63));
    t65 = *((unsigned int *)t48);
    t66 = (~(t65));
    t13 = (t60 & t62);
    t67 = (t64 & t66);
    t69 = (~(t13));
    t70 = (~(t67));
    t71 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t71 & t69);
    t72 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t72 & t70);
    t73 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t73 & t69);
    t74 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t74 & t70);
    goto LAB115;

LAB116:    xsi_set_current_line(110, ng0);

LAB119:    xsi_set_current_line(111, ng0);
    t57 = ((char*)((ng4)));
    t58 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t58, t57, 0, 0, 2, 0LL);
    xsi_set_current_line(113, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(114, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(115, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(116, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB118;

LAB122:    t12 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB123;

LAB126:    t26 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB127;

LAB128:    t55 = *((unsigned int *)t43);
    t56 = *((unsigned int *)t42);
    *((unsigned int *)t43) = (t55 | t56);
    t47 = (t14 + 4);
    t48 = (t27 + 4);
    t59 = *((unsigned int *)t14);
    t60 = (~(t59));
    t61 = *((unsigned int *)t47);
    t62 = (~(t61));
    t63 = *((unsigned int *)t27);
    t64 = (~(t63));
    t65 = *((unsigned int *)t48);
    t66 = (~(t65));
    t13 = (t60 & t62);
    t67 = (t64 & t66);
    t69 = (~(t13));
    t70 = (~(t67));
    t71 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t71 & t69);
    t72 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t72 & t70);
    t73 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t73 & t69);
    t74 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t74 & t70);
    goto LAB130;

LAB131:    xsi_set_current_line(117, ng0);

LAB134:    xsi_set_current_line(118, ng0);
    t57 = ((char*)((ng5)));
    t58 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t58, t57, 0, 0, 2, 0LL);
    xsi_set_current_line(120, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(121, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(122, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(123, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(124, ng0);
    t2 = (t0 + 3544);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB135;
    goto LAB1;

LAB135:    goto LAB133;

LAB138:    t12 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB139;

LAB142:    t26 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB143;

LAB144:    t55 = *((unsigned int *)t43);
    t56 = *((unsigned int *)t42);
    *((unsigned int *)t43) = (t55 | t56);
    t47 = (t14 + 4);
    t48 = (t27 + 4);
    t59 = *((unsigned int *)t14);
    t60 = (~(t59));
    t61 = *((unsigned int *)t47);
    t62 = (~(t61));
    t63 = *((unsigned int *)t27);
    t64 = (~(t63));
    t65 = *((unsigned int *)t48);
    t66 = (~(t65));
    t13 = (t60 & t62);
    t67 = (t64 & t66);
    t69 = (~(t13));
    t70 = (~(t67));
    t71 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t71 & t69);
    t72 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t72 & t70);
    t73 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t73 & t69);
    t74 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t74 & t70);
    goto LAB146;

LAB147:    xsi_set_current_line(126, ng0);

LAB150:    xsi_set_current_line(127, ng0);
    t57 = ((char*)((ng6)));
    t58 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t58, t57, 0, 0, 2, 0LL);
    xsi_set_current_line(129, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(130, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(131, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(132, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(133, ng0);
    t2 = (t0 + 3544);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB151;
    goto LAB1;

LAB151:    xsi_set_current_line(134, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(135, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(136, ng0);
    t2 = (t0 + 3544);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB152;
    goto LAB1;

LAB152:    goto LAB149;

LAB156:    t15 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB157;

LAB160:    t28 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB161;

LAB162:    t55 = *((unsigned int *)t43);
    t56 = *((unsigned int *)t47);
    *((unsigned int *)t43) = (t55 | t56);
    t48 = (t14 + 4);
    t49 = (t27 + 4);
    t59 = *((unsigned int *)t14);
    t60 = (~(t59));
    t61 = *((unsigned int *)t48);
    t62 = (~(t61));
    t63 = *((unsigned int *)t27);
    t64 = (~(t63));
    t65 = *((unsigned int *)t49);
    t66 = (~(t65));
    t67 = (t60 & t62);
    t68 = (t64 & t66);
    t69 = (~(t67));
    t70 = (~(t68));
    t71 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t71 & t69);
    t72 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t72 & t70);
    t73 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t73 & t69);
    t74 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t74 & t70);
    goto LAB164;

LAB165:    xsi_set_current_line(140, ng0);

LAB168:    xsi_set_current_line(141, ng0);
    t58 = ((char*)((ng1)));
    t75 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t75, t58, 0, 0, 2, 0LL);
    xsi_set_current_line(143, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(144, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(145, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(146, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(147, ng0);
    t2 = (t0 + 3544);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB169;
    goto LAB1;

LAB169:    xsi_set_current_line(148, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(149, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(150, ng0);
    t2 = (t0 + 3544);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB170;
    goto LAB1;

LAB170:    goto LAB167;

LAB173:    t12 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB174;

LAB177:    t26 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB178;

LAB179:    t55 = *((unsigned int *)t43);
    t56 = *((unsigned int *)t42);
    *((unsigned int *)t43) = (t55 | t56);
    t47 = (t14 + 4);
    t48 = (t27 + 4);
    t59 = *((unsigned int *)t14);
    t60 = (~(t59));
    t61 = *((unsigned int *)t47);
    t62 = (~(t61));
    t63 = *((unsigned int *)t27);
    t64 = (~(t63));
    t65 = *((unsigned int *)t48);
    t66 = (~(t65));
    t13 = (t60 & t62);
    t67 = (t64 & t66);
    t69 = (~(t13));
    t70 = (~(t67));
    t71 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t71 & t69);
    t72 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t72 & t70);
    t73 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t73 & t69);
    t74 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t74 & t70);
    goto LAB181;

LAB182:    xsi_set_current_line(151, ng0);

LAB185:    xsi_set_current_line(152, ng0);
    t57 = ((char*)((ng4)));
    t58 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t58, t57, 0, 0, 2, 0LL);
    xsi_set_current_line(154, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(155, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(156, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(157, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(158, ng0);
    t2 = (t0 + 3544);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB186;
    goto LAB1;

LAB186:    goto LAB184;

LAB189:    t12 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB190;

LAB193:    t26 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB194;

LAB195:    t55 = *((unsigned int *)t43);
    t56 = *((unsigned int *)t42);
    *((unsigned int *)t43) = (t55 | t56);
    t47 = (t14 + 4);
    t48 = (t27 + 4);
    t59 = *((unsigned int *)t14);
    t60 = (~(t59));
    t61 = *((unsigned int *)t47);
    t62 = (~(t61));
    t63 = *((unsigned int *)t27);
    t64 = (~(t63));
    t65 = *((unsigned int *)t48);
    t66 = (~(t65));
    t13 = (t60 & t62);
    t67 = (t64 & t66);
    t69 = (~(t13));
    t70 = (~(t67));
    t71 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t71 & t69);
    t72 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t72 & t70);
    t73 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t73 & t69);
    t74 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t74 & t70);
    goto LAB197;

LAB198:    xsi_set_current_line(159, ng0);

LAB201:    xsi_set_current_line(160, ng0);
    t57 = ((char*)((ng5)));
    t58 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t58, t57, 0, 0, 2, 0LL);
    xsi_set_current_line(162, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(163, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(164, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(165, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB200;

LAB204:    t12 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB205;

LAB208:    t26 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB209;

LAB210:    t55 = *((unsigned int *)t43);
    t56 = *((unsigned int *)t42);
    *((unsigned int *)t43) = (t55 | t56);
    t47 = (t14 + 4);
    t48 = (t27 + 4);
    t59 = *((unsigned int *)t14);
    t60 = (~(t59));
    t61 = *((unsigned int *)t47);
    t62 = (~(t61));
    t63 = *((unsigned int *)t27);
    t64 = (~(t63));
    t65 = *((unsigned int *)t48);
    t66 = (~(t65));
    t13 = (t60 & t62);
    t67 = (t64 & t66);
    t69 = (~(t13));
    t70 = (~(t67));
    t71 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t71 & t69);
    t72 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t72 & t70);
    t73 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t73 & t69);
    t74 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t74 & t70);
    goto LAB212;

LAB213:    xsi_set_current_line(167, ng0);

LAB216:    xsi_set_current_line(168, ng0);
    t57 = ((char*)((ng6)));
    t58 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t58, t57, 0, 0, 2, 0LL);
    xsi_set_current_line(170, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(171, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(172, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(173, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(174, ng0);
    t2 = (t0 + 3544);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB217;
    goto LAB1;

LAB217:    goto LAB215;

LAB221:    t15 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB222;

LAB225:    t28 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB226;

LAB227:    t55 = *((unsigned int *)t43);
    t56 = *((unsigned int *)t47);
    *((unsigned int *)t43) = (t55 | t56);
    t48 = (t14 + 4);
    t49 = (t27 + 4);
    t59 = *((unsigned int *)t14);
    t60 = (~(t59));
    t61 = *((unsigned int *)t48);
    t62 = (~(t61));
    t63 = *((unsigned int *)t27);
    t64 = (~(t63));
    t65 = *((unsigned int *)t49);
    t66 = (~(t65));
    t67 = (t60 & t62);
    t68 = (t64 & t66);
    t69 = (~(t67));
    t70 = (~(t68));
    t71 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t71 & t69);
    t72 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t72 & t70);
    t73 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t73 & t69);
    t74 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t74 & t70);
    goto LAB229;

LAB230:    xsi_set_current_line(177, ng0);

LAB233:    xsi_set_current_line(178, ng0);
    t58 = ((char*)((ng1)));
    t75 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t75, t58, 0, 0, 2, 0LL);
    xsi_set_current_line(180, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(181, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(182, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(183, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(184, ng0);
    t2 = (t0 + 3544);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB234;
    goto LAB1;

LAB234:    xsi_set_current_line(185, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(186, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(187, ng0);
    t2 = (t0 + 3544);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB235;
    goto LAB1;

LAB235:    xsi_set_current_line(188, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(189, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(190, ng0);
    t2 = (t0 + 3544);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB236;
    goto LAB1;

LAB236:    goto LAB232;

LAB239:    t12 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB240;

LAB243:    t26 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB244;

LAB245:    t55 = *((unsigned int *)t43);
    t56 = *((unsigned int *)t42);
    *((unsigned int *)t43) = (t55 | t56);
    t47 = (t14 + 4);
    t48 = (t27 + 4);
    t59 = *((unsigned int *)t14);
    t60 = (~(t59));
    t61 = *((unsigned int *)t47);
    t62 = (~(t61));
    t63 = *((unsigned int *)t27);
    t64 = (~(t63));
    t65 = *((unsigned int *)t48);
    t66 = (~(t65));
    t13 = (t60 & t62);
    t67 = (t64 & t66);
    t69 = (~(t13));
    t70 = (~(t67));
    t71 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t71 & t69);
    t72 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t72 & t70);
    t73 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t73 & t69);
    t74 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t74 & t70);
    goto LAB247;

LAB248:    xsi_set_current_line(191, ng0);

LAB251:    xsi_set_current_line(192, ng0);
    t57 = ((char*)((ng4)));
    t58 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t58, t57, 0, 0, 2, 0LL);
    xsi_set_current_line(194, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(195, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(196, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(197, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(198, ng0);
    t2 = (t0 + 3544);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB252;
    goto LAB1;

LAB252:    xsi_set_current_line(199, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(200, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(201, ng0);
    t2 = (t0 + 3544);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB253;
    goto LAB1;

LAB253:    goto LAB250;

LAB256:    t12 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB257;

LAB260:    t26 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB261;

LAB262:    t55 = *((unsigned int *)t43);
    t56 = *((unsigned int *)t42);
    *((unsigned int *)t43) = (t55 | t56);
    t47 = (t14 + 4);
    t48 = (t27 + 4);
    t59 = *((unsigned int *)t14);
    t60 = (~(t59));
    t61 = *((unsigned int *)t47);
    t62 = (~(t61));
    t63 = *((unsigned int *)t27);
    t64 = (~(t63));
    t65 = *((unsigned int *)t48);
    t66 = (~(t65));
    t13 = (t60 & t62);
    t67 = (t64 & t66);
    t69 = (~(t13));
    t70 = (~(t67));
    t71 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t71 & t69);
    t72 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t72 & t70);
    t73 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t73 & t69);
    t74 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t74 & t70);
    goto LAB264;

LAB265:    xsi_set_current_line(202, ng0);

LAB268:    xsi_set_current_line(203, ng0);
    t57 = ((char*)((ng5)));
    t58 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t58, t57, 0, 0, 2, 0LL);
    xsi_set_current_line(205, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(206, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(207, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(208, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(209, ng0);
    t2 = (t0 + 3544);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB269;
    goto LAB1;

LAB269:    goto LAB267;

LAB272:    t12 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB273;

LAB276:    t26 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB277;

LAB278:    t55 = *((unsigned int *)t43);
    t56 = *((unsigned int *)t42);
    *((unsigned int *)t43) = (t55 | t56);
    t47 = (t14 + 4);
    t48 = (t27 + 4);
    t59 = *((unsigned int *)t14);
    t60 = (~(t59));
    t61 = *((unsigned int *)t47);
    t62 = (~(t61));
    t63 = *((unsigned int *)t27);
    t64 = (~(t63));
    t65 = *((unsigned int *)t48);
    t66 = (~(t65));
    t13 = (t60 & t62);
    t67 = (t64 & t66);
    t69 = (~(t13));
    t70 = (~(t67));
    t71 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t71 & t69);
    t72 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t72 & t70);
    t73 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t73 & t69);
    t74 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t74 & t70);
    goto LAB280;

LAB281:    xsi_set_current_line(210, ng0);

LAB284:    xsi_set_current_line(211, ng0);
    t57 = ((char*)((ng6)));
    t58 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t58, t57, 0, 0, 2, 0LL);
    xsi_set_current_line(213, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(214, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(215, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(216, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(217, ng0);
    t2 = (t0 + 3544);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB285;
    goto LAB1;

LAB285:    goto LAB283;

}


extern void work_m_00000000004001196941_0934111460_init()
{
	static char *pe[] = {(void *)Initial_38_0,(void *)Always_41_1};
	xsi_register_didat("work_m_00000000004001196941_0934111460", "isim/maquina_programada_isim_beh.exe.sim/work/m_00000000004001196941_0934111460.didat");
	xsi_register_executes(pe);
}
