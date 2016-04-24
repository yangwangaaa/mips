#ifndef LQR3_P1_mix2_DL1_H
#define LQR3_P1_mix2_DL1_H

double LQR3_P1_mix2_DL1(double* tv, int tdim, double* param, int pdim) {

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

double t4 = r2*t1;
double t5 = r3*t2;
double t6 = r1+t4+t5;
double t7 = exp(t6);
double t8 = t7+1.0;
double t9 = 1.0/(t8*t8);
double t10 = r5*t1;
double t11 = r6*t2;
double t12 = r4+t10+t11;
double t13 = exp(t12);
double t14 = t13+1.0;
double t15 = 1.0/(t14*t14);
double t16 = r8*t1;
double t17 = r9*t2;
double t18 = r7+t16+t17;
double t19 = exp(t18);
double t20 = t19+1.0;
double t21 = 1.0/(t20*t20);
double t23 = 1.0/t8;
double t24 = t23*1.8E1;
double t25 = t9*9.0;
double t26 = t24-t25+1.0;
double t27 = 1.0/t26;
double t28 = 1.0/t14;
double t29 = t28*1.8E1;
double t30 = t15*9.0;
double t31 = t29-t30+1.0;
double t32 = 1.0/t31;
double t33 = t21*(9.0/1.0E1);
double t34 = t33+1.0/1.0E1;
double t35 = 1.0/t20;
double t36 = t35*1.8E1;
double t37 = t21*9.0;
double t38 = t36-t37+1.0;
double t39 = 1.0/t38;
double t40 = t34*t39*1.09E3;
double t45 = t15*(9.0/1.0E1);
double t46 = t45+1.0/1.0E1;
double t47 = t32*t46*1.09E3;
double t50 = t9*(1.0/1.0E1);
double t51 = t50+9.0/1.0E1;
double t52 = t27*t51*1.09E3;
double t53 = t40+t47+t52+1.9E1;
double t77 = 1.0/Up1;
double t78 = t53*t77;
double t79 = t78-1.0;
double t22 = fabs(t79);
double t42 = t9*(9.0/1.0E1);
double t43 = t42+1.0/1.0E1;
double t44 = t27*t43*1.09E3;
double t58 = t15*(1.0/1.0E1);
double t59 = t58+9.0/1.0E1;
double t60 = t32*t59*1.09E3;
double t61 = t40+t44+t60+1.9E1;
double t81 = 1.0/Up2;
double t82 = t61*t81;
double t83 = t82-1.0;
double t41 = fabs(t83);
double t68 = t21*(1.0/1.0E1);
double t69 = t68+9.0/1.0E1;
double t70 = t39*t69*1.09E3;
double t71 = t44+t47+t70+1.9E1;
double t85 = 1.0/Up3;
double t86 = t71*t85;
double t87 = t86-1.0;
double t48 = fabs(t87);
double t49 = 1.0/AUp1;
double t54 = t49*t53;
double t55 = t54-1.0;
double t56 = 1.0/(t8*t8*t8);
double t57 = 1.0/AUp2;
double t62 = t57*t61;
double t63 = t62-1.0;
double t64 = t7*t9*1.8E1;
double t75 = t7*t56*1.8E1;
double t65 = t64-t75;
double t66 = 1.0/(t26*t26);
double t67 = 1.0/AUp3;
double t72 = t67*t71;
double t73 = t72-1.0;
double t74 = t7*t27*t56*1.962E3;
double t95 = t43*t65*t66*1.09E3;
double t76 = t74-t95;
double t80 = t22*t22;
double t84 = t41*t41;
double t88 = t48*t48;
double t89 = t80+t84+t88;
double t90 = fabs(t55);
double t91 = fabs(t63);
double t92 = fabs(t73);
double t93 = t7*t27*t56*2.18E2;
double t94 = t93-t51*t65*t66*1.09E3;
double t96 = t23*t27*2.18E2;
double t97 = t24-1.8E1;
double t98 = t51*t66*t97*1.09E3;
double t99 = t96+t98;
double t100 = t29-1.8E1;
double t101 = 1.0/(t31*t31);
double t102 = t23*t27*1.962E3;
double t103 = t43*t66*t97*1.09E3;
double t104 = t102+t103;
double t105 = t35*t39*1.962E3;
double t106 = t36-1.8E1;
double t107 = 1.0/(t38*t38);
double t108 = t34*t106*t107*1.09E3;
double t109 = t105+t108;
double t110 = r8*t19*t21*t109;
double t111 = r2*t7*t9*t104;
double t112 = t28*t32*1.962E3;
double t113 = t46*t100*t101*1.09E3;
double t114 = t112+t113;
double t115 = r5*t13*t15*t114;
double t116 = t28*t32*2.18E2;
double t117 = t59*t100*t101*1.09E3;
double t118 = t116+t117;
double t119 = r5*t13*t15*t118;
double t120 = t110+t111+t119;
double t121 = r2*t7*t9*t99;
double t122 = t110+t115+t121;
double t123 = t35*t39*2.18E2;
double t124 = t69*t106*t107*1.09E3;
double t125 = t123+t124;
double t126 = r8*t19*t21*t125;
double t127 = t111+t115+t126;
double t128 = r9*t19*t21*t109;
double t129 = r3*t7*t9*t104;
double t130 = r6*t13*t15*t114;
double t131 = r6*t13*t15*t118;
double t132 = t128+t129+t131;
double t133 = r3*t7*t9*t99;
double t134 = t128+t130+t133;
double t135 = r9*t19*t21*t125;
double t136 = t129+t130+t135;
double t137 = t99*t122;
double t138 = t104*t120;
double t139 = t104*t127;
double t140 = t137+t138+t139;
double t141 = t118*t120;
double t142 = t114*t122;
double t143 = t114*t127;
double t144 = t141+t142+t143;
double t145 = t125*t127;
double t146 = t109*t122;
double t147 = t109*t120;
double t148 = t145+t146+t147;
double t149 = t99*t134;
double t150 = t104*t132;
double t151 = t104*t136;
double t152 = t149+t150+t151;
double t153 = t118*t132;
double t154 = t114*t134;
double t155 = t114*t136;
double t156 = t153+t154+t155;
double t157 = t125*t136;
double t158 = t109*t134;
double t159 = t109*t132;
double t160 = t157+t158+t159;
double t161 = r2*t7*t9*t140;
double t162 = r5*t13*t15*t144;
double t163 = r8*t19*t21*t148;
double t164 = t161+t162+t163;
double t165 = r3*t7*t9*t152;
double t166 = r6*t13*t15*t156;
double t167 = r9*t19*t21*t160;
double t168 = t165+t166+t167;
double t169 = t164*t168;
double t170 = r3*t7*t9*t140;
double t171 = r6*t13*t15*t144;
double t172 = r9*t19*t21*t148;
double t173 = t170+t171+t172;
double t174 = r2*t7*t9*t152;
double t175 = r5*t13*t15*t156;
double t176 = r8*t19*t21*t160;
double t177 = t174+t175+t176;
double t178 = t169-t173*t177;
double t179 = 1.0/t89;
double t180 = t90*t90;
double t181 = t91*t91;
double t182 = t92*t92;
double t183 = t180+t181+t182;
double t184 = 1.0/(t26*t26*t26);
double t185 = t7*t9*t27*1.962E3;
double t186 = t7*t9*t43*t66*1.962E4;
double t187 = t7*t56*t66*t97*1.962E3;
double t193 = t23*t65*t66*1.962E3;
double t194 = t43*t65*t97*t184*2.18E3;
double t188 = t185+t186+t187-t193-t194;
double t189 = t7*t9*t27*2.18E2;
double t190 = t7*t9*t51*t66*1.962E4;
double t191 = t7*t56*t66*t97*2.18E2;
double t200 = t23*t65*t66*2.18E2;
double t201 = t51*t65*t97*t184*2.18E3;
double t192 = t189+t190+t191-t200-t201;
double t195 = r1*2.0;
double t196 = r2*t1*2.0;
double t197 = r3*t2*2.0;
double t198 = t195+t196+t197;
double t199 = exp(t198);
double t202 = r2*t7*t9*t192;
double t203 = r2*t56*t99*t199*2.0;
double t204 = -t121+t202+t203;
double t205 = r2*t7*t9*t188;
double t206 = r2*t56*t104*t199*2.0;
double t207 = -t111+t205+t206;
double t208 = t122*t192;
double t209 = t120*t188;
double t210 = t127*t188;
double t211 = t99*t204;
double t212 = t104*t207*2.0;
double t213 = t208+t209+t210+t211+t212;
double t214 = t114*t204;
double t215 = t118*t207;
double t216 = t114*t207;
double t217 = t214+t215+t216;
double t218 = t109*t204;
double t219 = t125*t207;
double t220 = t109*t207;
double t221 = t218+t219+t220;
double t222 = r3*t7*t9*t192;
double t223 = r3*t56*t99*t199*2.0;
double t224 = -t133+t222+t223;
double t225 = r3*t7*t9*t188;
double t226 = r3*t56*t104*t199*2.0;
double t227 = -t129+t225+t226;
double t228 = t134*t192;
double t229 = t132*t188;
double t230 = t136*t188;
double t231 = t99*t224;
double t232 = t104*t227*2.0;
double t233 = t228+t229+t230+t231+t232;
double t234 = t114*t224;
double t235 = t118*t227;
double t236 = t114*t227;
double t237 = t234+t235+t236;
double t238 = t109*t224;
double t239 = t125*t227;
double t240 = t109*t227;
double t241 = t238+t239+t240;
double t0 = -sqrt(t178)*(beta1*t179*(t57*t76*t91*((t63/fabs(t63)))*2.0+t49*t90*t94*((t55/fabs(t55)))*2.0+t67*t76*t92*((t73/fabs(t73)))*2.0)-beta1*1.0/(t89*t89)*t183*(t22*t77*t94*((t79/fabs(t79)))*2.0+t41*t76*t81*((t83/fabs(t83)))*2.0+t48*t76*t85*((t87/fabs(t87)))*2.0))+1.0/sqrt(t178)*(beta2-beta1*t179*t183)*(t168*(-t161+r2*t7*t9*t213+r5*t13*t15*t217+r8*t19*t21*t221+r2*t56*t140*t199*2.0)-t177*(-t170+r3*t7*t9*t213+r6*t13*t15*t217+r9*t19*t21*t221+r3*t56*t140*t199*2.0)+t164*(-t165+r3*t7*t9*t233+r6*t13*t15*t237+r9*t19*t21*t241+r3*t56*t152*t199*2.0)-t173*(-t174+r2*t7*t9*t233+r5*t13*t15*t237+r8*t19*t21*t241+r2*t56*t152*t199*2.0))*(1.0/2.0);

return t0;
}

#endif