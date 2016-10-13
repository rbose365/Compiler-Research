#include "C.h"
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void evaluate(const C<double>* x, C<double>*y) {

	C<double> ii = C<double>(0, 1.0);
	C<double> X0 = x[0];
	C<double> X1 = x[1];
	C<double> X2 = x[2];
	C<double> X3 = x[3];
	C<double> C0 = 1;
	C<double> C1 = -1;
	C<double> G0 = C1 * X3;
	C<double> G1 = C0 + G0;
	C<double> C2 = ii*.581188 + .573186;
	C<double> G2 = X0 * X0 * X0 * X0 * X0 * X0;
	C<double> G3 = G2 + G2 + G2 + G2 + G2 + G2 + G2;
	C<double> G4 = C2 * G3;
	C<double> C3 = ii*.790151 + .587782;
	C<double> G5 = X0 * X0 * X0 * X0 * X0;
	C<double> G6 = G5 + G5 + G5 + G5 + G5 + G5;
	C<double> G7 = X1 * G6;
	C<double> G8 = C3 * G7;
	C<double> C4 = ii*.080529 + .691075;
	C<double> G9 = X1 * X1;
	C<double> G10 = X0 * X0 * X0 * X0;
	C<double> G11 = G10 + G10 + G10 + G10 + G10;
	C<double> G12 = G9 * G11;
	C<double> G13 = C4 * G12;
	C<double> C5 = ii*.641663 + .585336;
	C<double> G14 = X1 * X1 * X1;
	C<double> G15 = X0 * X0 * X0;
	C<double> G16 = G15 + G15 + G15 + G15;
	C<double> G17 = G14 * G16;
	C<double> G18 = C5 * G17;
	C<double> C6 = ii*.881246 + .735968;
	C<double> G19 = X1 * X1 * X1 * X1;
	C<double> G20 = X0 * X0;
	C<double> G21 = G20 + G20 + G20;
	C<double> G22 = G19 * G21;
	C<double> G23 = C6 * G22;
	C<double> C7 = ii*.719313 + .84781;
	C<double> G24 = X1 * X1 * X1 * X1 * X1;
	C<double> G25 = X0 + X0;
	C<double> G26 = G24 * G25;
	C<double> G27 = C7 * G26;
	C<double> C8 = ii*.945552 + .633293;
	C<double> G28 = X1 * X1 * X1 * X1 * X1 * X1;
	C<double> G29 = C8 * G28;
	C<double> C9 = ii*.194366 + .0163517;
	C<double> G30 = X2 * G6;
	C<double> G31 = C9 * G30;
	C<double> C10 = ii*.832016 + .925231;
	C<double> G32 = X1 * G11;
	C<double> G33 = X2 * G32;
	C<double> G34 = C10 * G33;
	C<double> C11 = ii*.496309 + .221757;
	C<double> G35 = G9 * G16;
	C<double> G36 = X2 * G35;
	C<double> G37 = C11 * G36;
	C<double> C12 = ii*.87532 + .073878;
	C<double> G38 = G14 * G21;
	C<double> G39 = X2 * G38;
	C<double> G40 = C12 * G39;
	C<double> C13 = ii*.150661 + .510134;
	C<double> G41 = G19 * G25;
	C<double> G42 = X2 * G41;
	C<double> G43 = C13 * G42;
	C<double> C14 = ii*.735922 + .849069;
	C<double> G44 = X2 * G24;
	C<double> G45 = C14 * G44;
	C<double> C15 = ii*.402819 + .964649;
	C<double> G46 = X2 * X2;
	C<double> G47 = G46 * G11;
	C<double> G48 = C15 * G47;
	C<double> C16 = ii*.50488 + .183809;
	C<double> G49 = X1 * G16;
	C<double> G50 = G46 * G49;
	C<double> G51 = C16 * G50;
	C<double> C17 = ii*.895827 + .205366;
	C<double> G52 = G9 * G21;
	C<double> G53 = G46 * G52;
	C<double> G54 = C17 * G53;
	C<double> C18 = ii*.382083 + .310822;
	C<double> G55 = G14 * G25;
	C<double> G56 = G46 * G55;
	C<double> G57 = C18 * G56;
	C<double> C19 = ii*.56013 + .732857;
	C<double> G58 = G46 * G19;
	C<double> G59 = C19 * G58;
	C<double> C20 = ii*.0665265 + .037532;
	C<double> G60 = X2 * X2 * X2;
	C<double> G61 = G60 * G16;
	C<double> G62 = C20 * G61;
	C<double> C21 = ii*.946994 + .743768;
	C<double> G63 = X1 * G21;
	C<double> G64 = G60 * G63;
	C<double> G65 = C21 * G64;
	C<double> C22 = ii*.035853 + .912066;
	C<double> G66 = G9 * G25;
	C<double> G67 = G60 * G66;
	C<double> G68 = C22 * G67;
	C<double> C23 = ii*.117446 + .726668;
	C<double> G69 = G60 * G14;
	C<double> G70 = C23 * G69;
	C<double> C24 = ii*.30554 + .330129;
	C<double> G71 = X2 * X2 * X2 * X2;
	C<double> G72 = G71 * G21;
	C<double> G73 = C24 * G72;
	C<double> C25 = ii*.789391 + .587666;
	C<double> G74 = X1 * G25;
	C<double> G75 = G71 * G74;
	C<double> G76 = C25 * G75;
	C<double> C26 = ii*.0885911 + .195043;
	C<double> G77 = G71 * G9;
	C<double> G78 = C26 * G77;
	C<double> C27 = ii*.417894 + .762351;
	C<double> G79 = X2 * X2 * X2 * X2 * X2;
	C<double> G80 = G79 * G25;
	C<double> G81 = C27 * G80;
	C<double> C28 = ii*.295272 + .47304;
	C<double> G82 = G79 * X1;
	C<double> G83 = C28 * G82;
	C<double> C29 = ii*.919262 + .233402;
	C<double> G84 = X2 * X2 * X2 * X2 * X2 * X2;
	C<double> G85 = C29 * G84;
	C<double> G86 = G4 + G8 + G13 + G18 + G23 + G27 + G29 + G31 + G34 + G37 + G40 + G43 + G45 + G48 + G51 + G54 + G57 + G59 + G62 + G65 + G68 + G70 + G73 + G76 + G78 + G81 + G83 + G85;
	C<double> G87 = G1 * G86;
	C<double> G88 = X3 * G3;
	C<double> G89 = G87 + G88;
	C<double> G90 = C3 * G2;
	C<double> G91 = X1 + X1;
	C<double> G92 = G5 * G91;
	C<double> G93 = C4 * G92;
	C<double> G94 = G9 + G9 + G9;
	C<double> G95 = G10 * G94;
	C<double> G96 = C5 * G95;
	C<double> G97 = G14 + G14 + G14 + G14;
	C<double> G98 = G15 * G97;
	C<double> G99 = C6 * G98;
	C<double> G100 = G19 + G19 + G19 + G19 + G19;
	C<double> G101 = G20 * G100;
	C<double> G102 = C7 * G101;
	C<double> G103 = G24 + G24 + G24 + G24 + G24 + G24;
	C<double> G104 = X0 * G103;
	C<double> G105 = C8 * G104;
	C<double> C30 = ii*.062096 + .673154;
	C<double> G106 = G28 + G28 + G28 + G28 + G28 + G28 + G28;
	C<double> G107 = C30 * G106;
	C<double> G108 = X2 * G5;
	C<double> G109 = C10 * G108;
	C<double> G110 = G10 * G91;
	C<double> G111 = X2 * G110;
	C<double> G112 = C11 * G111;
	C<double> G113 = G15 * G94;
	C<double> G114 = X2 * G113;
	C<double> G115 = C12 * G114;
	C<double> G116 = G20 * G97;
	C<double> G117 = X2 * G116;
	C<double> G118 = C13 * G117;
	C<double> G119 = X0 * G100;
	C<double> G120 = X2 * G119;
	C<double> G121 = C14 * G120;
	C<double> C31 = ii*.909131 + .064005;
	C<double> G122 = X2 * G103;
	C<double> G123 = C31 * G122;
	C<double> G124 = G46 * G10;
	C<double> G125 = C16 * G124;
	C<double> G126 = G15 * G91;
	C<double> G127 = G46 * G126;
	C<double> G128 = C17 * G127;
	C<double> G129 = G20 * G94;
	C<double> G130 = G46 * G129;
	C<double> G131 = C18 * G130;
	C<double> G132 = X0 * G97;
	C<double> G133 = G46 * G132;
	C<double> G134 = C19 * G133;
	C<double> C32 = ii*.611165 + .923006;
	C<double> G135 = G46 * G100;
	C<double> G136 = C32 * G135;
	C<double> G137 = G60 * G15;
	C<double> G138 = C21 * G137;
	C<double> G139 = G20 * G91;
	C<double> G140 = G60 * G139;
	C<double> G141 = C22 * G140;
	C<double> G142 = X0 * G94;
	C<double> G143 = G60 * G142;
	C<double> G144 = C23 * G143;
	C<double> C33 = ii*.29681 + .656417;
	C<double> G145 = G60 * G97;
	C<double> G146 = C33 * G145;
	C<double> G147 = G71 * G20;
	C<double> G148 = C25 * G147;
	C<double> G149 = X0 * G91;
	C<double> G150 = G71 * G149;
	C<double> G151 = C26 * G150;
	C<double> C34 = ii*.980915 + .72882;
	C<double> G152 = G71 * G94;
	C<double> G153 = C34 * G152;
	C<double> G154 = G79 * X0;
	C<double> G155 = C28 * G154;
	C<double> C35 = ii*.170499 + .074373;
	C<double> G156 = G79 * G91;
	C<double> G157 = C35 * G156;
	C<double> C36 = ii*.284793 + .539016;
	C<double> G158 = C36 * G84;
	C<double> G159 = G90 + G93 + G96 + G99 + G102 + G105 + G107 + G109 + G112 + G115 + G118 + G121 + G123 + G125 + G128 + G131 + G134 + G136 + G138 + G141 + G144 + G146 + G148 + G151 + G153 + G155 + G157 + G158;
	C<double> G160 = G1 * G159;
	C<double> G161 = C9 * G2;
	C<double> G162 = G5 * X1;
	C<double> G163 = C10 * G162;
	C<double> G164 = G10 * G9;
	C<double> G165 = C11 * G164;
	C<double> G166 = G15 * G14;
	C<double> G167 = C12 * G166;
	C<double> G168 = G20 * G19;
	C<double> G169 = C13 * G168;
	C<double> G170 = X0 * G24;
	C<double> G171 = C14 * G170;
	C<double> G172 = C31 * G28;
	C<double> G173 = X2 + X2;
	C<double> G174 = G5 * G173;
	C<double> G175 = C15 * G174;
	C<double> G176 = G10 * X1;
	C<double> G177 = G176 * G173;
	C<double> G178 = C16 * G177;
	C<double> G179 = G15 * G9;
	C<double> G180 = G179 * G173;
	C<double> G181 = C17 * G180;
	C<double> G182 = G20 * G14;
	C<double> G183 = G182 * G173;
	C<double> G184 = C18 * G183;
	C<double> G185 = X0 * G19;
	C<double> G186 = G185 * G173;
	C<double> G187 = C19 * G186;
	C<double> G188 = G24 * G173;
	C<double> G189 = C32 * G188;
	C<double> G190 = G46 + G46 + G46;
	C<double> G191 = G10 * G190;
	C<double> G192 = C20 * G191;
	C<double> G193 = G15 * X1;
	C<double> G194 = G193 * G190;
	C<double> G195 = C21 * G194;
	C<double> G196 = G20 * G9;
	C<double> G197 = G196 * G190;
	C<double> G198 = C22 * G197;
	C<double> G199 = X0 * G14;
	C<double> G200 = G199 * G190;
	C<double> G201 = C23 * G200;
	C<double> G202 = G19 * G190;
	C<double> G203 = C33 * G202;
	C<double> G204 = G60 + G60 + G60 + G60;
	C<double> G205 = G15 * G204;
	C<double> G206 = C24 * G205;
	C<double> G207 = G20 * X1;
	C<double> G208 = G207 * G204;
	C<double> G209 = C25 * G208;
	C<double> G210 = X0 * G9;
	C<double> G211 = G210 * G204;
	C<double> G212 = C26 * G211;
	C<double> G213 = G14 * G204;
	C<double> G214 = C34 * G213;
	C<double> G215 = G71 + G71 + G71 + G71 + G71;
	C<double> G216 = G20 * G215;
	C<double> G217 = C27 * G216;
	C<double> G218 = X0 * X1;
	C<double> G219 = G218 * G215;
	C<double> G220 = C28 * G219;
	C<double> G221 = G9 * G215;
	C<double> G222 = C35 * G221;
	C<double> G223 = G79 + G79 + G79 + G79 + G79 + G79;
	C<double> G224 = X0 * G223;
	C<double> G225 = C29 * G224;
	C<double> G226 = X1 * G223;
	C<double> G227 = C36 * G226;
	C<double> C37 = ii*.680219 + .513975;
	C<double> G228 = G84 + G84 + G84 + G84 + G84 + G84 + G84;
	C<double> G229 = C37 * G228;
	C<double> G230 = G161 + G163 + G165 + G167 + G169 + G171 + G172 + G175 + G178 + G181 + G184 + G187 + G189 + G192 + G195 + G198 + G201 + G203 + G206 + G209 + G212 + G214 + G217 + G220 + G222 + G225 + G227 + G229;
	C<double> G231 = G1 * G230;
	C<double> C38 = -1;
	C<double> G232 = X0 * X0 * X0 * X0 * X0 * X0 * X0;
	C<double> G233 = C2 * G232;
	C<double> G234 = G2 * X1;
	C<double> G235 = C3 * G234;
	C<double> G236 = G5 * G9;
	C<double> G237 = C4 * G236;
	C<double> G238 = G10 * G14;
	C<double> G239 = C5 * G238;
	C<double> G240 = G15 * G19;
	C<double> G241 = C6 * G240;
	C<double> G242 = G20 * G24;
	C<double> G243 = C7 * G242;
	C<double> G244 = X0 * G28;
	C<double> G245 = C8 * G244;
	C<double> G246 = X1 * X1 * X1 * X1 * X1 * X1 * X1;
	C<double> G247 = C30 * G246;
	C<double> G248 = G2 * X2;
	C<double> G249 = C9 * G248;
	C<double> G250 = G162 * X2;
	C<double> G251 = C10 * G250;
	C<double> G252 = G164 * X2;
	C<double> G253 = C11 * G252;
	C<double> G254 = G166 * X2;
	C<double> G255 = C12 * G254;
	C<double> G256 = G168 * X2;
	C<double> G257 = C13 * G256;
	C<double> G258 = G170 * X2;
	C<double> G259 = C14 * G258;
	C<double> G260 = G28 * X2;
	C<double> G261 = C31 * G260;
	C<double> G262 = G5 * G46;
	C<double> G263 = C15 * G262;
	C<double> G264 = G176 * G46;
	C<double> G265 = C16 * G264;
	C<double> G266 = G179 * G46;
	C<double> G267 = C17 * G266;
	C<double> G268 = G182 * G46;
	C<double> G269 = C18 * G268;
	C<double> G270 = G185 * G46;
	C<double> G271 = C19 * G270;
	C<double> G272 = G24 * G46;
	C<double> G273 = C32 * G272;
	C<double> G274 = G10 * G60;
	C<double> G275 = C20 * G274;
	C<double> G276 = G193 * G60;
	C<double> G277 = C21 * G276;
	C<double> G278 = G196 * G60;
	C<double> G279 = C22 * G278;
	C<double> G280 = G199 * G60;
	C<double> G281 = C23 * G280;
	C<double> G282 = G19 * G60;
	C<double> G283 = C33 * G282;
	C<double> G284 = G15 * G71;
	C<double> G285 = C24 * G284;
	C<double> G286 = G207 * G71;
	C<double> G287 = C25 * G286;
	C<double> G288 = G210 * G71;
	C<double> G289 = C26 * G288;
	C<double> G290 = G14 * G71;
	C<double> G291 = C34 * G290;
	C<double> G292 = G20 * G79;
	C<double> G293 = C27 * G292;
	C<double> G294 = G218 * G79;
	C<double> G295 = C28 * G294;
	C<double> G296 = G9 * G79;
	C<double> G297 = C35 * G296;
	C<double> G298 = X0 * G84;
	C<double> G299 = C29 * G298;
	C<double> G300 = X1 * G84;
	C<double> G301 = C36 * G300;
	C<double> G302 = X2 * X2 * X2 * X2 * X2 * X2 * X2;
	C<double> G303 = C37 * G302;
	C<double> G304 = C38 + G233 + G235 + G237 + G239 + G241 + G243 + G245 + G247 + G249 + G251 + G253 + G255 + G257 + G259 + G261 + G263 + G265 + G267 + G269 + G271 + G273 + G275 + G277 + G279 + G281 + G283 + G285 + G287 + G289 + G291 + G293 + G295 + G297 + G299 + G301 + G303;
	C<double> G305 = C1 * G304;
	C<double> G306 = C38 + G232;
	C<double> G307 = G305 + G306;
	C<double> C39 = ii*.621244 + .978116;
	C<double> G308 = C39 * G3;
	C<double> C40 = ii*.978342 + .624493;
	C<double> G309 = C40 * G7;
	C<double> C41 = ii*.596164 + .698376;
	C<double> G310 = C41 * G12;
	C<double> C42 = ii*.842168 + .071533;
	C<double> G311 = C42 * G17;
	C<double> C43 = ii*.697388 + .477082;
	C<double> G312 = C43 * G22;
	C<double> C44 = ii*.572661 + .607868;
	C<double> G313 = C44 * G26;
	C<double> C45 = ii*.682104 + .59289;
	C<double> G314 = C45 * G28;
	C<double> C46 = ii*.64835 + .585122;
	C<double> G315 = C46 * G30;
	C<double> C47 = ii*.65598 + .580333;
	C<double> G316 = C47 * G33;
	C<double> C48 = ii*.786359 + .535545;
	C<double> G317 = C48 * G36;
	C<double> C49 = ii*.85964 + .81408;
	C<double> G318 = C49 * G39;
	C<double> C50 = ii*.263391 + .617714;
	C<double> G319 = C50 * G42;
	C<double> C51 = ii*.363487 + .266829;
	C<double> G320 = C51 * G44;
	C<double> C52 = ii*.733171 + .763793;
	C<double> G321 = C52 * G47;
	C<double> C53 = ii*.637346 + .396892;
	C<double> G322 = C53 * G50;
	C<double> C54 = ii*.469632 + .795424;
	C<double> G323 = C54 * G53;
	C<double> C55 = ii*.3311 + .0455256;
	C<double> G324 = C55 * G56;
	C<double> C56 = ii*.064171 + .549935;
	C<double> G325 = C56 * G58;
	C<double> C57 = ii*.735774 + .70524;
	C<double> G326 = C57 * G61;
	C<double> C58 = ii*.960423 + .045167;
	C<double> G327 = C58 * G64;
	C<double> C59 = ii*.397262 + .16528;
	C<double> G328 = C59 * G67;
	C<double> C60 = ii*.308977 + .858763;
	C<double> G329 = C60 * G69;
	C<double> C61 = ii*.013529 + .886043;
	C<double> G330 = C61 * G72;
	C<double> C62 = ii*.94197 + .769649;
	C<double> G331 = C62 * G75;
	C<double> C63 = ii*.237388 + .0918114;
	C<double> G332 = C63 * G77;
	C<double> C64 = ii*.58311 + .61542;
	C<double> G333 = C64 * G80;
	C<double> C65 = ii*.695927 + .79771;
	C<double> G334 = C65 * G82;
	C<double> C66 = ii*.687947 + .489283;
	C<double> G335 = C66 * G84;
	C<double> G336 = G308 + G309 + G310 + G311 + G312 + G313 + G314 + G315 + G316 + G317 + G318 + G319 + G320 + G321 + G322 + G323 + G324 + G325 + G326 + G327 + G328 + G329 + G330 + G331 + G332 + G333 + G334 + G335;
	C<double> G337 = G1 * G336;
	C<double> G338 = C40 * G2;
	C<double> G339 = C41 * G92;
	C<double> G340 = C42 * G95;
	C<double> G341 = C43 * G98;
	C<double> G342 = C44 * G101;
	C<double> G343 = C45 * G104;
	C<double> C67 = ii*.17814 + .223712;
	C<double> G344 = C67 * G106;
	C<double> G345 = C47 * G108;
	C<double> G346 = C48 * G111;
	C<double> G347 = C49 * G114;
	C<double> G348 = C50 * G117;
	C<double> G349 = C51 * G120;
	C<double> C68 = ii*.907635 + .196909;
	C<double> G350 = C68 * G122;
	C<double> G351 = C53 * G124;
	C<double> G352 = C54 * G127;
	C<double> G353 = C55 * G130;
	C<double> G354 = C56 * G133;
	C<double> C69 = ii*.715414 + .222358;
	C<double> G355 = C69 * G135;
	C<double> G356 = C58 * G137;
	C<double> G357 = C59 * G140;
	C<double> G358 = C60 * G143;
	C<double> C70 = ii*.67698 + .520302;
	C<double> G359 = C70 * G145;
	C<double> G360 = C62 * G147;
	C<double> G361 = C63 * G150;
	C<double> C71 = ii*.230319 + .467793;
	C<double> G362 = C71 * G152;
	C<double> G363 = C65 * G154;
	C<double> C72 = ii*.580576 + .003906;
	C<double> G364 = C72 * G156;
	C<double> C73 = ii*.482612 + .654302;
	C<double> G365 = C73 * G84;
	C<double> G366 = G338 + G339 + G340 + G341 + G342 + G343 + G344 + G345 + G346 + G347 + G348 + G349 + G350 + G351 + G352 + G353 + G354 + G355 + G356 + G357 + G358 + G359 + G360 + G361 + G362 + G363 + G364 + G365;
	C<double> G367 = G1 * G366;
	C<double> G368 = X3 * G106;
	C<double> G369 = G367 + G368;
	C<double> G370 = C46 * G2;
	C<double> G371 = C47 * G162;
	C<double> G372 = C48 * G164;
	C<double> G373 = C49 * G166;
	C<double> G374 = C50 * G168;
	C<double> G375 = C51 * G170;
	C<double> G376 = C68 * G28;
	C<double> G377 = C52 * G174;
	C<double> G378 = C53 * G177;
	C<double> G379 = C54 * G180;
	C<double> G380 = C55 * G183;
	C<double> G381 = C56 * G186;
	C<double> G382 = C69 * G188;
	C<double> G383 = C57 * G191;
	C<double> G384 = C58 * G194;
	C<double> G385 = C59 * G197;
	C<double> G386 = C60 * G200;
	C<double> G387 = C70 * G202;
	C<double> G388 = C61 * G205;
	C<double> G389 = C62 * G208;
	C<double> G390 = C63 * G211;
	C<double> G391 = C71 * G213;
	C<double> G392 = C64 * G216;
	C<double> G393 = C65 * G219;
	C<double> G394 = C72 * G221;
	C<double> G395 = C66 * G224;
	C<double> G396 = C73 * G226;
	C<double> C74 = ii*.298136 + .0301501;
	C<double> G397 = C74 * G228;
	C<double> G398 = G370 + G371 + G372 + G373 + G374 + G375 + G376 + G377 + G378 + G379 + G380 + G381 + G382 + G383 + G384 + G385 + G386 + G387 + G388 + G389 + G390 + G391 + G392 + G393 + G394 + G395 + G396 + G397;
	C<double> G399 = G1 * G398;
	C<double> G400 = C39 * G232;
	C<double> G401 = C40 * G234;
	C<double> G402 = C41 * G236;
	C<double> G403 = C42 * G238;
	C<double> G404 = C43 * G240;
	C<double> G405 = C44 * G242;
	C<double> G406 = C45 * G244;
	C<double> G407 = C67 * G246;
	C<double> G408 = C46 * G248;
	C<double> G409 = C47 * G250;
	C<double> G410 = C48 * G252;
	C<double> G411 = C49 * G254;
	C<double> G412 = C50 * G256;
	C<double> G413 = C51 * G258;
	C<double> G414 = C68 * G260;
	C<double> G415 = C52 * G262;
	C<double> G416 = C53 * G264;
	C<double> G417 = C54 * G266;
	C<double> G418 = C55 * G268;
	C<double> G419 = C56 * G270;
	C<double> G420 = C69 * G272;
	C<double> G421 = C57 * G274;
	C<double> G422 = C58 * G276;
	C<double> G423 = C59 * G278;
	C<double> G424 = C60 * G280;
	C<double> G425 = C70 * G282;
	C<double> G426 = C61 * G284;
	C<double> G427 = C62 * G286;
	C<double> G428 = C63 * G288;
	C<double> G429 = C71 * G290;
	C<double> G430 = C64 * G292;
	C<double> G431 = C65 * G294;
	C<double> G432 = C72 * G296;
	C<double> G433 = C66 * G298;
	C<double> G434 = C73 * G300;
	C<double> G435 = C74 * G302;
	C<double> G436 = C38 + G400 + G401 + G402 + G403 + G404 + G405 + G406 + G407 + G408 + G409 + G410 + G411 + G412 + G413 + G414 + G415 + G416 + G417 + G418 + G419 + G420 + G421 + G422 + G423 + G424 + G425 + G426 + G427 + G428 + G429 + G430 + G431 + G432 + G433 + G434 + G435;
	C<double> G437 = C1 * G436;
	C<double> G438 = C38 + G246;
	C<double> G439 = G437 + G438;
	C<double> C75 = ii*.372683 + .121341;
	C<double> G440 = C75 * G3;
	C<double> C76 = ii*.538202 + .571766;
	C<double> G441 = C76 * G7;
	C<double> C77 = ii*.748689 + .844596;
	C<double> G442 = C77 * G12;
	C<double> C78 = ii*.798316 + .062270;
	C<double> G443 = C78 * G17;
	C<double> C79 = ii*.0482854 + .268195;
	C<double> G444 = C79 * G22;
	C<double> C80 = ii*.725498 + .103703;
	C<double> G445 = C80 * G26;
	C<double> C81 = ii*.631094 + .536891;
	C<double> G446 = C81 * G28;
	C<double> C82 = ii*.021958 + .666359;
	C<double> G447 = C82 * G30;
	C<double> C83 = ii*.693595 + .170176;
	C<double> G448 = C83 * G33;
	C<double> C84 = ii*.647276 + .18467;
	C<double> G449 = C84 * G36;
	C<double> C85 = ii*.69639 + .107882;
	C<double> G450 = C85 * G39;
	C<double> C86 = ii*.211784 + .634153;
	C<double> G451 = C86 * G42;
	C<double> C87 = ii*.663049 + .100853;
	C<double> G452 = C87 * G44;
	C<double> C88 = ii*.497735 + .505518;
	C<double> G453 = C88 * G47;
	C<double> C89 = ii*.758929 + .313402;
	C<double> G454 = C89 * G50;
	C<double> C90 = ii*.0494646 + .124036;
	C<double> G455 = C90 * G53;
	C<double> C91 = ii*.759652 + .008951;
	C<double> G456 = C91 * G56;
	C<double> C92 = ii*.813473 + .887892;
	C<double> G457 = C92 * G58;
	C<double> C93 = ii*.781588 + .260159;
	C<double> G458 = C93 * G61;
	C<double> C94 = ii*.951544 + .935048;
	C<double> G459 = C94 * G64;
	C<double> C95 = ii*.484489 + .441183;
	C<double> G460 = C95 * G67;
	C<double> C96 = ii*.783743 + .024147;
	C<double> G461 = C96 * G69;
	C<double> C97 = ii*.707677 + .816337;
	C<double> G462 = C97 * G72;
	C<double> C98 = ii*.672001 + .310448;
	C<double> G463 = C98 * G75;
	C<double> C99 = ii*.205743 + .259909;
	C<double> G464 = C99 * G77;
	C<double> C100 = ii*.951631 + .112719;
	C<double> G465 = C100 * G80;
	C<double> C101 = ii*.12316 + .804292;
	C<double> G466 = C101 * G82;
	C<double> C102 = ii*.735328 + .294496;
	C<double> G467 = C102 * G84;
	C<double> G468 = G440 + G441 + G442 + G443 + G444 + G445 + G446 + G447 + G448 + G449 + G450 + G451 + G452 + G453 + G454 + G455 + G456 + G457 + G458 + G459 + G460 + G461 + G462 + G463 + G464 + G465 + G466 + G467;
	C<double> G469 = G1 * G468;
	C<double> G470 = C76 * G2;
	C<double> G471 = C77 * G92;
	C<double> G472 = C78 * G95;
	C<double> G473 = C79 * G98;
	C<double> G474 = C80 * G101;
	C<double> G475 = C81 * G104;
	C<double> C103 = ii*.654348 + .872779;
	C<double> G476 = C103 * G106;
	C<double> G477 = C83 * G108;
	C<double> G478 = C84 * G111;
	C<double> G479 = C85 * G114;
	C<double> G480 = C86 * G117;
	C<double> G481 = C87 * G120;
	C<double> C104 = ii*.84483 + .684511;
	C<double> G482 = C104 * G122;
	C<double> G483 = C89 * G124;
	C<double> G484 = C90 * G127;
	C<double> G485 = C91 * G130;
	C<double> G486 = C92 * G133;
	C<double> C105 = ii*.862198 + .330633;
	C<double> G487 = C105 * G135;
	C<double> G488 = C94 * G137;
	C<double> G489 = C95 * G140;
	C<double> G490 = C96 * G143;
	C<double> C106 = ii*.996562 + .160571;
	C<double> G491 = C106 * G145;
	C<double> G492 = C98 * G147;
	C<double> G493 = C99 * G150;
	C<double> C107 = ii*.443849 + .200395;
	C<double> G494 = C107 * G152;
	C<double> G495 = C101 * G154;
	C<double> C108 = ii*.740074 + .142941;
	C<double> G496 = C108 * G156;
	C<double> C109 = ii*.560138 + .295823;
	C<double> G497 = C109 * G84;
	C<double> G498 = G470 + G471 + G472 + G473 + G474 + G475 + G476 + G477 + G478 + G479 + G480 + G481 + G482 + G483 + G484 + G485 + G486 + G487 + G488 + G489 + G490 + G491 + G492 + G493 + G494 + G495 + G496 + G497;
	C<double> G499 = G1 * G498;
	C<double> G500 = C82 * G2;
	C<double> G501 = C83 * G162;
	C<double> G502 = C84 * G164;
	C<double> G503 = C85 * G166;
	C<double> G504 = C86 * G168;
	C<double> G505 = C87 * G170;
	C<double> G506 = C104 * G28;
	C<double> G507 = C88 * G174;
	C<double> G508 = C89 * G177;
	C<double> G509 = C90 * G180;
	C<double> G510 = C91 * G183;
	C<double> G511 = C92 * G186;
	C<double> G512 = C105 * G188;
	C<double> G513 = C93 * G191;
	C<double> G514 = C94 * G194;
	C<double> G515 = C95 * G197;
	C<double> G516 = C96 * G200;
	C<double> G517 = C106 * G202;
	C<double> G518 = C97 * G205;
	C<double> G519 = C98 * G208;
	C<double> G520 = C99 * G211;
	C<double> G521 = C107 * G213;
	C<double> G522 = C100 * G216;
	C<double> G523 = C101 * G219;
	C<double> G524 = C108 * G221;
	C<double> G525 = C102 * G224;
	C<double> G526 = C109 * G226;
	C<double> C110 = ii*.176855 + .957764;
	C<double> G527 = C110 * G228;
	C<double> G528 = G500 + G501 + G502 + G503 + G504 + G505 + G506 + G507 + G508 + G509 + G510 + G511 + G512 + G513 + G514 + G515 + G516 + G517 + G518 + G519 + G520 + G521 + G522 + G523 + G524 + G525 + G526 + G527;
	C<double> G529 = G1 * G528;
	C<double> G530 = X3 * G228;
	C<double> G531 = G529 + G530;
	C<double> G532 = C75 * G232;
	C<double> G533 = C76 * G234;
	C<double> G534 = C77 * G236;
	C<double> G535 = C78 * G238;
	C<double> G536 = C79 * G240;
	C<double> G537 = C80 * G242;
	C<double> G538 = C81 * G244;
	C<double> G539 = C103 * G246;
	C<double> G540 = C82 * G248;
	C<double> G541 = C83 * G250;
	C<double> G542 = C84 * G252;
	C<double> G543 = C85 * G254;
	C<double> G544 = C86 * G256;
	C<double> G545 = C87 * G258;
	C<double> G546 = C104 * G260;
	C<double> G547 = C88 * G262;
	C<double> G548 = C89 * G264;
	C<double> G549 = C90 * G266;
	C<double> G550 = C91 * G268;
	C<double> G551 = C92 * G270;
	C<double> G552 = C105 * G272;
	C<double> G553 = C93 * G274;
	C<double> G554 = C94 * G276;
	C<double> G555 = C95 * G278;
	C<double> G556 = C96 * G280;
	C<double> G557 = C106 * G282;
	C<double> G558 = C97 * G284;
	C<double> G559 = C98 * G286;
	C<double> G560 = C99 * G288;
	C<double> G561 = C107 * G290;
	C<double> G562 = C100 * G292;
	C<double> G563 = C101 * G294;
	C<double> G564 = C108 * G296;
	C<double> G565 = C102 * G298;
	C<double> G566 = C109 * G300;
	C<double> G567 = C110 * G302;
	C<double> G568 = C38 + G532 + G533 + G534 + G535 + G536 + G537 + G538 + G539 + G540 + G541 + G542 + G543 + G544 + G545 + G546 + G547 + G548 + G549 + G550 + G551 + G552 + G553 + G554 + G555 + G556 + G557 + G558 + G559 + G560 + G561 + G562 + G563 + G564 + G565 + G566 + G567;
	C<double> G569 = C1 * G568;
	C<double> G570 = C38 + G302;
	C<double> G571 = G569 + G570;
	y[0] = G89;
	y[1] = G160;
	y[2] = G231;
	y[3] = G307;
	y[4] = G337;
	y[5] = G369;
	y[6] = G399;
	y[7] = G439;
	y[8] = G469;
	y[9] = G499;
	y[10] = G531;
	y[11] = G571;
}

