/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:29:05 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dT_RightKnee_src.h"

#ifdef _MSC_VER
  #define INLINE __forceinline /* use __forceinline (VC++ specific) */
#else
  #define INLINE inline        /* use standard inline */
#endif

/**
 * Copied from Wolfram Mathematica C Definitions file mdefs.hpp
 * Changed marcos to inline functions (Eric Cousineau)
 */
INLINE double Power(double x, double y) { return pow(x, y); }
INLINE double Sqrt(double x) { return sqrt(x); }

INLINE double Abs(double x) { return fabs(x); }

INLINE double Exp(double x) { return exp(x); }
INLINE double Log(double x) { return log(x); }

INLINE double Sin(double x) { return sin(x); }
INLINE double Cos(double x) { return cos(x); }
INLINE double Tan(double x) { return tan(x); }

INLINE double Csc(double x) { return 1.0/sin(x); }
INLINE double Sec(double x) { return 1.0/cos(x); }

INLINE double ArcSin(double x) { return asin(x); }
INLINE double ArcCos(double x) { return acos(x); }
//INLINE double ArcTan(double x) { return atan(x); }

/* update ArcTan function to use atan2 instead. */
INLINE double ArcTan(double x, double y) { return atan2(y,x); }

INLINE double Sinh(double x) { return sinh(x); }
INLINE double Cosh(double x) { return cosh(x); }
INLINE double Tanh(double x) { return tanh(x); }

