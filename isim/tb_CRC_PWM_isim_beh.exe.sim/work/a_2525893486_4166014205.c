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
static const char *ng0 = "G:/Projekty/VSLI/lab2/PWM_CRC/PWM.vhd";
extern char *IEEE_P_3620187407;
extern char *IEEE_P_2592010699;

unsigned char ieee_p_3620187407_sub_1742983514_3965413181(char *, char *, char *, char *, char *);
char *ieee_p_3620187407_sub_674691591_3965413181(char *, char *, char *, char *, unsigned char );
char *ieee_p_3620187407_sub_767668596_3965413181(char *, char *, char *, char *, char *, char *);


static void work_a_2525893486_4166014205_p_0(char *t0)
{
    char t15[16];
    char t18[16];
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    char *t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    int t16;
    unsigned int t17;
    char *t19;
    char *t20;
    unsigned char t21;
    char *t22;
    unsigned int t23;
    unsigned char t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;

LAB0:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 1192U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)3);
    if (t5 == 1)
        goto LAB5;

LAB6:    t2 = (t0 + 1992U);
    t6 = *((char **)t2);
    t7 = *((unsigned char *)t6);
    t8 = (t7 == (unsigned char)2);
    t1 = t8;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:    t2 = (t0 + 992U);
    t4 = xsi_signal_has_event(t2);
    if (t4 == 1)
        goto LAB10;

LAB11:    t1 = (unsigned char)0;

LAB12:    if (t1 != 0)
        goto LAB8;

LAB9:
LAB3:    t2 = (t0 + 5176);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 7992);
    t10 = (t0 + 5304);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t2, 8U);
    xsi_driver_first_trans_fast(t10);
    xsi_set_current_line(32, ng0);
    t2 = (t0 + 8000);
    t6 = (t0 + 5368);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t2, 8U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(33, ng0);
    t2 = (t0 + 5432);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    goto LAB3;

LAB5:    t1 = (unsigned char)1;
    goto LAB7;

LAB8:    xsi_set_current_line(36, ng0);
    t3 = (t0 + 1832U);
    t9 = *((char **)t3);
    t3 = (t0 + 7880U);
    t10 = (t0 + 8008);
    t12 = (t15 + 0U);
    t13 = (t12 + 0U);
    *((int *)t13) = 0;
    t13 = (t12 + 4U);
    *((int *)t13) = 1;
    t13 = (t12 + 8U);
    *((int *)t13) = 1;
    t16 = (1 - 0);
    t17 = (t16 * 1);
    t17 = (t17 + 1);
    t13 = (t12 + 12U);
    *((unsigned int *)t13) = t17;
    t8 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t9, t3, t10, t15);
    if (t8 != 0)
        goto LAB13;

LAB15:    t2 = (t0 + 1832U);
    t3 = *((char **)t2);
    t2 = (t0 + 7880U);
    t6 = (t0 + 8010);
    t10 = (t15 + 0U);
    t11 = (t10 + 0U);
    *((int *)t11) = 0;
    t11 = (t10 + 4U);
    *((int *)t11) = 1;
    t11 = (t10 + 8U);
    *((int *)t11) = 1;
    t16 = (1 - 0);
    t17 = (t16 * 1);
    t17 = (t17 + 1);
    t11 = (t10 + 12U);
    *((unsigned int *)t11) = t17;
    t1 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t3, t2, t6, t15);
    if (t1 != 0)
        goto LAB18;

LAB19:    t2 = (t0 + 1832U);
    t3 = *((char **)t2);
    t2 = (t0 + 7880U);
    t6 = (t0 + 8012);
    t10 = (t15 + 0U);
    t11 = (t10 + 0U);
    *((int *)t11) = 0;
    t11 = (t10 + 4U);
    *((int *)t11) = 1;
    t11 = (t10 + 8U);
    *((int *)t11) = 1;
    t16 = (1 - 0);
    t17 = (t16 * 1);
    t17 = (t17 + 1);
    t11 = (t10 + 12U);
    *((unsigned int *)t11) = t17;
    t1 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t3, t2, t6, t15);
    if (t1 != 0)
        goto LAB22;

