/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:18:42 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dJp_LeftRotationJoint_src.h"

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
  double t2541;
  double t101;
  double t296;
  double t2034;
  double t2587;
  double t3254;
  double t3557;
  double t4051;
  double t4052;
  double t4061;
  double t2348;
  double t2983;
  double t3250;
  double t4142;
  double t4144;
  double t4148;
  double t4140;
  double t4169;
  double t4202;
  double t4206;
  double t3813;
  double t4193;
  double t4198;
  double t4200;
  double t4122;
  double t4251;
  double t4252;
  double t4152;
  double t4153;
  double t4164;
  double t4177;
  double t4180;
  double t4207;
  double t4209;
  double t4211;
  double t4265;
  double t4221;
  double t4230;
  double t4305;
  double t4308;
  double t4313;
  double t4332;
  double t4443;
  double t4447;
  double t4448;
  double t4495;
  double t4499;
  double t4502;
  double t4509;
  double t4511;
  double t4512;
  double t4327;
  double t4334;
  double t4530;
  double t4531;
  double t4532;
  double t4570;
  double t4572;
  double t4573;
  double t4581;
  double t4586;
  double t4588;
  double t3293;
  double t3815;
  double t4080;
  double t4082;
  double t4090;
  double t4609;
  double t4610;
  double t4611;
  double t4575;
  double t4628;
  double t4633;
  double t4655;
  double t4656;
  double t4658;
  double t4460;
  double t4469;
  double t4475;
  double t4407;
  double t4420;
  double t4425;
  double t4455;
  double t4456;
  double t4703;
  double t4705;
  double t4707;
  double t4549;
  double t4651;
  double t4652;
  double t4653;
  double t4736;
  double t4744;
  double t4746;
  double t4748;
  double t4751;
  double t4754;
  double t4757;
  double t4663;
  double t4664;
  double t4665;
  double t4266;
  double t4279;
  double t4280;
  double t4281;
  double t4296;
  double t4297;
  double t4317;
  double t4348;
  double t4350;
  double t4352;
  double t4354;
  double t4367;
  double t4373;
  double t4376;
  double t4386;
  double t4387;
  double t4401;
  double t4534;
  double t4804;
  double t4808;
  double t4813;
  double t4539;
  double t4853;
  double t4860;
  double t4861;
  double t4852;
  double t4863;
  double t4864;
  double t4868;
  double t4649;
  double t4650;
  double t4654;
  double t4659;
  double t4660;
  double t4669;
  double t4670;
  double t4671;
  double t4672;
  double t4674;
  double t4675;
  double t4891;
  double t4893;
  double t4894;
  double t4687;
  double t4925;
  double t4926;
  double t4927;
  double t4690;
  double t4963;
  double t4964;
  double t4965;
  double t4954;
  double t4957;
  double t4958;
  double t4961;
  double t4967;
  double t4968;
  double t4969;
  double t4988;
  double t4990;
  double t4991;
  double t5012;
  double t5013;
  double t5014;
  double t4730;
  double t4731;
  double t4758;
  double t4505;
  double t4513;
  double t4517;
  double t4519;
  double t4524;
  double t4525;
  double t4533;
  double t4579;
  double t4220;
  double t4239;
  double t4241;
  double t4246;
  double t4249;
  double t4255;
  double t4256;
  double t4258;
  double t4263;
  double t4843;
  double t4851;
  double t4869;
  double t5075;
  double t5076;
  double t5079;
  double t5081;
  double t5083;
  double t4678;
  double t4679;
  double t4680;
  double t4681;
  double t4568;
  double t4574;
  double t4580;
  double t4593;
  double t4597;
  double t4601;
  double t4602;
  double t5106;
  double t5107;
  double t5108;
  double t4980;
  double t4982;
  double t4983;
  double t4984;
  double t4986;
  double t4987;
  double t4993;
  double t5124;
  double t5125;
  double t5136;
  double t5138;
  double t5139;
  double t4949;
  double t4950;
  double t4971;
  double t4769;
  double t4770;
  double t4771;
  double t5044;
  double t5045;
  double t5046;
  double t5047;
  double t5049;
  double t5051;
  double t5053;
  double t5058;
  double t5059;
  double t4619;
  double t4620;
  double t3857;
  double t4109;
  double t4112;
  double t4134;
  double t4136;
  double t4150;
  double t4183;
  double t4188;
  double t4189;
  double t4872;
  double t4873;
  double t4875;
  double t5073;
  double t5080;
  double t5084;
  double t5085;
  double t5086;
  double t5087;
  double t5088;
  double t5089;
  double t5092;
  double t5153;
  double t5154;
  double t5156;
  double t5189;
  double t5193;
  double t4608;
  double t4614;
  double t4627;
  double t4636;
  double t4637;
  double t4638;
  double t4640;
  double t5209;
  double t5210;
  double t5132;
  double t5130;
  double t5134;
  double t5141;
  double t5142;
  double t5144;
  double t5145;
  double t5146;
  double t4973;
  double t4974;
  double t4975;
  double t5061;
  double t5062;
  double t5064;
  double t5066;
  double t5170;
  double t5173;
  double t5175;
  double t5176;
  double t4774;
  double t4775;
  double t4776;
  double t4778;
  double t4780;
  double t4787;
  double t4788;
  double t4789;
  double t4430;
  double t4457;
  double t4476;
  double t4477;
  double t4481;
  double t4483;
  double t4490;
  double t4493;
  double t4717;
  double t4719;
  double t5110;
  double t5112;
  double t5114;
  double t5116;
  double t5212;
  double t5213;
  double t5214;
  double t5215;
  double t4890;
  double t4895;
  double t4897;
  double t4898;
  double t4899;
  double t4900;
  double t4901;
  double t4902;
  double t4903;
  double t4908;
  double t5233;
  double t5234;
  double t5235;
  double t5252;
  double t5253;
  double t4699;
  double t4708;
  double t4709;
  double t4712;
  double t4713;
  double t4715;
  double t4720;
  double t4721;
  double t5276;
  double t5277;
  double t5278;
  double t4999;
  double t5003;
  double t5011;
  double t5016;
  double t5017;
  double t5018;
  double t5020;
  double t5021;
  double t5022;
  double t5025;
  double t5027;
  double t5028;
  double t5029;
  t2541 = Cos(var1[3]);
  t101 = Cos(var1[5]);
  t296 = Sin(var1[3]);
  t2034 = Sin(var1[4]);
  t2587 = Sin(var1[5]);
  t3254 = Cos(var1[6]);
  t3557 = Sin(var1[6]);
  t4051 = -1.*t2541*t101;
  t4052 = -1.*t296*t2034*t2587;
  t4061 = t4051 + t4052;
  t2348 = -1.*t101*t296*t2034;
  t2983 = t2541*t2587;
  t3250 = t2348 + t2983;
  t4142 = t3254*t3250;
  t4144 = -1.*t4061*t3557;
  t4148 = t4142 + t4144;
  t4140 = Cos(var1[7]);
  t4169 = Sin(var1[7]);
  t4202 = -1.*t3254;
  t4206 = 1. + t4202;
  t3813 = 0.07996*t3557;
  t4193 = t2541*t101;
  t4198 = t296*t2034*t2587;
  t4200 = t4193 + t4198;
  t4122 = -1.*t3250*t3557;
  t4251 = t4200*t3557;
  t4252 = t4142 + t4251;
  t4152 = -1.*t4140;
  t4153 = 1. + t4152;
  t4164 = 0.135*t4153;
  t4177 = 0.08055*t4169;
  t4180 = 0. + t4164 + t4177;
  t4207 = 0.07996*t4206;
  t4209 = -0.135*t3557;
  t4211 = 0. + t4207 + t4209;
  t4265 = Cos(var1[4]);
  t4221 = 0.135*t4206;
  t4230 = 0. + t4221 + t3813;
  t4305 = -1.*t4265*t3254*t296*t2587;
  t4308 = -1.*t4265*t101*t296*t3557;
  t4313 = t4305 + t4308;
  t4332 = 0.135*t4169;
  t4443 = t3254*t4061;
  t4447 = t3250*t3557;
  t4448 = t4443 + t4447;
  t4495 = -1.*t2541*t101*t2034;
  t4499 = -1.*t296*t2587;
  t4502 = t4495 + t4499;
  t4509 = t101*t296;
  t4511 = -1.*t2541*t2034*t2587;
  t4512 = t4509 + t4511;
  t4327 = -0.08055*t4153;
  t4334 = 0. + t4327 + t4332;
  t4530 = t3254*t4512;
  t4531 = t4502*t3557;
  t4532 = t4530 + t4531;
  t4570 = t2541*t101*t2034;
  t4572 = t296*t2587;
  t4573 = t4570 + t4572;
  t4581 = t3254*t4573;
  t4586 = t4512*t3557;
  t4588 = t4581 + t4586;
  t3293 = -0.135*t3254;
  t3815 = t3293 + t3813;
  t4080 = 0.07996*t3254;
  t4082 = 0.135*t3557;
  t4090 = t4080 + t4082;
  t4609 = -1.*t101*t296;
  t4610 = t2541*t2034*t2587;
  t4611 = t4609 + t4610;
  t4575 = -1.*t4573*t3557;
  t4628 = -1.*t4611*t3557;
  t4633 = t4581 + t4628;
  t4655 = t2541*t4265*t3254*t2587;
  t4656 = t2541*t4265*t101*t3557;
  t4658 = t4655 + t4656;
  t4460 = t4140*t4448;
  t4469 = t4265*t296*t4169;
  t4475 = t4460 + t4469;
  t4407 = 0.135*t4140;
  t4420 = -0.08055*t4169;
  t4425 = t4407 + t4420;
  t4455 = 0.08055*t4140;
  t4456 = t4455 + t4332;
  t4703 = t3254*t4611;
  t4705 = t4573*t3557;
  t4707 = t4703 + t4705;
  t4549 = -1.*t2541*t4265*t4140;
  t4651 = t2541*t4265*t101*t3254;
  t4652 = -1.*t2541*t4265*t2587*t3557;
  t4653 = t4651 + t4652;
  t4736 = -1.*t2541*t4265*t3254*t2587;
  t4744 = -1.*t2541*t4265*t101*t3557;
  t4746 = t4736 + t4744;
  t4748 = -0.01004*t4746;
  t4751 = 0.135*t4140*t4653;
  t4754 = t4653*t4180;
  t4757 = -0.08055*t4653*t4169;
  t4663 = t4140*t4658;
  t4664 = t2541*t2034*t4169;
  t4665 = t4663 + t4664;
  t4266 = -1.*t4265*t101*t296*t4211;
  t4279 = -1.*t4265*t296*t2587*t4230;
  t4280 = -1.*t4265*t101*t3254*t296;
  t4281 = t4265*t296*t2587*t3557;
  t4296 = t4280 + t4281;
  t4297 = -0.01004*t4296;
  t4317 = t4313*t4180;
  t4348 = t296*t2034*t4334;
  t4350 = t4140*t4313;
  t4352 = -1.*t296*t2034*t4169;
  t4354 = t4350 + t4352;
  t4367 = 0.135*t4354;
  t4373 = t4140*t296*t2034;
  t4376 = t4313*t4169;
  t4386 = t4373 + t4376;
  t4387 = -0.08055*t4386;
  t4401 = t4266 + t4279 + t4297 + t4317 + t4348 + t4367 + t4387;
  t4534 = -1.*t2541*t4265*t4334;
  t4804 = -1.*t2541*t3254*t2034*t2587;
  t4808 = -1.*t2541*t101*t2034*t3557;
  t4813 = t4804 + t4808;
  t4539 = t2541*t4265*t4169;
  t4853 = t4265*t101*t3254*t296;
  t4860 = -1.*t4265*t296*t2587*t3557;
  t4861 = t4853 + t4860;
  t4852 = -0.01004*t4313;
  t4863 = 0.135*t4140*t4861;
  t4864 = t4861*t4180;
  t4868 = -0.08055*t4861*t4169;
  t4649 = t2541*t4265*t101*t4211;
  t4650 = t2541*t4265*t2587*t4230;
  t4654 = -0.01004*t4653;
  t4659 = t4658*t4180;
  t4660 = -1.*t2541*t2034*t4334;
  t4669 = 0.135*t4665;
  t4670 = -1.*t2541*t4140*t2034;
  t4671 = t4658*t4169;
  t4672 = t4670 + t4671;
  t4674 = -0.08055*t4672;
  t4675 = t4649 + t4650 + t4654 + t4659 + t4660 + t4669 + t4674;
  t4891 = t4265*t3254*t296*t2587;
  t4893 = t4265*t101*t296*t3557;
  t4894 = t4891 + t4893;
  t4687 = -1.*t4265*t296*t4334;
  t4925 = -1.*t3254*t296*t2034*t2587;
  t4926 = -1.*t101*t296*t2034*t3557;
  t4927 = t4925 + t4926;
  t4690 = -1.*t4265*t4140*t296;
  t4963 = -1.*t101*t3254*t2034;
  t4964 = t2034*t2587*t3557;
  t4965 = t4963 + t4964;
  t4954 = t3254*t2034*t2587;
  t4957 = t101*t2034*t3557;
  t4958 = t4954 + t4957;
  t4961 = -0.01004*t4958;
  t4967 = 0.135*t4140*t4965;
  t4968 = t4965*t4180;
  t4969 = -0.08055*t4965*t4169;
  t4988 = -1.*t4265*t3254*t2587;
  t4990 = -1.*t4265*t101*t3557;
  t4991 = t4988 + t4990;
  t5012 = -1.*t3254*t2034*t2587;
  t5013 = -1.*t101*t2034*t3557;
  t5014 = t5012 + t5013;
  t4730 = -1.*t2541*t4265*t2587*t4211;
  t4731 = t2541*t4265*t101*t4230;
  t4758 = t4730 + t4731 + t4748 + t4751 + t4754 + t4757;
  t4505 = t4502*t4211;
  t4513 = t4512*t4230;
  t4517 = t3254*t4502;
  t4519 = -1.*t4512*t3557;
  t4524 = t4517 + t4519;
  t4525 = -0.01004*t4524;
  t4533 = t4532*t4180;
  t4579 = t4530 + t4575;
  t4220 = t4200*t4211;
  t4239 = t3250*t4230;
  t4241 = t3254*t4200;
  t4246 = t4241 + t4122;
  t4249 = -0.01004*t4246;
  t4255 = 0.135*t4140*t4252;
  t4256 = t4252*t4180;
  t4258 = -0.08055*t4252*t4169;
  t4263 = t4220 + t4239 + t4249 + t4255 + t4256 + t4258;
  t4843 = -1.*t4265*t296*t2587*t4211;
  t4851 = t4265*t101*t296*t4230;
  t4869 = t4843 + t4851 + t4852 + t4863 + t4864 + t4868;
  t5075 = t101*t296*t2034;
  t5076 = -1.*t2541*t2587;
  t5079 = t5075 + t5076;
  t5081 = -1.*t5079*t3557;
  t5083 = t4443 + t5081;
  t4678 = t3250*t4211;
  t4679 = t4061*t4230;
  t4680 = -0.01004*t4148;
  t4681 = t4448*t4180;
  t4568 = t4512*t4211;
  t4574 = t4573*t4230;
  t4580 = -0.01004*t4579;
  t4593 = 0.135*t4140*t4588;
  t4597 = t4588*t4180;
  t4601 = -0.08055*t4588*t4169;
  t4602 = t4568 + t4574 + t4580 + t4593 + t4597 + t4601;
  t5106 = t3254*t5079;
  t5107 = t4061*t3557;
  t5108 = t5106 + t5107;
  t4980 = -1.*t4265*t101*t4211;
  t4982 = -1.*t4265*t2587*t4230;
  t4983 = -1.*t4265*t101*t3254;
  t4984 = t4265*t2587*t3557;
  t4986 = t4983 + t4984;
  t4987 = -0.01004*t4986;
  t4993 = t4991*t4180;
  t5124 = 0.135*t4140*t4991;
  t5125 = -0.08055*t4991*t4169;
  t5136 = t4265*t101*t3254;
  t5138 = -1.*t4265*t2587*t3557;
  t5139 = t5136 + t5138;
  t4949 = t2034*t2587*t4211;
  t4950 = -1.*t101*t2034*t4230;
  t4971 = t4949 + t4950 + t4961 + t4967 + t4968 + t4969;
  t4769 = t2541*t4265*t101*t3815;
  t4770 = t2541*t4265*t2587*t4090;
  t4771 = t4769 + t4770 + t4748 + t4751 + t4754 + t4757;
  t5044 = t4512*t3815;
  t5045 = t4573*t4090;
  t5046 = 0.135*t4140*t4579;
  t5047 = -1.*t3254*t4573;
  t5049 = t5047 + t4519;
  t5051 = -0.01004*t5049;
  t5053 = t4579*t4180;
  t5058 = -0.08055*t4579*t4169;
  t5059 = t5044 + t5045 + t5046 + t5051 + t5053 + t5058;
  t4619 = -1.*t3254*t4611;
  t4620 = t4619 + t4575;
  t3857 = t3250*t3815;
  t4109 = t4061*t4090;
  t4112 = -1.*t3254*t4061;
  t4134 = t4112 + t4122;
  t4136 = -0.01004*t4134;
  t4150 = 0.135*t4140*t4148;
  t4183 = t4148*t4180;
  t4188 = -0.08055*t4148*t4169;
  t4189 = t3857 + t4109 + t4136 + t4150 + t4183 + t4188;
  t4872 = t4265*t101*t296*t3815;
  t4873 = t4265*t296*t2587*t4090;
  t4875 = t4872 + t4873 + t4852 + t4863 + t4864 + t4868;
  t5073 = t4061*t3815;
  t5080 = t5079*t4090;
  t5084 = 0.135*t4140*t5083;
  t5085 = -1.*t3254*t5079;
  t5086 = t5085 + t4144;
  t5087 = -0.01004*t5086;
  t5088 = t5083*t4180;
  t5089 = -0.08055*t5083*t4169;
  t5092 = t5073 + t5080 + t5084 + t5087 + t5088 + t5089;
  t5153 = 0.135*t3254;
  t5154 = -0.07996*t3557;
  t5156 = t5153 + t5154;
  t5189 = -1.*t3254*t4200;
  t5193 = t5189 + t5081;
  t4608 = t4573*t3815;
  t4614 = t4611*t4090;
  t4627 = -0.01004*t4620;
  t4636 = 0.135*t4140*t4633;
  t4637 = t4633*t4180;
  t4638 = -0.08055*t4633*t4169;
  t4640 = t4608 + t4614 + t4627 + t4636 + t4637 + t4638;
  t5209 = -1.*t4200*t3557;
  t5210 = t5106 + t5209;
  t5132 = t4265*t101*t4090;
  t5130 = -1.*t4265*t2587*t3815;
  t5134 = t5130 + t5132 + t5124 + t4987 + t4993 + t5125;
  t5141 = -0.08055*t4140*t5139;
  t5142 = t5139*t4456;
  t5144 = -0.135*t5139*t4169;
  t5145 = t5141 + t5142 + t5144;
  t5146 = var2[7]*t5145;
  t4973 = -1.*t101*t2034*t3815;
  t4974 = -1.*t2034*t2587*t4090;
  t4975 = t4973 + t4974 + t4961 + t4967 + t4968 + t4969;
  t5061 = -0.08055*t4140*t4588;
  t5062 = t4588*t4456;
  t5064 = -0.135*t4588*t4169;
  t5066 = t5061 + t5062 + t5064;
  t5170 = -0.08055*t4140*t4633;
  t5173 = t4633*t4456;
  t5175 = -0.135*t4633*t4169;
  t5176 = t5170 + t5173 + t5175;
  t4774 = -1.*t2541*t2034*t4425;
  t4775 = t4658*t4456;
  t4776 = -0.08055*t4665;
  t4778 = t2541*t4140*t2034;
  t4780 = -1.*t4658*t4169;
  t4787 = t4778 + t4780;
  t4788 = 0.135*t4787;
  t4789 = t4774 + t4775 + t4776 + t4788;
  t4430 = -1.*t4265*t296*t4425;
  t4457 = t4448*t4456;
  t4476 = -0.08055*t4475;
  t4477 = t4265*t4140*t296;
  t4481 = -1.*t4448*t4169;
  t4483 = t4477 + t4481;
  t4490 = 0.135*t4483;
  t4493 = t4430 + t4457 + t4476 + t4490;
  t4717 = -1.*t4707*t4169;
  t4719 = t4549 + t4717;
  t5110 = -0.08055*t4140*t5108;
  t5112 = t5108*t4456;
  t5114 = -0.135*t5108*t4169;
  t5116 = t5110 + t5112 + t5114;
  t5212 = -0.08055*t4140*t5210;
  t5213 = t5210*t4456;
  t5214 = -0.135*t5210*t4169;
  t5215 = t5212 + t5213 + t5214;
  t4890 = -1.*t296*t2034*t4425;
  t4895 = t4894*t4456;
  t4897 = t4140*t4894;
  t4898 = t296*t2034*t4169;
  t4899 = t4897 + t4898;
  t4900 = -0.08055*t4899;
  t4901 = -1.*t4894*t4169;
  t4902 = t4373 + t4901;
  t4903 = 0.135*t4902;
  t4908 = t4890 + t4895 + t4900 + t4903;
  t5233 = -0.08055*t4140;
  t5234 = -0.135*t4169;
  t5235 = t5233 + t5234;
  t5252 = t5079*t3557;
  t5253 = t4241 + t5252;
  t4699 = t2541*t4265*t4425;
  t4708 = t4707*t4456;
  t4709 = t4140*t4707;
  t4712 = -1.*t2541*t4265*t4169;
  t4713 = t4709 + t4712;
  t4715 = -0.08055*t4713;
  t4720 = 0.135*t4719;
  t4721 = t4699 + t4708 + t4715 + t4720;
  t5276 = t4265*t3254*t2587;
  t5277 = t4265*t101*t3557;
  t5278 = t5276 + t5277;
  t4999 = -1.*t2034*t4169;
  t5003 = t4140*t2034;
  t5011 = -1.*t4265*t4425;
  t5016 = t5014*t4456;
  t5017 = t4140*t5014;
  t5018 = t4265*t4169;
  t5020 = t5017 + t5018;
  t5021 = -0.08055*t5020;
  t5022 = t4265*t4140;
  t5025 = -1.*t5014*t4169;
  t5027 = t5022 + t5025;
  t5028 = 0.135*t5027;
  t5029 = t5011 + t5016 + t5021 + t5028;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(t4505 + t4513 + t4525 + t4533 + t4534 + 0.135*(t4140*t4532 + t4539) - 0.08055*(t4169*t4532 + t4549))*var2[3] + t4401*var2[4] + t4263*var2[5] + t4189*var2[6] + t4493*var2[7];
  p_output1[10]=(0.135*t4475 + t4678 + t4679 + t4680 + t4681 + t4687 - 0.08055*(t4169*t4448 + t4690))*var2[3] + t4675*var2[4] + t4602*var2[5] + t4640*var2[6] + t4721*var2[7];
  p_output1[11]=0;
  p_output1[12]=t4401*var2[3] + (-0.01004*(-1.*t101*t2034*t2541*t3254 + t2034*t2541*t2587*t3557) - 1.*t101*t2034*t2541*t4211 - 1.*t2034*t2541*t2587*t4230 + t4534 + t4180*t4813 + 0.135*(t4539 + t4140*t4813) - 0.08055*(t4549 + t4169*t4813))*var2[4] + t4758*var2[5] + t4771*var2[6] + t4789*var2[7];
  p_output1[13]=t4675*var2[3] + (-0.01004*(-1.*t101*t2034*t296*t3254 + t2034*t2587*t296*t3557) - 1.*t101*t2034*t296*t4211 - 1.*t2034*t2587*t296*t4230 + t4687 + t4180*t4927 + 0.135*(t4469 + t4140*t4927) - 0.08055*(t4690 + t4169*t4927))*var2[4] + t4869*var2[5] + t4875*var2[6] + t4908*var2[7];
  p_output1[14]=(t2034*t4334 + t4980 + t4982 + t4987 + t4993 + 0.135*(t4140*t4991 + t4999) - 0.08055*(t4169*t4991 + t5003))*var2[4] + t4971*var2[5] + t4975*var2[6] + t5029*var2[7];
  p_output1[15]=t4263*var2[3] + t4758*var2[4] + (t4505 + t4513 + t4525 + 0.135*t4140*t4532 - 0.08055*t4169*t4532 + t4533)*var2[5] + t5059*var2[6] + t5066*var2[7];
  p_output1[16]=t4602*var2[3] + t4869*var2[4] + (0.135*t4140*t4448 - 0.08055*t4169*t4448 + t4678 + t4679 + t4680 + t4681)*var2[5] + t5092*var2[6] + t5116*var2[7];
  p_output1[17]=t5146 + t4971*var2[4] + (t4980 + t4982 + t4987 + t4993 + t5124 + t5125)*var2[5] + t5134*var2[6];
  p_output1[18]=t4189*var2[3] + t4771*var2[4] + t5059*var2[5] + (0.135*t4140*t4620 - 0.08055*t4169*t4620 + t4180*t4620 + t5045 - 0.01004*(t3557*t4611 + t5047) + t4611*t5156)*var2[6] + t5176*var2[7];
  p_output1[19]=t4640*var2[3] + t4875*var2[4] + t5092*var2[5] + (t5080 - 0.01004*(t4251 + t5085) + t4200*t5156 + 0.135*t4140*t5193 - 0.08055*t4169*t5193 + t4180*t5193)*var2[6] + t5215*var2[7];
  p_output1[20]=t5146 + t4975*var2[4] + t5134*var2[5] + (t4987 + t4993 + t5124 + t5125 + t5132 + t2587*t4265*t5156)*var2[6];
  p_output1[21]=t4493*var2[3] + t4789*var2[4] + t5066*var2[5] + t5176*var2[6] + (t4425*t4707 + 0.135*(t4539 - 1.*t4140*t4707) - 0.08055*t4719 + t2541*t4265*t5235)*var2[7];
  p_output1[22]=t4721*var2[3] + t4908*var2[4] + t5116*var2[5] + t5215*var2[6] + (t296*t4265*t5235 + t4425*t5253 + 0.135*(t4469 - 1.*t4140*t5253) - 0.08055*(t4690 - 1.*t4169*t5253))*var2[7];
  p_output1[23]=t5029*var2[4] + t5145*var2[5] + t5145*var2[6] + (-1.*t2034*t5235 + t4425*t5278 + 0.135*(t4999 - 1.*t4140*t5278) - 0.08055*(t5003 - 1.*t4169*t5278))*var2[7];
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
  p_output1[54]=0;
  p_output1[55]=0;
  p_output1[56]=0;
  p_output1[57]=0;
  p_output1[58]=0;
  p_output1[59]=0;
}



void dJp_LeftRotationJoint_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