int main() {
	int numRuns = 1000000;
	C<double> x[4] = {C<double>(rand(), rand()), C<double>(rand(), rand()), C<double>(rand(), rand()), C<double>(rand(), rand())};
	C<double>* y = (C<double>*) malloc(sizeof(C<double>) * 12);

	FILE * timeFile;
	timeFile = fopen("GCCTests/-Og-2.txt", "w");
	double avg = 0;

	for (int i = 0; i < numRuns; ++i) {
		//fprintf(timeFile, "Run:%i\n", i);
		clock_t startTime = clock();

		evaluate(x, y);

		clock_t endTime = clock();
		clock_t clockTicksTaken = endTime - startTime;
		double timeInSeconds = clockTicksTaken / (double) CLOCKS_PER_SEC;
		
		avg += timeInSeconds;

		//fprintf(timeFile, "Time: %f\n", timeInSeconds);

		// printf("G18: %f + %f i\n G29: %f + %f i\n G40: %f + %f i\n",
		// 	y[0].getReal(), y[0].getComplex(), y[1].getReal(),
		// 	y[1].getComplex(), y[2].getReal(), y[2].getComplex());

		//fprintf(timeFile, "\n");
	}
	fprintf(timeFile, "Total run time = %fs\n", avg);
	fprintf(timeFile, "Number of Runs = %i\n", numRuns);
	avg /= numRuns;
	fprintf(timeFile, "Average run time = %fs\n", avg);
	fprintf(timeFile, "\nCompilation Time:\n");

	fclose(timeFile);
}