LAB23:
LAB14:    goto LAB3;

LAB10:    t3 = (t0 + 1032U);
    t6 = *((char **)t3);
    t5 = *((unsigned char *)t6);
    t7 = (t5 == (unsigned char)3);
    t1 = t7;
    goto LAB12;

LAB13:    xsi_set_current_line(37, ng0);
    t13 = (t0 + 1352U);
    t14 = *((char **)t13);
    t13 = (t0 + 7848U);
    t19 = (t0 + 2152U);
    t20 = *((char **)t19);
    t21 = *((unsigned char *)t20);
    t19 = ieee_p_3620187407_sub_674691591_3965413181(IEEE_P_3620187407, t18, t14, t13, t21);
    t22 = (t18 + 12U);
    t17 = *((unsigned int *)t22);
    t23 = (1U * t17);
    t24 = (8U != t23);
    if (t24 == 1)
        goto LAB16;

LAB17:    t25 = (t0 + 5304);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    memcpy(t29, t19, 8U);
    xsi_driver_first_trans_fast(t25);
    goto LAB14;

LAB16:    xsi_size_not_matching(8U, t23, 0);
    goto LAB17;

LAB18:    xsi_set_current_line(39, ng0);
    t11 = (t0 + 1352U);
    t12 = *((char **)t11);
    t11 = (t0 + 7848U);
    t13 = (t0 + 2152U);
    t14 = *((char **)t13);
    t4 = *((unsigned char *)t14);
    t13 = ieee_p_3620187407_sub_674691591_3965413181(IEEE_P_3620187407, t18, t12, t11, t4);
    t19 = (t18 + 12U);
    t17 = *((unsigned int *)t19);
    t23 = (1U * t17);
    t5 = (8U != t23);
    if (t5 == 1)
        goto LAB20;

LAB21:    t20 = (t0 + 5368);
    t22 = (t20 + 56U);
    t25 = *((char **)t22);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    memcpy(t27, t13, 8U);
    xsi_driver_first_trans_fast(t20);
    goto LAB14;

LAB20:    xsi_size_not_matching(8U, t23, 0);
    goto LAB21;

LAB22:    xsi_set_current_line(41, ng0);
    t11 = (t0 + 5432);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t19 = *((char **)t14);
    *((unsigned char *)t19) = (unsigned char)3;
    xsi_driver_first_trans_fast(t11);
    goto LAB14;

}

static void work_a_2525893486_4166014205_p_1(char *t0)
{
    char t23[16];
    char t24[16];
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    char *t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned char t15;
    unsigned char t16;
    unsigned char t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    int t25;
    unsigned int t26;
    unsigned int t27;

LAB0:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 2632U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)2);
    if (t5 == 1)
        goto LAB5;

LAB6:    t2 = (t0 + 1192U);
    t6 = *((char **)t2);
    t7 = *((unsigned char *)t6);
    t8 = (t7 == (unsigned char)3);
    t1 = t8;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:    t2 = (t0 + 2632U);
    t3 = *((char **)t2);
    t5 = *((unsigned char *)t3);
    t7 = (t5 == (unsigned char)3);
    if (t7 == 1)
        goto LAB13;

LAB14:    t4 = (unsigned char)0;

LAB15:    if (t4 == 1)
        goto LAB10;

LAB11:    t1 = (unsigned char)0;

LAB12:    if (t1 != 0)
        goto LAB8;

LAB9:
LAB3:    t2 = (t0 + 5192);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 8014);
    t10 = (t0 + 5496);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t2, 8U);
    xsi_driver_first_trans_fast(t10);
    goto LAB3;

LAB5:    t1 = (unsigned char)1;
    goto LAB7;

