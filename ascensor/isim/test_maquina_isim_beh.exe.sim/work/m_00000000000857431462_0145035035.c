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
static const char *ng0 = "C:/Users/jairo-mm/OneDrive/Documentos/TallerDeDigitales/ascensor/test_maquina.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static const char *ng3 = "State = ";
static const char *ng4 = ", Input1 = ";
static const char *ng5 = ", Input2 = ";
static const char *ng6 = ", State1 = ";
static const char *ng7 = ", State2 = ";
static const char *ng8 = ", Output1 = ";
static const char *ng9 = ", Output2 = ";



static void Always_51_0(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;

LAB0:    t1 = (t0 + 3328U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 3136);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(51, ng0);
    t4 = (t0 + 1928);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t3, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB8;

LAB6:    if (*((unsigned int *)t7) == 0)
        goto LAB5;

LAB7:    t13 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t13) = 1;

LAB8:    t14 = (t3 + 4);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t17 = (~(t16));
    *((unsigned int *)t3) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB10;

LAB9:    t22 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t24 = (t0 + 1928);
    xsi_vlogvar_assign_value(t24, t3, 0, 0, 1);
    goto LAB2;

LAB5:    *((unsigned int *)t3) = 1;
    goto LAB8;

LAB10:    t18 = *((unsigned int *)t3);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t3) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB9;

}

