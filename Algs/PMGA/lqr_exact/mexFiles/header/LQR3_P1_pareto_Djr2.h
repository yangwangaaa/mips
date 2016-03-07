#ifndef LQR3_P1_pareto_Djr2_H
#define LQR3_P1_pareto_Djr2_H

double LQR3_P1_pareto_Djr2(double* tv, int tdim, double* param, int pdim) {

double t1 = tv[0], t2 = tv[1];

double r1 = param[0];
double r2 = param[1];
double r3 = param[2];
double r4 = param[3];
double r5 = param[4];
double r6 = param[5];
double r7 = param[6];
double r8 = param[7];
double r9 = param[8];

double t4 = r2-3.338299811;
double t5 = t2*t4;
double t6 = r1*t1;
double t7 = t1*t1;
double t8 = t2*t2;
double t13 = r1*t7;
double t14 = r2*t8;
double t15 = r3*t1*t2;
double t9 = t5+t6-t13-t14-t15+1.151035476;
double t10 = exp(t9);
double t11 = t10+1.0;
double t12 = 1.0/t11;
double t16 = 1.0/(t11*t11);
double t17 = t12*1.8E1;
double t19 = t16*9.0;
double t18 = t17-t19+1.0;
double t20 = 1.0/t18;
double t21 = t12*t20*2.18E2;
double t22 = t16*(1.0/1.0E1);
double t23 = t22+9.0/1.0E1;
double t24 = t17-1.8E1;
double t25 = 1.0/(t18*t18);
double t26 = t23*t24*t25*1.09E3;
double t27 = t21+t26;
double t28 = fabs(t27);
double t29 = r4-3.338299811;
double t30 = t1*t29;
double t31 = r5*t2;
double t36 = r4*t7;
double t37 = r5*t8;
double t38 = r6*t1*t2;
double t32 = t30+t31-t36-t37-t38+1.151035476;
double t33 = exp(t32);
double t34 = t33+1.0;
double t35 = 1.0/t34;
double t39 = 1.0/(t34*t34);
double t40 = t35*1.8E1;
double t64 = t39*9.0;
double t41 = t40-t64+1.0;
double t65 = 1.0/t41;
double t66 = t35*t65*1.962E3;
double t67 = t39*(9.0/1.0E1);
double t68 = t67+1.0/1.0E1;
double t69 = t40-1.8E1;
double t70 = 1.0/(t41*t41);
double t71 = t68*t69*t70*1.09E3;
double t72 = t66+t71;
double t42 = fabs(t72);
double t43 = r7+3.338299811;
double t44 = t1*t43;
double t45 = r8+3.338299811;
double t46 = t2*t45;
double t51 = r7*t7;
double t52 = r8*t8;
double t53 = r9*t1*t2;
double t47 = t44+t46-t51-t52-t53-2.187264336;
double t48 = exp(t47);
double t49 = t48+1.0;
double t50 = 1.0/t49;
double t54 = 1.0/(t49*t49);
double t55 = t50*1.8E1;
double t74 = t54*9.0;
double t56 = t55-t74+1.0;
double t75 = 1.0/t56;
double t76 = t55-1.8E1;
double t77 = 1.0/(t56*t56);
double t86 = t50*t75*1.962E3;
double t87 = t54*(9.0/1.0E1);
double t88 = t87+1.0/1.0E1;
double t89 = t76*t77*t88*1.09E3;
double t90 = t86+t89;
double t57 = fabs(t90);
double t58 = t12*t20*1.962E3;
double t59 = t16*(9.0/1.0E1);
double t60 = t59+1.0/1.0E1;
double t61 = t24*t25*t60*1.09E3;
double t62 = t58+t61;
double t63 = fabs(t62);
double t73 = t42*t42;
double t100 = t50*t75*2.18E2;
double t101 = t54*(1.0/1.0E1);
double t102 = t101+9.0/1.0E1;
double t103 = t76*t77*t102*1.09E3;
double t104 = t100+t103;
double t78 = fabs(t104);
double t79 = t35*t65*2.18E2;
double t80 = t39*(1.0/1.0E1);
double t81 = t80+9.0/1.0E1;
double t82 = t69*t70*t81*1.09E3;
double t83 = t79+t82;
double t84 = fabs(t83);
double t85 = t63*t63;
double t91 = t57*t57;
double t92 = t28*t28;
double t93 = t73+t91+t92;
double t94 = 1.0/sqrt(t93);
double t95 = t27*t94;
double t96 = t84*t84;
double t97 = t85+t91+t96;
double t98 = 1.0/sqrt(t97);
double t99 = t72*t94;
double t105 = t78*t78;
double t106 = t73+t85+t105;
double t107 = 1.0/sqrt(t106);
double t172 = t62*t98;
double t108 = t95-t172;
double t109 = t90*t94;
double t174 = t62*t107;
double t110 = t95-t174;
double t173 = t90*t98;
double t111 = t109-t173;
double t179 = t72*t107;
double t112 = t99-t179;
double t178 = t83*t98;
double t113 = t99-t178;
double t171 = t104*t107;
double t114 = t109-t171;
double t115 = r4*t1*2.0;
double t116 = r6*t2;
double t117 = -r4+t115+t116+3.338299811;
double t124 = r7*t1*2.0;
double t125 = r9*t2;
double t118 = r7-t124-t125+3.338299811;
double t119 = r1*t1*2.0;
double t120 = r3*t2;
double t121 = -r1+t119+t120;
double t122 = t10*t16*t62*t121;
double t123 = t33*t39*t72*t117;
double t132 = t48*t54*t104*t118;
double t126 = t122+t123-t132;
double t127 = t33*t39*t83*t117;
double t129 = t48*t54*t90*t118;
double t128 = t122+t127-t129;
double t130 = t10*t16*t27*t121;
double t131 = t123-t129+t130;
double t133 = r2*t2*2.0;
double t134 = r3*t1;
double t135 = -r2+t133+t134+3.338299811;
double t142 = r8*t2*2.0;
double t143 = r9*t1;
double t136 = r8-t142-t143+3.338299811;
double t137 = r5*t2*2.0;
double t138 = r6*t1;
double t139 = -r5+t137+t138;
double t140 = t33*t39*t72*t139;
double t141 = t10*t16*t62*t135;
double t150 = t48*t54*t104*t136;
double t144 = t140+t141-t150;
double t145 = t10*t16*t27*t135;
double t147 = t48*t54*t90*t136;
double t146 = t140+t145-t147;
double t148 = t33*t39*t83*t139;
double t149 = t141-t147+t148;
double t151 = t27*t131;
double t152 = t62*t128;
double t153 = t62*t126;
double t154 = t151+t152+t153;
double t155 = t104*t126;
double t156 = t90*t128;
double t157 = t90*t131;
double t158 = t155+t156+t157;
double t159 = t83*t128;
double t160 = t72*t126;
double t161 = t83*t149;
double t162 = t72*t146;
double t163 = t72*t144;
double t164 = t161+t162+t163;
double t165 = t104*t144;
double t166 = t90*t146;
double t167 = t90*t149;
double t168 = t165+t166+t167;
double t169 = t27*t146;
double t170 = t62*t144;
double t175 = t110*t111;
double t271 = t108*t114;
double t176 = t175-t271;
double t177 = fabs(t176);
double t180 = t111*t112;
double t273 = (t99-t178)*(t109-t171);
double t274 = -t180+t273;
double t181 = fabs(t274);
double t182 = t108*t112;
double t269 = t110*t113;
double t183 = t182-t269;
double t184 = fabs(t183);
double t185 = t72*t131;
double t186 = t159+t160+t185;
double t187 = t10*t16*t121*t154;
double t188 = t62*t149;
double t189 = t169+t170+t188;
double t190 = t2*1.0;
double t191 = t8-t190;
double t192 = 1.0/(t11*t11*t11);
double t193 = t10*t16*t191*1.8E1;
double t198 = t10*t191*t192*1.8E1;
double t194 = t193-t198;
double t195 = t2*2.0;
double t196 = t195-1.0;
double t197 = 1.0/(t18*t18*t18);
double t199 = t2*t4*2.0;
double t208 = r1*t7*2.0;
double t209 = r2*t8*2.0;
double t210 = r3*t1*t2*2.0;
double t200 = t119+t199-t208-t209-t210+2.302070952;
double t201 = exp(t200);
double t202 = t10*t16*t20*t191*1.962E3;
double t203 = t10*t16*t25*t60*t191*1.962E4;
double t204 = t10*t24*t25*t191*t192*1.962E3;
double t217 = t12*t25*t194*1.962E3;
double t218 = t24*t60*t194*t197*2.18E3;
double t205 = t202+t203+t204-t217-t218;
double t206 = t10*t16*t135*t205;
double t207 = t10*t16*t62*t196;
double t211 = t62*t135*t191*t192*t201*2.0;
double t225 = t10*t16*t62*t135*t191;
double t212 = t206+t207+t211-t225;
double t213 = t10*t16*t20*t191*2.18E2;
double t214 = t10*t16*t23*t25*t191*1.962E4;
double t215 = t10*t24*t25*t191*t192*2.18E2;
double t219 = t12*t25*t194*2.18E2;
double t220 = t23*t24*t194*t197*2.18E3;
double t216 = t213+t214+t215-t219-t220;
double t221 = t10*t16*t135*t216;
double t222 = t10*t16*t27*t196;
double t223 = t27*t135*t191*t192*t201*2.0;
double t226 = t10*t16*t27*t135*t191;
double t224 = t221+t222+t223-t226;
double t227 = t10*t16*t135*t154;
double t228 = t33*t39*t139*t186;
double t279 = t48*t54*t136*t158;
double t229 = t227+t228-t279;
double t230 = t146*t216;
double t231 = t144*t205;
double t232 = t149*t205;
double t233 = t27*t224;
double t234 = t62*t212*2.0;
double t235 = t230+t231+t232+t233+t234;
double t236 = t72*t224;
double t237 = t83*t212;
double t238 = t72*t212;
double t239 = t236+t237+t238;
double t240 = t90*t224;
double t241 = t104*t212;
double t242 = t90*t212;
double t243 = t240+t241+t242;
double t244 = t33*t39*t117*t164;
double t245 = t10*t16*t121*t189;
double t280 = t48*t54*t118*t168;
double t246 = t244+t245-t280;
double t247 = t10*t16*t121*t216;
double t248 = t27*t121*t191*t192*t201*2.0;
double t254 = t10*t16*t27*t121*t191;
double t249 = t247+t248-t254;
double t250 = t10*t16*t121*t205;
double t251 = t62*t121*t191*t192*t201*2.0;
double t253 = t10*t16*t62*t121*t191;
double t252 = t250+t251-t253;
double t255 = t33*t39*t139*t164;
double t256 = t72*t249;
double t257 = t83*t252;
double t258 = t72*t252;
double t259 = t256+t257+t258;
double t260 = t131*t216;
double t261 = t128*t205;
double t262 = t126*t205;
double t263 = t27*t249;
double t264 = t62*t252*2.0;
double t265 = t260+t261+t262+t263+t264;
double t266 = t90*t249;
double t267 = t104*t252;
double t268 = t90*t252;
double t270 = t90*t94*t183;
double t272 = t72*t94*t176;
double t275 = t33*t39*t117*t186;
double t311 = t48*t54*t118*t158;
double t276 = t187+t275-t311;
double t277 = t10*t16*t135*t189;
double t312 = t48*t54*t136*t168;
double t278 = t255+t277-t312;
double t281 = t94*t216;
double t282 = (t27/fabs(t27));
double t283 = 1.0/pow(t93,3.0/2.0);
double t284 = (t62/fabs(t62));
double t285 = 1.0/pow(t97,3.0/2.0);
double t286 = 1.0/pow(t106,3.0/2.0);
double t287 = t62*t63*t205*t284*t285;
double t288 = t62*t63*t205*t284*t286;
double t306 = t27*t28*t216*t282*t283;
double t289 = t281+t288-t306-t107*t205;
double t290 = t28*t72*t216*t282*t283;
double t292 = t10*t192*(t8-t190)*1.8E1;
double t293 = t193-t292;
double t294 = t12*t25*t293*1.962E3;
double t295 = t24*t60*t197*t293*2.18E3;
double t296 = t202+t203+t204-t294-t295;
double t291 = t63*t83*t284*t285*t296;
double t298 = t12*t25*t293*2.18E2;
double t299 = t23*t24*t197*t293*2.18E3;
double t297 = t213+t214+t215-t298-t299;
double t300 = t28*t90*t282*t283*t297;
double t301 = t177*t177;
double t302 = t181*t181;
double t303 = t184*t184;
double t304 = t301+t302+t303;
double t305 = t28*t90*t216*t282*t283;
double t307 = t281+t287-t306-t98*t205;
double t308 = t290-t291;
double t309 = t27*t94*t274;
double t310 = t270+t272+t309;
double t313 = t276*t278;
double t314 = t313-t229*t246;
double t315 = sqrt(t314);
double t316 = 1.0/sqrt(t304);
double t317 = t28*t72*t282*t283*t297;
double t318 = t317-t63*t72*t284*t286*t296;
double t325 = t63*t90*t284*t285*t296;
double t319 = t300-t325;
double t320 = t94*t297;
double t321 = t62*t63*t284*t285*t296;
double t322 = t62*t63*t284*t286*t296;
double t323 = t300-t63*t104*t284*t286*t296;
double t324 = t320+t321-t98*t296-t27*t28*t282*t283*t297;
double t0 = 1.0/pow(t304,3.0/2.0)*t315*fabs(t310)*(t181*((t274/fabs(t274)))*(t114*t308-t111*t318-t112*t319+t113*t323)*2.0+t184*((t183/fabs(t183)))*(t113*t289-t110*t308-t112*t307+t108*(t290-t63*t72*t205*t284*t286))*2.0-t177*((t176/fabs(t176)))*(t111*t289-t114*t307-t110*(t305-t63*t90*t205*t284*t285)+t108*(t305-t63*t104*t205*t284*t286))*2.0)*(-1.0/2.0)+t316*fabs(t270+t272-t27*t94*(t180-t113*t114))*1.0/sqrt(-t229*t246+(t187-t48*t54*t118*t158+t33*t39*t117*(t159+t160+t72*(t123+t130-t48*t54*t90*t118)))*(t255-t48*t54*t136*t168+t10*t16*t135*(t169+t170+t62*(t141+t148-t48*t54*t90*t136))))*(t229*(t10*t16*t121*t235+t33*t39*t117*t239-t48*t54*t118*t243-t10*t16*t121*t189*t191+t121*t189*t191*t192*t201*2.0)-t276*(t10*t16*t135*t235+t10*t16*t189*t196+t33*t39*t139*t239-t48*t54*t136*t243-t10*t16*t135*t189*t191+t135*t189*t192*t201*(t8-t190)*2.0)+t246*(t10*t16*t154*t196+t10*t16*t135*t265+t33*t39*t139*t259-t48*t54*t136*(t266+t267+t268)-t10*t16*t135*t154*t191+t135*t154*t191*t192*t201*2.0)-t278*(t10*t16*t121*t265+t33*t39*t117*t259-t48*t54*t118*(t266+t267+t268)+t121*t154*t191*t192*t201*2.0-t10*t16*t121*t154*(t8-t190)))*(1.0/2.0)+t315*t316*((t310/fabs(t310)))*(t27*t94*((t317-t63*t83*t284*t285*(t202+t203+t204-t12*t25*(t193-t292)*1.962E3-t24*t60*t197*(t193-t292)*2.18E3))*(t109-t171)+(t300-t63*t104*t284*t286*(t202+t203+t204-t12*t25*(t193-t292)*1.962E3-t24*t60*t197*(t193-t292)*2.18E3))*(t99-t178)-t111*t318-t112*t319)-t72*t94*(t111*(t320+t322-t107*t296-t27*t28*t282*t283*t297)-t110*t319+t108*t323-t114*t324)+t90*t94*(-t112*t324+(t99-t178)*(t320+t322-t107*(t202+t203+t204-t12*t25*(t193-t292)*1.962E3-t24*t60*t197*(t193-t292)*2.18E3)-t27*t28*t282*t283*(t213+t214+t215-t12*t25*(t193-t292)*2.18E2-t23*t24*t197*(t193-t292)*2.18E3))+t110*(t291-t317)+t108*(t317-t63*t72*t284*t286*(t202+t203+t204-t12*t25*(t193-t292)*1.962E3-t24*t60*t197*(t193-t292)*2.18E3)))-t94*t274*t297+t28*t72*t176*t282*t283*(t213+t214+t215-t12*t25*(t193-t292)*2.18E2-t23*t24*t197*(t193-t292)*2.18E3)+t28*t90*t183*t282*t283*(t213+t214+t215-t12*t25*(t193-t292)*2.18E2-t23*t24*t197*(t193-t292)*2.18E3)+t27*t28*t274*t282*t283*(t213+t214+t215-t12*t25*(t193-t292)*2.18E2-t23*t24*t197*(t193-t292)*2.18E3));

return t0;
}

#endif