LAB8:    xsi_set_current_line(52, ng0);
    t6 = (t0 + 2792U);
    t10 = *((char **)t6);
    t6 = (t0 + 7928U);
    t11 = (t0 + 2312U);
    t12 = *((char **)t11);
    t11 = (t0 + 7896U);
    t17 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t10, t6, t12, t11);
    if (t17 != 0)
        goto LAB16;

LAB18:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 2792U);
    t3 = *((char **)t2);
    t2 = (t0 + 7928U);
    t6 = (t0 + 8030);
    t10 = (t24 + 0U);
    t11 = (t10 + 0U);
    *((int *)t11) = 0;
    t11 = (t10 + 4U);
    *((int *)t11) = 1;
    t11 = (t10 + 8U);
    *((int *)t11) = 1;
    t25 = (1 - 0);
    t26 = (t25 * 1);
    t26 = (t26 + 1);
    t11 = (t10 + 12U);
    *((unsigned int *)t11) = t26;
    t11 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t23, t3, t2, t6, t24);
    t12 = (t23 + 12U);
    t26 = *((unsigned int *)t12);
    t27 = (1U * t26);
    t1 = (8U != t27);
    if (t1 == 1)
        goto LAB19;

LAB20:    t13 = (t0 + 5496);
    t14 = (t13 + 56U);
    t18 = *((char **)t14);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t11, 8U);
    xsi_driver_first_trans_fast(t13);

LAB17:    goto LAB3;

LAB10:    t6 = (t0 + 1032U);
    t9 = *((char **)t6);
    t15 = *((unsigned char *)t9);
    t16 = (t15 == (unsigned char)3);
    t1 = t16;
    goto LAB12;

LAB13:    t2 = (t0 + 992U);
    t8 = xsi_signal_has_event(t2);
    t4 = t8;
    goto LAB15;

LAB16:    xsi_set_current_line(53, ng0);
    t13 = (t0 + 8022);
    t18 = (t0 + 5496);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memcpy(t22, t13, 8U);
    xsi_driver_first_trans_fast(t18);
    goto LAB17;

LAB19:    xsi_size_not_matching(8U, t27, 0);
    goto LAB20;

}

static void work_a_2525893486_4166014205_p_2(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned char t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(63, ng0);
    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB8;

LAB9:
LAB3:    t1 = (t0 + 5208);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(64, ng0);
    t1 = (t0 + 2792U);
    t5 = *((char **)t1);
    t1 = (t0 + 7928U);
    t6 = (t0 + 2472U);
    t7 = *((char **)t6);
    t6 = (t0 + 7912U);
    t8 = ieee_p_3620187407_sub_1742983514_3965413181(IEEE_P_3620187407, t5, t1, t7, t6);
    if (t8 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(67, ng0);
    t1 = (t0 + 5560);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);

LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(65, ng0);
    t9 = (t0 + 5560);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t9);
    goto LAB6;

LAB8:    xsi_set_current_line(70, ng0);
    t1 = (t0 + 5560);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB3;

}

static void work_a_2525893486_4166014205_p_3(char *t0)
{
    char t11[16];
    char t22[16];
    char t23[16];
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    int t14;
    unsigned int t15;
    unsigned char t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    int t24;
    char *t25;
    char *t26;
    char *t27;

LAB0:    xsi_set_current_line(77, ng0);
    t2 = (t0 + 992U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 5224);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(78, ng0);
    t4 = (t0 + 1832U);
    t8 = *((char **)t4);
    t4 = (t0 + 7880U);
    t9 = (t0 + 8032);
    t12 = (t11 + 0U);
    t13 = (t12 + 0U);
    *((int *)t13) = 0;
    t13 = (t12 + 4U);
    *((int *)t13) = 1;
    t13 = (t12 + 8U);
    *((int *)t13) = 1;
    t14 = (1 - 0);
    t15 = (t14 * 1);
    t15 = (t15 + 1);
    t13 = (t12 + 12U);
    *((unsigned int *)t13) = t15;
    t16 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t8, t4, t9, t11);
    if (t16 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 1832U);
    t4 = *((char **)t2);
    t2 = (t0 + 7880U);
    t5 = (t0 + 8034);
    t9 = (t11 + 0U);
    t10 = (t9 + 0U);
    *((int *)t10) = 0;
    t10 = (t9 + 4U);
    *((int *)t10) = 1;
    t10 = (t9 + 8U);
    *((int *)t10) = 1;
    t14 = (1 - 0);
    t15 = (t14 * 1);
    t15 = (t15 + 1);
    t10 = (t9 + 12U);
    *((unsigned int *)t10) = t15;
    t1 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t4, t2, t5, t11);
    if (t1 != 0)
        goto LAB11;