#define E 2.71828182845904523536029
#define Pi 3.14159265358979323846264
#define Degree 0.01745329251994329576924

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t289;
  double t296;
  double t601;
  double t754;
  double t262;
  double t786;
  double t901;
  double t719;
  double t879;
  double t880;
  double t38;
  double t926;
  double t936;
  double t1123;
  double t1145;
  double t1147;
  double t1168;
  double t1198;
  double t1259;
  double t1267;
  double t30;
  double t1545;
  double t1544;
  double t1548;
  double t1554;
  double t1586;
  double t1634;
  double t1635;
  double t1362;
  double t1562;
  double t1665;
  double t1673;
  double t1723;
  double t1724;
  double t1740;
  double t1984;
  double t2023;
  double t2029;
  double t2069;
  double t2073;
  double t2118;
  double t2178;
  double t2188;
  double t2230;
  double t2248;
  double t2260;
  double t2327;
  double t2330;
  double t2516;
  double t2552;
  double t2553;
  double t2656;
  double t2680;
  double t2681;
  double t2684;
  double t2839;
  double t2843;
  double t2846;
  double t2860;
  double t2905;
  double t2908;
  double t2851;
  double t2912;
  double t2936;
  double t2953;
  double t2958;
  double t2965;
  double t2967;
  double t2975;
  double t2979;
  double t3078;
  double t3079;
  double t3084;
  double t3109;
  double t3113;
  double t3119;
  double t3128;
  double t3138;
  double t3149;
  double t3217;
  double t3229;
  double t3232;
  double t3234;
  double t3238;
  double t3248;
  double t3260;
  double t3269;
  double t3337;
  double t3340;
  double t3344;
  double t3355;
  double t3379;
  double t3387;
  double t3402;
  double t3414;
  double t3424;
  double t3458;
  double t3462;
  double t3489;
  double t3509;
  double t2722;
  double t2774;
  double t2775;
  double t3653;
  double t3654;
  double t3664;
  double t3715;
  double t3723;
  double t3724;
  double t3728;
  double t3791;
  double t3793;
  double t3824;
  double t3830;
  double t3837;
  double t3861;
  double t3892;
  double t3895;
  double t3896;
  double t3902;
  double t3925;
  double t3955;
  double t3901;
  double t3957;
  double t3961;
  double t3966;
  double t3975;
  double t3983;
  double t3985;
  double t3987;
  double t3999;
  double t4031;
  double t4032;
  double t4034;
  double t4046;
  double t4051;
  double t4060;
  double t4062;
  double t4110;
  double t4128;
  double t4132;
  double t4150;
  double t4152;
  double t4157;
  double t4162;
  double t4167;
  double t4168;
  double t898;
  double t1293;
  double t1338;
  double t1382;
  double t1396;
  double t1415;
  double t1688;
  double t1743;
  double t1797;
  double t1849;
  double t1861;
  double t1887;
  double t2306;
  double t2335;
  double t2340;
  double t2397;
  double t2403;
  double t2439;
  double t2515;
  double t2593;
  double t2595;
  double t4323;
  double t2952;
  double t2989;
  double t2992;
  double t3005;
  double t3009;
  double t3017;
  double t3088;
  double t3152;
  double t3156;
  double t3167;
  double t3176;
  double t3182;
  double t3243;
  double t3274;
  double t3288;
  double t3311;
  double t3313;
  double t3317;
  double t3464;
  double t3512;
  double t3516;
  double t3554;
  double t3557;
  double t3563;
  double t2792;
  double t2813;
  double t3633;
  double t3681;
  double t3685;
  double t3747;
  double t3752;
  double t3753;
  double t4482;
  double t4519;
  double t4523;
  double t4533;
  double t4010;
  double t4037;
  double t4040;
  double t4072;
  double t4080;
  double t4083;
  double t4544;
  double t4142;
  double t4171;
  double t4174;
  double t4185;
  double t4188;
  double t4192;
  double t4727;
  double t4733;
  double t4754;
  double t4755;
  double t4813;
  double t4814;
  double t4889;
  double t4903;
  double t4211;
  double t4233;
  double t4237;
  double t4771;
  double t4786;
  double t4790;
  double t4744;
  double t4746;
  double t4750;
  double t4817;
  double t4818;
  double t4819;
  double t4805;
  double t4807;
  double t4809;
  double t4861;
  double t4869;
  double t4881;
  double t4917;
  double t4918;
  double t4927;
  double t4939;
  double t4941;
  double t4947;
  double t4240;
  double t4253;
  double t4258;
  double t4759;
  double t4269;
  double t4270;
  double t4285;
  double t4299;
  double t4300;
  double t4308;
  double t4317;
  double t4338;
  double t4346;
  double t4354;
  double t5268;
  double t4758;
  double t4760;
  double t4364;
  double t4365;
  double t4371;
  double t4384;
  double t4389;
  double t4396;
  double t4398;
  double t4404;
  double t4409;
  double t5056;
  double t5070;
  double t5072;
  double t5079;
  double t5081;
  double t4416;
  double t4418;
  double t4419;
  double t5150;
  double t5153;
  double t5159;
  double t5172;
  double t5176;
  double t4432;
  double t4442;
  double t4449;
  double t5229;
  double t5233;
  double t5243;
  double t5246;
  double t5250;
  double t4474;
  double t4490;
  double t5292;
  double t5294;
  double t5300;
  double t5306;
  double t5314;
  double t4497;
  double t4499;
  double t5758;
  double t4505;
  double t4508;
  double t4509;
  double t5915;
  double t5924;
  double t5935;
  double t5939;
  double t5953;
  double t5954;
  double t5955;
  double t5964;
  double t5968;
  double t5970;
  double t5971;
  double t4543;
  double t4547;
  double t4560;
  double t4563;
  double t6024;
  double t4575;
  double t4577;
  double t4583;
  t289 = Cos(var1[3]);
  t296 = Cos(var1[4]);
  t601 = Cos(var1[5]);
  t754 = Sin(var1[13]);
  t262 = Cos(var1[13]);
  t786 = Sin(var1[5]);
  t901 = Cos(var1[15]);
  t719 = t262*t289*t296*t601;
  t879 = -1.*t289*t296*t754*t786;
  t880 = t719 + t879;
  t38 = Sin(var1[15]);
  t926 = Cos(var1[14]);
  t936 = Sin(var1[4]);
  t1123 = -1.*t926*t289*t936;
  t1145 = Sin(var1[14]);
  t1147 = t289*t296*t601*t754;
  t1168 = t262*t289*t296*t786;
  t1198 = t1147 + t1168;
  t1259 = t1145*t1198;
  t1267 = t1123 + t1259;
  t30 = Sin(var1[16]);
  t1545 = Sin(var1[3]);
  t1544 = t289*t601*t936;
  t1548 = t1545*t786;
  t1554 = t1544 + t1548;
  t1586 = t601*t1545;
  t1634 = -1.*t289*t936*t786;
  t1635 = t1586 + t1634;
  t1362 = Cos(var1[16]);
  t1562 = -1.*t754*t1554;
  t1665 = t262*t1635;
  t1673 = t1562 + t1665;
  t1723 = t262*t1554;
  t1724 = t754*t1635;
  t1740 = t1723 + t1724;
  t1984 = -1.*t289*t296*t1145;
  t2023 = t754*t1554;
  t2029 = -1.*t601*t1545;
  t2069 = t289*t936*t786;
  t2073 = t2029 + t2069;
  t2118 = t262*t2073;
  t2178 = t2023 + t2118;
  t2188 = t926*t2178;
  t2230 = t1984 + t2188;
  t2248 = -1.*t262*t2073;
  t2260 = t1562 + t2248;
  t2327 = -1.*t754*t2073;
  t2330 = t1723 + t2327;
  t2516 = t926*t289*t296;
  t2552 = t1145*t2178;
  t2553 = t2516 + t2552;
  t2656 = t901*t2330;
  t2680 = -1.*t38*t2553;
  t2681 = t2656 + t2680;
  t2684 = t30*t2681;
  t2839 = -1.*t601*t1545*t936;
  t2843 = t289*t786;
  t2846 = t2839 + t2843;
  t2860 = -1.*t289*t601;
  t2905 = -1.*t1545*t936*t786;
  t2908 = t2860 + t2905;
  t2851 = t262*t2846;
  t2912 = -1.*t754*t2908;
  t2936 = t2851 + t2912;
  t2953 = -1.*t926*t296*t1545;
  t2958 = t754*t2846;
  t2965 = t262*t2908;
  t2967 = t2958 + t2965;
  t2975 = t1145*t2967;
  t2979 = t2953 + t2975;
  t3078 = t262*t296*t601*t1545;
  t3079 = -1.*t296*t754*t1545*t786;
  t3084 = t3078 + t3079;
  t3109 = -1.*t926*t1545*t936;
  t3113 = t296*t601*t754*t1545;
  t3119 = t262*t296*t1545*t786;
  t3128 = t3113 + t3119;
  t3138 = t1145*t3128;
  t3149 = t3109 + t3138;
  t3217 = t601*t1545*t936;
  t3229 = -1.*t289*t786;
  t3232 = t3217 + t3229;
  t3234 = -1.*t754*t3232;
  t3238 = t3234 + t2965;
  t3248 = t262*t3232;
  t3260 = t754*t2908;
  t3269 = t3248 + t3260;
  t3337 = -1.*t296*t1145*t1545;
  t3340 = t754*t3232;
  t3344 = t289*t601;
  t3355 = t1545*t936*t786;
  t3379 = t3344 + t3355;
  t3387 = t262*t3379;
  t3402 = t3340 + t3387;
  t3414 = t926*t3402;
  t3424 = t3337 + t3414;
  t3458 = -1.*t262*t3379;
  t3462 = t3234 + t3458;
  t3489 = -1.*t754*t3379;
  t3509 = t3248 + t3489;
  t2722 = t38*t2330;
  t2774 = t901*t2553;
  t2775 = t2722 + t2774;
  t3653 = t926*t296*t1545;
  t3654 = t1145*t3402;
  t3664 = t3653 + t3654;
  t3715 = t901*t3509;
  t3723 = -1.*t38*t3664;
  t3724 = t3715 + t3723;
  t3728 = t30*t3724;
  t3791 = t1145*t936;
  t3793 = t296*t601*t754;
  t3824 = t262*t296*t786;
  t3830 = t3793 + t3824;
  t3837 = t926*t3830;
  t3861 = t3791 + t3837;
  t3892 = -1.*t296*t601*t754;
  t3895 = -1.*t262*t296*t786;
  t3896 = t3892 + t3895;
  t3902 = t262*t296*t601;
  t3925 = -1.*t296*t754*t786;
  t3955 = t3902 + t3925;
  t3901 = t38*t3896;
  t3957 = t901*t1145*t3955;
  t3961 = t3901 + t3957;
  t3966 = t30*t3961;
  t3975 = t901*t3896;
  t3983 = -1.*t1145*t38*t3955;
  t3985 = t3975 + t3983;
  t3987 = -1.*t1362*t3985;
  t3999 = t3966 + t3987;
  t4031 = -1.*t926*t936;
  t4032 = t1145*t3830;
  t4034 = t4031 + t4032;
  t4046 = t901*t3955;
  t4051 = -1.*t38*t4034;
  t4060 = t4046 + t4051;
  t4062 = t30*t4060;
  t4110 = -1.*t262*t601*t936;
  t4128 = t754*t936*t786;
  t4132 = t4110 + t4128;
  t4150 = -1.*t926*t296;
  t4152 = -1.*t601*t754*t936;
  t4157 = -1.*t262*t936*t786;
  t4162 = t4152 + t4157;
  t4167 = t1145*t4162;
  t4168 = t4150 + t4167;
  t898 = t38*t880;
  t1293 = t901*t1267;
  t1338 = t898 + t1293;
  t1382 = t901*t880;
  t1396 = -1.*t38*t1267;
  t1415 = t1382 + t1396;
  t1688 = t38*t1673;
  t1743 = t901*t1145*t1740;
  t1797 = t1688 + t1743;
  t1849 = t901*t1673;
  t1861 = -1.*t1145*t38*t1740;
  t1887 = t1849 + t1861;
  t2306 = t38*t2260;
  t2335 = t901*t1145*t2330;
  t2340 = t2306 + t2335;
  t2397 = t901*t2260;
  t2403 = -1.*t1145*t38*t2330;
  t2439 = t2397 + t2403;
  t2515 = -1.*t38*t2330;
  t2593 = -1.*t901*t2553;
  t2595 = t2515 + t2593;
  t4323 = t1362*t2681;
  t2952 = t38*t2936;
  t2989 = t901*t2979;
  t2992 = t2952 + t2989;
  t3005 = t901*t2936;
  t3009 = -1.*t38*t2979;
  t3017 = t3005 + t3009;
  t3088 = t38*t3084;
  t3152 = t901*t3149;
  t3156 = t3088 + t3152;
  t3167 = t901*t3084;
  t3176 = -1.*t38*t3149;
  t3182 = t3167 + t3176;
  t3243 = t38*t3238;
  t3274 = t901*t1145*t3269;
  t3288 = t3243 + t3274;
  t3311 = t901*t3238;
  t3313 = -1.*t1145*t38*t3269;
  t3317 = t3311 + t3313;
  t3464 = t38*t3462;
  t3512 = t901*t1145*t3509;
  t3516 = t3464 + t3512;
  t3554 = t901*t3462;
  t3557 = -1.*t1145*t38*t3509;
  t3563 = t3554 + t3557;
  t2792 = t1362*t2775;
  t2813 = t2792 + t2684;
  t3633 = -1.*t38*t3509;
  t3681 = -1.*t901*t3664;
  t3685 = t3633 + t3681;
  t3747 = t38*t3509;
  t3752 = t901*t3664;
  t3753 = t3747 + t3752;
  t4482 = t1362*t3724;
  t4519 = t1362*t3961;
  t4523 = t30*t3985;
  t4533 = t4519 + t4523;
  t4010 = -1.*t38*t3955;
  t4037 = -1.*t901*t4034;
  t4040 = t4010 + t4037;
  t4072 = t38*t3955;
  t4080 = t901*t4034;
  t4083 = t4072 + t4080;
  t4544 = t1362*t4060;
  t4142 = t38*t4132;
  t4171 = t901*t4168;
  t4174 = t4142 + t4171;
  t4185 = t901*t4132;
  t4188 = -1.*t38*t4168;
  t4192 = t4185 + t4188;
  t4727 = -1.*t262;
  t4733 = 1. + t4727;
  t4754 = -1.*t926;
  t4755 = 1. + t4754;
  t4813 = -1.*t901;
  t4814 = 1. + t4813;
  t4889 = -1.*t1362;
  t4903 = 1. + t4889;
  t4211 = t1362*t1338;
  t4233 = t30*t1415;
  t4237 = t4211 + t4233;
  t4771 = -0.135*t4733;
  t4786 = 0.07996*t754;
  t4790 = 0. + t4771 + t4786;
  t4744 = 0.07996*t4733;
  t4746 = 0.135*t754;
  t4750 = 0. + t4744 + t4746;
  t4817 = -0.01004*t4814;
  t4818 = 0.08055*t38;
  t4819 = 0. + t4817 + t4818;
  t4805 = -0.135*t4755;
  t4807 = 0.08055*t1145;
  t4809 = 0. + t4805 + t4807;
  t4861 = -0.08055*t4814;
  t4869 = -0.01004*t38;
  t4881 = 0. + t4861 + t4869;
  t4917 = -0.08055*t4903;
  t4918 = -0.13004*t30;
  t4927 = 0. + t4917 + t4918;
  t4939 = -0.13004*t4903;
  t4941 = 0.08055*t30;
  t4947 = 0. + t4939 + t4941;
  t4240 = t1362*t1797;
  t4253 = t30*t1887;
  t4258 = t4240 + t4253;
  t4759 = -0.135*t1145;
  t4269 = t901*t1362*t2230;
  t4270 = -1.*t38*t30*t2230;
  t4285 = t4269 + t4270;
  t4299 = t1362*t2340;
  t4300 = t30*t2439;
  t4308 = t4299 + t4300;
  t4317 = t30*t2595;
  t4338 = t4317 + t4323;
  t4346 = -1.*t30*t2775;
  t4354 = t4346 + t4323;
  t5268 = -1.*t30*t2681;
  t4758 = -0.08055*t4755;
  t4760 = 0. + t4758 + t4759;
  t4364 = t1362*t2992;
  t4365 = t30*t3017;
  t4371 = t4364 + t4365;
  t4384 = t1362*t3156;
  t4389 = t30*t3182;
  t4396 = t4384 + t4389;
  t4398 = t1362*t3288;
  t4404 = t30*t3317;
  t4409 = t4398 + t4404;
  t5056 = -0.135*t926;
  t5070 = -0.08055*t1145;
  t5072 = t5056 + t5070;
  t5079 = 0.08055*t926;
  t5081 = t5079 + t4759;
  t4416 = t901*t1362*t3424;
  t4418 = -1.*t38*t30*t3424;
  t4419 = t4416 + t4418;
  t5150 = 0.135*t262;
  t5153 = t5150 + t4786;
  t5159 = 0.07996*t262;
  t5172 = -0.135*t754;
  t5176 = t5159 + t5172;
  t4432 = t1362*t3516;
  t4442 = t30*t3563;
  t4449 = t4432 + t4442;
  t5229 = 0.08055*t901;
  t5233 = t5229 + t4869;
  t5243 = -0.01004*t901;
  t5246 = -0.08055*t38;
  t5250 = t5243 + t5246;
  t4474 = t30*t3685;
  t4490 = t4474 + t4482;
  t5292 = -0.13004*t1362;
  t5294 = -0.08055*t30;
  t5300 = t5292 + t5294;
  t5306 = 0.08055*t1362;
  t5314 = t5306 + t4918;
  t4497 = -1.*t30*t3753;
  t4499 = t4497 + t4482;
  t5758 = -1.*t30*t3724;
  t4505 = t901*t1362*t3861;
  t4508 = -1.*t38*t30*t3861;
  t4509 = t4505 + t4508;
  t5915 = t4819*t3896;
  t5924 = -0.1327*t926*t3955;
  t5935 = t4809*t3955;
  t5939 = t1145*t4881*t3955;
  t5953 = t4927*t3961;
  t5954 = t4947*t3985;
  t5955 = -1.*t30*t3961;
  t5964 = t1362*t3985;
  t5968 = t5955 + t5964;
  t5970 = -0.15304*t5968;
  t5971 = -0.04845*t4533;
  t4543 = t30*t4040;
  t4547 = t4543 + t4544;
  t4560 = -1.*t30*t4083;
  t4563 = t4560 + t4544;
  t6024 = -1.*t30*t4060;
  t4575 = t1362*t4174;
  t4577 = t30*t4192;
  t4583 = t4575 + t4577;
  p_output1[0]=(t2992*t30 - 1.*t1362*t3017)*var2[3] + (-1.*t1362*t1415 + t1338*t30)*var2[4] + (-1.*t1362*t1887 + t1797*t30)*var2[5] + (-1.*t1362*t2439 + t2340*t30)*var2[13] + (t1362*t2230*t38 + t2230*t30*t901)*var2[14] + (-1.*t1362*t2595 + t2684)*var2[15] + t2813*var2[16];
  p_output1[1]=(-1.*t1362*t2681 + t2775*t30)*var2[3] + (t30*t3156 - 1.*t1362*t3182)*var2[4] + (t30*t3288 - 1.*t1362*t3317)*var2[5] + (t30*t3516 - 1.*t1362*t3563)*var2[13] + (t1362*t3424*t38 + t30*t3424*t901)*var2[14] + (-1.*t1362*t3685 + t3728)*var2[15] + (t3728 + t1362*t3753)*var2[16];
  p_output1[2]=(t30*t4174 - 1.*t1362*t4192)*var2[4] + t3999*var2[5] + t3999*var2[13] + (t1362*t38*t3861 + t30*t3861*t901)*var2[14] + (-1.*t1362*t4040 + t4062)*var2[15] + (t4062 + t1362*t4083)*var2[16];
  p_output1[3]=0;
  p_output1[4]=t4371*var2[3] + t4237*var2[4] + t4258*var2[5] + t4308*var2[13] + t4285*var2[14] + t4338*var2[15] + t4354*var2[16];
  p_output1[5]=t2813*var2[3] + t4396*var2[4] + t4409*var2[5] + t4449*var2[13] + t4419*var2[14] + t4490*var2[15] + t4499*var2[16];
  p_output1[6]=t4583*var2[4] + t4533*var2[5] + t4533*var2[13] + t4509*var2[14] + t4547*var2[15] + t4563*var2[16];
  p_output1[7]=0;
  p_output1[8]=(t3337 - 1.*t2967*t926)*var2[3] + (-1.*t1198*t926 - 1.*t1145*t289*t936)*var2[4] - 1.*t1740*t926*var2[5] - 1.*t2330*t926*var2[13] + t2553*var2[14];
  p_output1[9]=(t1145*t289*t296 - 1.*t2178*t926)*var2[3] + (-1.*t3128*t926 - 1.*t1145*t1545*t936)*var2[4] - 1.*t3269*t926*var2[5] - 1.*t3509*t926*var2[13] + t3664*var2[14];
  p_output1[10]=(-1.*t1145*t296 - 1.*t4162*t926)*var2[4] - 1.*t3955*t926*var2[5] - 1.*t3955*t926*var2[13] + t4034*var2[14];
  p_output1[11]=0;
  p_output1[12]=var2[0] + (-0.15304*(-1.*t2992*t30 + t1362*t3017) - 0.04845*t4371 + t2846*t4750 - 1.*t1545*t296*t4760 + t2908*t4790 + t2967*t4809 + t2936*t4819 + t2979*t4881 + t2992*t4927 + t3017*t4947 - 0.1327*(t1145*t1545*t296 + t2967*t926))*var2[3] + (-0.15304*(t1362*t1415 - 1.*t1338*t30) - 0.04845*t4237 + t1198*t4809 + t1267*t4881 + t1338*t4927 + t1415*t4947 + t289*t296*t4750*t601 + t289*t296*t4790*t786 + t4819*t880 - 1.*t289*t4760*t936 - 0.1327*(t1198*t926 + t1145*t289*t936))*var2[4] + (-0.15304*(t1362*t1887 - 1.*t1797*t30) - 0.04845*t4258 + t1635*t4750 + t1554*t4790 + t1740*t4809 + t1673*t4819 + t1145*t1740*t4881 + t1797*t4927 + t1887*t4947 - 0.1327*t1740*t926)*var2[5] + (-0.15304*(t1362*t2439 - 1.*t2340*t30) - 0.04845*t4308 + t2330*t4809 + t2260*t4819 + t1145*t2330*t4881 + t2340*t4927 + t2439*t4947 + t1554*t5153 + t2073*t5176 - 0.1327*t2330*t926)*var2[13] + (-0.04845*t4285 + t2230*t4881 - 1.*t2230*t38*t4947 + t289*t296*t5072 + t2178*t5081 + t2230*t4927*t901 - 0.15304*(-1.*t1362*t2230*t38 - 1.*t2230*t30*t901) - 0.1327*(-1.*t1145*t2178 - 1.*t289*t296*t926))*var2[14] + (-0.04845*t4338 + t2681*t4927 + t2595*t4947 + t2330*t5233 + t2553*t5250 - 0.15304*(t1362*t2595 + t5268))*var2[15] + (-0.04845*t4354 - 0.15304*(-1.*t1362*t2775 + t5268) + t2775*t5300 + t2681*t5314)*var2[16];
  p_output1[13]=var2[1] + (-0.1327*t2230 - 0.04845*t2813 - 0.15304*t4354 + t1554*t4750 + t289*t296*t4760 + t2073*t4790 + t2178*t4809 + t2330*t4819 + t2553*t4881 + t2775*t4927 + t2681*t4947)*var2[3] + (-0.15304*(-1.*t30*t3156 + t1362*t3182) - 0.04845*t4396 + t3128*t4809 + t3084*t4819 + t3149*t4881 + t3156*t4927 + t3182*t4947 + t1545*t296*t4750*t601 + t1545*t296*t4790*t786 - 1.*t1545*t4760*t936 - 0.1327*(t3128*t926 + t1145*t1545*t936))*var2[4] + (-0.15304*(-1.*t30*t3288 + t1362*t3317) - 0.04845*t4409 + t2908*t4750 + t3232*t4790 + t3269*t4809 + t3238*t4819 + t1145*t3269*t4881 + t3288*t4927 + t3317*t4947 - 0.1327*t3269*t926)*var2[5] + (-0.15304*(-1.*t30*t3516 + t1362*t3563) - 0.04845*t4449 + t3509*t4809 + t3462*t4819 + t1145*t3509*t4881 + t3516*t4927 + t3563*t4947 + t3232*t5153 + t3379*t5176 - 0.1327*t3509*t926)*var2[13] + (-0.1327*(t2953 - 1.*t1145*t3402) - 0.04845*t4419 + t3424*t4881 - 1.*t3424*t38*t4947 + t1545*t296*t5072 + t3402*t5081 + t3424*t4927*t901 - 0.15304*(-1.*t1362*t3424*t38 - 1.*t30*t3424*t901))*var2[14] + (-0.04845*t4490 + t3724*t4927 + t3685*t4947 + t3509*t5233 + t3664*t5250 - 0.15304*(t1362*t3685 + t5758))*var2[15] + (-0.04845*t4499 + t3753*t5300 + t3724*t5314 - 0.15304*(-1.*t1362*t3753 + t5758))*var2[16];
  p_output1[14]=var2[2] + (-0.15304*(-1.*t30*t4174 + t1362*t4192) - 0.04845*t4583 - 1.*t296*t4760 + t4162*t4809 + t4132*t4819 + t4168*t4881 + t4174*t4927 + t4192*t4947 - 0.1327*(t1145*t296 + t4162*t926) - 1.*t4750*t601*t936 - 1.*t4790*t786*t936)*var2[4] + (t5915 + t5924 + t5935 + t5939 + t5953 + t5954 + t5970 + t5971 + t296*t4790*t601 - 1.*t296*t4750*t786)*var2[5] + (t5915 + t5924 + t5935 + t5939 + t5953 + t5954 + t5970 + t5971 + t296*t5153*t601 + t296*t5176*t786)*var2[13] + (-0.04845*t4509 + t3861*t4881 - 1.*t38*t3861*t4947 + t3830*t5081 + t3861*t4927*t901 - 0.15304*(-1.*t1362*t38*t3861 - 1.*t30*t3861*t901) - 1.*t5072*t936 - 0.1327*(-1.*t1145*t3830 + t926*t936))*var2[14] + (-0.04845*t4547 + t4060*t4927 + t4040*t4947 + t3955*t5233 + t4034*t5250 - 0.15304*(t1362*t4040 + t6024))*var2[15] + (-0.04845*t4563 + t4083*t5300 + t4060*t5314 - 0.15304*(-1.*t1362*t4083 + t6024))*var2[16];
  p_output1[15]=0;
}



void dT_RightKnee_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