static void Initial_52_1(char *t0)
{
    char t6[8];
    char t16[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t17;
    char *t18;
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
    char *t29;
    char *t30;
    char *t31;
    char *t32;

LAB0:    t1 = (t0 + 3576U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(52, ng0);

LAB4:    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(59, ng0);
    t2 = (t0 + 5568);
    t3 = *((char **)t2);
    t4 = ((((char*)(t3))) + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 5592);
    t8 = *((char **)t7);
    t9 = ((((char*)(t8))) + 72U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng1)));
    xsi_vlog_generic_get_index_select_value(t6, 1, t5, t10, 2, t11, 32, 1);
    t12 = (t0 + 5616);
    t13 = *((char **)t12);
    t14 = ((((char*)(t13))) + 56U);
    t15 = *((char **)t14);
    t17 = (t0 + 5640);
    t18 = *((char **)t17);
    t19 = ((((char*)(t18))) + 72U);
    t20 = *((char **)t19);
    t21 = ((char*)((ng2)));
    xsi_vlog_generic_get_index_select_value(t16, 1, t15, t20, 2, t21, 32, 1);
    xsi_vlogfile_write(0, 0, 0, ng3, 3, t0, (char)118, t6, 1, (char)118, t16, 1);
    t22 = (t0 + 2248);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    xsi_vlogfile_write(0, 0, 0, ng4, 2, t0, (char)118, t24, 1);
    t25 = (t0 + 2408);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    xsi_vlogfile_write(0, 0, 0, ng5, 2, t0, (char)118, t27, 1);
    t28 = (t0 + 1368U);
    t29 = *((char **)t28);
    xsi_vlogfile_write(0, 0, 0, ng6, 2, t0, (char)118, t29, 1);
    t28 = (t0 + 1528U);
    t30 = *((char **)t28);
    xsi_vlogfile_write(0, 0, 0, ng7, 2, t0, (char)118, t30, 1);
    t28 = (t0 + 1048U);
    t31 = *((char **)t28);
    xsi_vlogfile_write(0, 0, 0, ng8, 2, t0, (char)118, t31, 1);
    t28 = (t0 + 1208U);
    t32 = *((char **)t28);
    xsi_vlogfile_write(1, 0, 0, ng9, 2, t0, (char)118, t32, 1);
    xsi_set_current_line(60, ng0);
    t2 = (t0 + 3384);
    xsi_process_wait(t2, 250000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(61, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 2248);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(63, ng0);
    t2 = (t0 + 5664);
    t3 = *((char **)t2);
    t4 = ((((char*)(t3))) + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 5688);
    t8 = *((char **)t7);
    t9 = ((((char*)(t8))) + 72U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng1)));
    xsi_vlog_generic_get_index_select_value(t6, 1, t5, t10, 2, t11, 32, 1);
    t12 = (t0 + 5712);
    t13 = *((char **)t12);
    t14 = ((((char*)(t13))) + 56U);
    t15 = *((char **)t14);
    t17 = (t0 + 5736);
    t18 = *((char **)t17);
    t19 = ((((char*)(t18))) + 72U);
    t20 = *((char **)t19);
    t21 = ((char*)((ng2)));
    xsi_vlog_generic_get_index_select_value(t16, 1, t15, t20, 2, t21, 32, 1);
    xsi_vlogfile_write(0, 0, 0, ng3, 3, t0, (char)118, t6, 1, (char)118, t16, 1);
    t22 = (t0 + 2248);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    xsi_vlogfile_write(0, 0, 0, ng4, 2, t0, (char)118, t24, 1);
    t25 = (t0 + 2408);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    xsi_vlogfile_write(0, 0, 0, ng5, 2, t0, (char)118, t27, 1);
    t28 = (t0 + 1368U);
    t29 = *((char **)t28);
    xsi_vlogfile_write(0, 0, 0, ng6, 2, t0, (char)118, t29, 1);
    t28 = (t0 + 1528U);
    t30 = *((char **)t28);
    xsi_vlogfile_write(0, 0, 0, ng7, 2, t0, (char)118, t30, 1);
    t28 = (t0 + 1048U);
    t31 = *((char **)t28);
    xsi_vlogfile_write(0, 0, 0, ng8, 2, t0, (char)118, t31, 1);
    t28 = (t0 + 1208U);
    t32 = *((char **)t28);
    xsi_vlogfile_write(1, 0, 0, ng9, 2, t0, (char)118, t32, 1);
    xsi_set_current_line(64, ng0);
    t2 = (t0 + 3384);
    xsi_process_wait(t2, 250000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(67, ng0);
    t2 = (t0 + 5760);
    t3 = *((char **)t2);
    t4 = ((((char*)(t3))) + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 5784);
    t8 = *((char **)t7);
    t9 = ((((char*)(t8))) + 72U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng1)));
    xsi_vlog_generic_get_index_select_value(t6, 1, t5, t10, 2, t11, 32, 1);
    t12 = (t0 + 5808);
    t13 = *((char **)t12);
    t14 = ((((char*)(t13))) + 56U);
    t15 = *((char **)t14);
    t17 = (t0 + 5832);
    t18 = *((char **)t17);
    t19 = ((((char*)(t18))) + 72U);
    t20 = *((char **)t19);
    t21 = ((char*)((ng2)));
    xsi_vlog_generic_get_index_select_value(t16, 1, t15, t20, 2, t21, 32, 1);
    xsi_vlogfile_write(0, 0, 0, ng3, 3, t0, (char)118, t6, 1, (char)118, t16, 1);
    t22 = (t0 + 2248);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    xsi_vlogfile_write(0, 0, 0, ng4, 2, t0, (char)118, t24, 1);
    t25 = (t0 + 2408);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    xsi_vlogfile_write(0, 0, 0, ng5, 2, t0, (char)118, t27, 1);
    t28 = (t0 + 1368U);
    t29 = *((char **)t28);
    xsi_vlogfile_write(0, 0, 0, ng6, 2, t0, (char)118, t29, 1);
    t28 = (t0 + 1528U);
    t30 = *((char **)t28);
    xsi_vlogfile_write(0, 0, 0, ng7, 2, t0, (char)118, t30, 1);
    t28 = (t0 + 1048U);
    t31 = *((char **)t28);
    xsi_vlogfile_write(0, 0, 0, ng8, 2, t0, (char)118, t31, 1);
    t28 = (t0 + 1208U);
    t32 = *((char **)t28);
    xsi_vlogfile_write(1, 0, 0, ng9, 2, t0, (char)118, t32, 1);
    xsi_set_current_line(68, ng0);
    t2 = (t0 + 3384);
    xsi_process_wait(t2, 250000LL);
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(70, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(71, ng0);
    t2 = (t0 + 5856);
    t3 = *((char **)t2);
    t4 = ((((char*)(t3))) + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 5880);
    t8 = *((char **)t7);
    t9 = ((((char*)(t8))) + 72U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng1)));
    xsi_vlog_generic_get_index_select_value(t6, 1, t5, t10, 2, t11, 32, 1);
    t12 = (t0 + 5904);
    t13 = *((char **)t12);
    t14 = ((((char*)(t13))) + 56U);
    t15 = *((char **)t14);
    t17 = (t0 + 5928);
    t18 = *((char **)t17);
    t19 = ((((char*)(t18))) + 72U);
    t20 = *((char **)t19);
    t21 = ((char*)((ng2)));
    xsi_vlog_generic_get_index_select_value(t16, 1, t15, t20, 2, t21, 32, 1);
    xsi_vlogfile_write(0, 0, 0, ng3, 3, t0, (char)118, t6, 1, (char)118, t16, 1);
    t22 = (t0 + 2248);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    xsi_vlogfile_write(0, 0, 0, ng4, 2, t0, (char)118, t24, 1);
    t25 = (t0 + 2408);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    xsi_vlogfile_write(0, 0, 0, ng5, 2, t0, (char)118, t27, 1);
    t28 = (t0 + 1368U);
    t29 = *((char **)t28);
    xsi_vlogfile_write(0, 0, 0, ng6, 2, t0, (char)118, t29, 1);
    t28 = (t0 + 1528U);
    t30 = *((char **)t28);
    xsi_vlogfile_write(0, 0, 0, ng7, 2, t0, (char)118, t30, 1);
    t28 = (t0 + 1048U);
    t31 = *((char **)t28);
    xsi_vlogfile_write(0, 0, 0, ng8, 2, t0, (char)118, t31, 1);
    t28 = (t0 + 1208U);
    t32 = *((char **)t28);
    xsi_vlogfile_write(1, 0, 0, ng9, 2, t0, (char)118, t32, 1);
    xsi_set_current_line(72, ng0);
    t2 = (t0 + 3384);
    xsi_process_wait(t2, 250000LL);
    *((char **)t1) = &&LAB8;
    goto LAB1;

LAB8:    goto LAB1;

}


extern void work_m_00000000000857431462_0145035035_init()
{
	static char *pe[] = {(void *)Always_51_0,(void *)Initial_52_1};
	xsi_register_didat("work_m_00000000000857431462_0145035035", "isim/test_maquina_isim_beh.exe.sim/work/m_00000000000857431462_0145035035.didat");
	xsi_register_executes(pe);
}