LAB12:    t2 = (t0 + 1832U);
    t4 = *((char **)t2);
    t2 = (t0 + 7880U);
    t5 = (t0 + 8036);
    t9 = (t11 + 0U);
    t10 = (t9 + 0U);
    *((int *)t10) = 0;
    t10 = (t9 + 4U);
    *((int *)t10) = 1;
    t10 = (t9 + 8U);
    *((int *)t10) = 1;
    t14 = (1 - 0);
    t15 = (t14 * 1);
    t15 = (t15 + 1);
    t10 = (t9 + 12U);
    *((unsigned int *)t10) = t15;
    t1 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t4, t2, t5, t11);
    if (t1 != 0)
        goto LAB13;

LAB14:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 8045);
    t5 = (t0 + 5624);
    t8 = (t5 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t12 = *((char **)t10);
    memcpy(t12, t2, 8U);
    xsi_driver_first_trans_fast_port(t5);

LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 1032U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(79, ng0);
    t13 = (t0 + 2312U);
    t17 = *((char **)t13);
    t13 = (t0 + 5624);
    t18 = (t13 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t17, 8U);
    xsi_driver_first_trans_fast_port(t13);
    goto LAB9;

LAB11:    xsi_set_current_line(81, ng0);
    t10 = (t0 + 2472U);
    t12 = *((char **)t10);
    t10 = (t0 + 5624);
    t13 = (t10 + 56U);
    t17 = *((char **)t13);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t12, 8U);
    xsi_driver_first_trans_fast_port(t10);
    goto LAB9;

LAB13:    xsi_set_current_line(83, ng0);
    t10 = (t0 + 8038);
    t13 = (t0 + 2632U);
    t17 = *((char **)t13);
    t3 = *((unsigned char *)t17);
    t18 = ((IEEE_P_2592010699) + 4024);
    t19 = (t23 + 0U);
    t20 = (t19 + 0U);
    *((int *)t20) = 0;
    t20 = (t19 + 4U);
    *((int *)t20) = 6;
    t20 = (t19 + 8U);
    *((int *)t20) = 1;
    t24 = (6 - 0);
    t15 = (t24 * 1);
    t15 = (t15 + 1);
    t20 = (t19 + 12U);
    *((unsigned int *)t20) = t15;
    t13 = xsi_base_array_concat(t13, t22, t18, (char)97, t10, t23, (char)99, t3, (char)101);
    t15 = (7U + 1U);
    t6 = (8U != t15);
    if (t6 == 1)
        goto LAB15;

LAB16:    t20 = (t0 + 5624);
    t21 = (t20 + 56U);
    t25 = *((char **)t21);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    memcpy(t27, t13, 8U);
    xsi_driver_first_trans_fast_port(t20);
    goto LAB9;

LAB15:    xsi_size_not_matching(8U, t15, 0);
    goto LAB16;

}


extern void work_a_2525893486_4166014205_init()
{
	static char *pe[] = {(void *)work_a_2525893486_4166014205_p_0,(void *)work_a_2525893486_4166014205_p_1,(void *)work_a_2525893486_4166014205_p_2,(void *)work_a_2525893486_4166014205_p_3};
	xsi_register_didat("work_a_2525893486_4166014205", "isim/tb_CRC_PWM_isim_beh.exe.sim/work/a_2525893486_4166014205.didat");
	xsi_register_executes(pe);
}
