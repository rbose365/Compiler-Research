-- warning: experimental computation over inexact field begun
--          results not reliable (one warning given per session)
void evaluate(const C* x, C* y) {
C X0 = x[0];
C X1 = x[1];
C X2 = x[2];
C X3 = x[3];
C C0 = 1;
C C1 = -1;
C G0 = C1 * X3;
C G1 = C0 + G0;
C C2 = .889499+.321051*ii;
C G2 = X0 * X0 * X0 * X0 * X0;
C G3 = G2 + G2 + G2 + G2 + G2 + G2;
C G4 = C2 * G3;
C C3 = .002941+.816925*ii;
C G5 = X0 * X0 * X0 * X0;
C G6 = G5 + G5 + G5 + G5 + G5;
C G7 = X1 * G6;
C G8 = C3 * G7;
C C4 = .359687+.635733*ii;
C G9 = X1 * X1;
C G10 = X0 * X0 * X0;
C G11 = G10 + G10 + G10 + G10;
C G12 = G9 * G11;
C G13 = C4 * G12;
C C5 = .100522+.413691*ii;
C G14 = X1 * X1 * X1;
C G15 = X0 * X0;
C G16 = G15 + G15 + G15;
C G17 = G14 * G16;
C G18 = C5 * G17;
C C6 = .0850715+.0646344*ii;
C G19 = X1 * X1 * X1 * X1;
C G20 = X0 + X0;
C G21 = G19 * G20;
C G22 = C6 * G21;
C C7 = .268992+.694228*ii;
C G23 = X1 * X1 * X1 * X1 * X1;
C G24 = C7 * G23;
C C8 = .249814+.587358*ii;
C G25 = X2 * G6;
C G26 = C8 * G25;
C C9 = .426943+.405105*ii;
C G27 = X1 * G11;
C G28 = X2 * G27;
C G29 = C9 * G28;
C C10 = .550576+.657535*ii;
C G30 = G9 * G16;
C G31 = X2 * G30;
C G32 = C10 * G31;
C C11 = .193945+.48535*ii;
C G33 = G14 * G20;
C G34 = X2 * G33;
C G35 = C11 * G34;
C C12 = .702217+.139386*ii;
C G36 = X2 * G19;
C G37 = C12 * G36;
C C13 = .406381+.478121*ii;
C G38 = X2 * X2;
C G39 = G38 * G11;
C G40 = C13 * G39;
C C14 = .312918+.362345*ii;
C G41 = X1 * G16;
C G42 = G38 * G41;
C G43 = C14 * G42;
C C15 = .206178+.521883*ii;
C G44 = G9 * G20;
C G45 = G38 * G44;
C G46 = C15 * G45;
C C16 = .529893+.99883*ii;
C G47 = G38 * G14;
C G48 = C16 * G47;
C C17 = .711079+.250254*ii;
C G49 = X2 * X2 * X2;
C G50 = G49 * G16;
C G51 = C17 * G50;
C C18 = .348179+.76817*ii;
C G52 = X1 * G20;
C G53 = G49 * G52;
C G54 = C18 * G53;
C C19 = .867584+.403914*ii;
C G55 = G49 * G9;
C G56 = C19 * G55;
C C20 = .684643+.081974*ii;
C G57 = X2 * X2 * X2 * X2;
C G58 = G57 * G20;
C G59 = C20 * G58;
C C21 = .653409+.474245*ii;
C G60 = G57 * X1;
C G61 = C21 * G60;
C C22 = .746806+.103199*ii;
C G62 = X2 * X2 * X2 * X2 * X2;
C G63 = C22 * G62;
C G64 = G4 + G8 + G13 + G18 + G22 + G24 + G26 + G29 + G32 + G35 + G37 + G40 + G43 + G46 + G48 + G51 + G54 + G56 + G59 + G61 + G63;
C G65 = G1 * G64;
C G66 = X3 * G3;
C G67 = G65 + G66;
C G68 = C3 * G2;
C G69 = X1 + X1;
C G70 = G5 * G69;
C G71 = C4 * G70;
C G72 = G9 + G9 + G9;
C G73 = G10 * G72;
C G74 = C5 * G73;
C G75 = G14 + G14 + G14 + G14;
C G76 = G15 * G75;
C G77 = C6 * G76;
C G78 = G19 + G19 + G19 + G19 + G19;
C G79 = X0 * G78;
C G80 = C7 * G79;
C C23 = .199434+.117947*ii;
C G81 = G23 + G23 + G23 + G23 + G23 + G23;
C G82 = C23 * G81;
C G83 = X2 * G5;
C G84 = C9 * G83;
C G85 = G10 * G69;
C G86 = X2 * G85;
C G87 = C10 * G86;
C G88 = G15 * G72;
C G89 = X2 * G88;
C G90 = C11 * G89;
C G91 = X0 * G75;
C G92 = X2 * G91;
C G93 = C12 * G92;
C C24 = .487304+.488508*ii;
C G94 = X2 * G78;
C G95 = C24 * G94;
C G96 = G38 * G10;
C G97 = C14 * G96;
C G98 = G15 * G69;
C G99 = G38 * G98;
C G100 = C15 * G99;
C G101 = X0 * G72;
C G102 = G38 * G101;
C G103 = C16 * G102;
C C25 = .530025+.849026*ii;
C G104 = G38 * G75;
C G105 = C25 * G104;
C G106 = G49 * G15;
C G107 = C18 * G106;
C G108 = X0 * G69;
C G109 = G49 * G108;
C G110 = C19 * G109;
C C26 = .271958+.620621*ii;
C G111 = G49 * G72;
C G112 = C26 * G111;
C G113 = G57 * X0;
C G114 = C21 * G113;
C C27 = .832376+.427364*ii;
C G115 = G57 * G69;
C G116 = C27 * G115;
C C28 = .482592+.847493*ii;
C G117 = C28 * G62;
C G118 = G68 + G71 + G74 + G77 + G80 + G82 + G84 + G87 + G90 + G93 + G95 + G97 + G100 + G103 + G105 + G107 + G110 + G112 + G114 + G116 + G117;
C G119 = G1 * G118;
C G120 = C8 * G2;
C G121 = G5 * X1;
C G122 = C9 * G121;
C G123 = G10 * G9;
C G124 = C10 * G123;
C G125 = G15 * G14;
C G126 = C11 * G125;
C G127 = X0 * G19;
C G128 = C12 * G127;
C G129 = C24 * G23;
C G130 = X2 + X2;
C G131 = G5 * G130;
C G132 = C13 * G131;
C G133 = G10 * X1;
C G134 = G133 * G130;
C G135 = C14 * G134;
C G136 = G15 * G9;
C G137 = G136 * G130;
C G138 = C15 * G137;
C G139 = X0 * G14;
C G140 = G139 * G130;
C G141 = C16 * G140;
C G142 = G19 * G130;
C G143 = C25 * G142;
C G144 = G38 + G38 + G38;
C G145 = G10 * G144;
C G146 = C17 * G145;
C G147 = G15 * X1;
C G148 = G147 * G144;
C G149 = C18 * G148;
C G150 = X0 * G9;
C G151 = G150 * G144;
C G152 = C19 * G151;
C G153 = G14 * G144;
C G154 = C26 * G153;
C G155 = G49 + G49 + G49 + G49;
C G156 = G15 * G155;
C G157 = C20 * G156;
C G158 = X0 * X1;
C G159 = G158 * G155;
C G160 = C21 * G159;
C G161 = G9 * G155;
C G162 = C27 * G161;
C G163 = G57 + G57 + G57 + G57 + G57;
C G164 = X0 * G163;
C G165 = C22 * G164;
C G166 = X1 * G163;
C G167 = C28 * G166;
C C29 = .60282+.951782*ii;
C G168 = G62 + G62 + G62 + G62 + G62 + G62;
C G169 = C29 * G168;
C G170 = G120 + G122 + G124 + G126 + G128 + G129 + G132 + G135 + G138 + G141 + G143 + G146 + G149 + G152 + G154 + G157 + G160 + G162 + G165 + G167 + G169;
C G171 = G1 * G170;
C C30 = -1;
C G172 = X0 * X0 * X0 * X0 * X0 * X0;
C G173 = C2 * G172;
C G174 = G2 * X1;
C G175 = C3 * G174;
C G176 = G5 * G9;
C G177 = C4 * G176;
C G178 = G10 * G14;
C G179 = C5 * G178;
C G180 = G15 * G19;
C G181 = C6 * G180;
C G182 = X0 * G23;
C G183 = C7 * G182;
C G184 = X1 * X1 * X1 * X1 * X1 * X1;
C G185 = C23 * G184;
C G186 = G2 * X2;
C G187 = C8 * G186;
C G188 = G121 * X2;
C G189 = C9 * G188;
C G190 = G123 * X2;
C G191 = C10 * G190;
C G192 = G125 * X2;
C G193 = C11 * G192;
C G194 = G127 * X2;
C G195 = C12 * G194;
C G196 = G23 * X2;
C G197 = C24 * G196;
C G198 = G5 * G38;
C G199 = C13 * G198;
C G200 = G133 * G38;
C G201 = C14 * G200;
C G202 = G136 * G38;
C G203 = C15 * G202;
C G204 = G139 * G38;
C G205 = C16 * G204;
C G206 = G19 * G38;
C G207 = C25 * G206;
C G208 = G10 * G49;
C G209 = C17 * G208;
C G210 = G147 * G49;
C G211 = C18 * G210;
C G212 = G150 * G49;
C G213 = C19 * G212;
C G214 = G14 * G49;
C G215 = C26 * G214;
C G216 = G15 * G57;
C G217 = C20 * G216;
C G218 = G158 * G57;
C G219 = C21 * G218;
C G220 = G9 * G57;
C G221 = C27 * G220;
C G222 = X0 * G62;
C G223 = C22 * G222;
C G224 = X1 * G62;
C G225 = C28 * G224;
C G226 = X2 * X2 * X2 * X2 * X2 * X2;
C G227 = C29 * G226;
C G228 = C30 + G173 + G175 + G177 + G179 + G181 + G183 + G185 + G187 + G189 + G191 + G193 + G195 + G197 + G199 + G201 + G203 + G205 + G207 + G209 + G211 + G213 + G215 + G217 + G219 + G221 + G223 + G225 + G227;
C G229 = C1 * G228;
C G230 = C30 + G172;
C G231 = G229 + G230;
C C31 = .617202+.432211*ii;
C G232 = C31 * G3;
C C32 = .132857+.935498*ii;
C G233 = C32 * G7;
C C33 = .118217+.964249*ii;
C G234 = C33 * G12;
C C34 = .698377+.23314*ii;
C G235 = C34 * G17;
C C35 = .31125+.228825*ii;
C G236 = C35 * G21;
C C36 = .241647+.755534*ii;
C G237 = C36 * G23;
C C37 = .851326+.912018*ii;
C G238 = C37 * G25;
C C38 = .591547+.770096*ii;
C G239 = C38 * G28;
C C39 = .320504+.0374252*ii;
C G240 = C39 * G31;
C C40 = .503407+.18358*ii;
C G241 = C40 * G34;
C C41 = .062198+.725522*ii;
C G242 = C41 * G36;
C C42 = .612146+.982814*ii;
C G243 = C42 * G39;
C C43 = .834618+.836484*ii;
C G244 = C43 * G42;
C C44 = .263823+.407745*ii;
C G245 = C44 * G45;
C C45 = .399711+.82672*ii;
C G246 = C45 * G47;
C C46 = .80244+.5371*ii;
C G247 = C46 * G50;
C C47 = .090708+.690061*ii;
C G248 = C47 * G53;
C C48 = .889634+.115894*ii;
C G249 = C48 * G55;
C C49 = .786238+.036445*ii;
C G250 = C49 * G58;
C C50 = .944545+.00688*ii;
C G251 = C50 * G60;
C C51 = .397678+.633075*ii;
C G252 = C51 * G62;
C G253 = G232 + G233 + G234 + G235 + G236 + G237 + G238 + G239 + G240 + G241 + G242 + G243 + G244 + G245 + G246 + G247 + G248 + G249 + G250 + G251 + G252;
C G254 = G1 * G253;
C G255 = C32 * G2;
C G256 = C33 * G70;
C G257 = C34 * G73;
C G258 = C35 * G76;
C G259 = C36 * G79;
C C52 = .078779+.528938*ii;
C G260 = C52 * G81;
C G261 = C38 * G83;
C G262 = C39 * G86;
C G263 = C40 * G89;
C G264 = C41 * G92;
C C53 = .581998+.321894*ii;
C G265 = C53 * G94;
C G266 = C43 * G96;
C G267 = C44 * G99;
C G268 = C45 * G102;
C C54 = .321922+.34121*ii;
C G269 = C54 * G104;
C G270 = C47 * G106;
C G271 = C48 * G109;
C C55 = .331504+.014021*ii;
C G272 = C55 * G111;
C G273 = C50 * G113;
C C56 = .607958+.205015*ii;
C G274 = C56 * G115;
C C57 = .323626+.325727*ii;
C G275 = C57 * G62;
C G276 = G255 + G256 + G257 + G258 + G259 + G260 + G261 + G262 + G263 + G264 + G265 + G266 + G267 + G268 + G269 + G270 + G271 + G272 + G273 + G274 + G275;
C G277 = G1 * G276;
C G278 = X3 * G81;
C G279 = G277 + G278;
C G280 = C37 * G2;
C G281 = C38 * G121;
C G282 = C39 * G123;
C G283 = C40 * G125;
C G284 = C41 * G127;
C G285 = C53 * G23;
C G286 = C42 * G131;
C G287 = C43 * G134;
C G288 = C44 * G137;
C G289 = C45 * G140;
C G290 = C54 * G142;
C G291 = C46 * G145;
C G292 = C47 * G148;
C G293 = C48 * G151;
C G294 = C55 * G153;
C G295 = C49 * G156;
C G296 = C50 * G159;
C G297 = C56 * G161;
C G298 = C51 * G164;
C G299 = C57 * G166;
C C58 = .536277+.197346*ii;
C G300 = C58 * G168;
C G301 = G280 + G281 + G282 + G283 + G284 + G285 + G286 + G287 + G288 + G289 + G290 + G291 + G292 + G293 + G294 + G295 + G296 + G297 + G298 + G299 + G300;
C G302 = G1 * G301;
C G303 = C31 * G172;
C G304 = C32 * G174;
C G305 = C33 * G176;
C G306 = C34 * G178;
C G307 = C35 * G180;
C G308 = C36 * G182;
C G309 = C52 * G184;
C G310 = C37 * G186;
C G311 = C38 * G188;
C G312 = C39 * G190;
C G313 = C40 * G192;
C G314 = C41 * G194;
C G315 = C53 * G196;
C G316 = C42 * G198;
C G317 = C43 * G200;
C G318 = C44 * G202;
C G319 = C45 * G204;
C G320 = C54 * G206;
C G321 = C46 * G208;
C G322 = C47 * G210;
C G323 = C48 * G212;
C G324 = C55 * G214;
C G325 = C49 * G216;
C G326 = C50 * G218;
C G327 = C56 * G220;
C G328 = C51 * G222;
C G329 = C57 * G224;
C G330 = C58 * G226;
C G331 = C30 + G303 + G304 + G305 + G306 + G307 + G308 + G309 + G310 + G311 + G312 + G313 + G314 + G315 + G316 + G317 + G318 + G319 + G320 + G321 + G322 + G323 + G324 + G325 + G326 + G327 + G328 + G329 + G330;
C G332 = C1 * G331;
C G333 = C30 + G184;
C G334 = G332 + G333;
C C59 = .225728+.870066*ii;
C G335 = C59 * G3;
C C60 = .266864+.0680548*ii;
C G336 = C60 * G7;
C C61 = .310431+.642925*ii;
C G337 = C61 * G12;
C C62 = .715802+.438665*ii;
C G338 = C62 * G17;
C C63 = .679042+.30271*ii;
C G339 = C63 * G21;
C C64 = .833723+.962846*ii;
C G340 = C64 * G23;
C C65 = .541865+.706371*ii;
C G341 = C65 * G25;
C C66 = .321079+.860134*ii;
C G342 = C66 * G28;
C C67 = .087249+.631469*ii;
C G343 = C67 * G31;
C C68 = .441231+.686511*ii;
C G344 = C68 * G34;
C C69 = .945102+.406572*ii;
C G345 = C69 * G36;
C C70 = .348412+.28744*ii;
C G346 = C70 * G39;
C C71 = .744696+.741527*ii;
C G347 = C71 * G42;
C C72 = .510817+.993067*ii;
C G348 = C72 * G45;
C C73 = .952579+.114982*ii;
C G349 = C73 * G47;
C C74 = .932674+.817052*ii;
C G350 = C74 * G50;
C C75 = .154746+.73063*ii;
C G351 = C75 * G53;
C C76 = .967642+.797772*ii;
C G352 = C76 * G55;
C C77 = .186308+.145587*ii;
C G353 = C77 * G58;
C C78 = .46617+.159875*ii;
C G354 = C78 * G60;
C C79 = .746655+.134377*ii;
C G355 = C79 * G62;
C G356 = G335 + G336 + G337 + G338 + G339 + G340 + G341 + G342 + G343 + G344 + G345 + G346 + G347 + G348 + G349 + G350 + G351 + G352 + G353 + G354 + G355;
C G357 = G1 * G356;
C G358 = C60 * G2;
C G359 = C61 * G70;
C G360 = C62 * G73;
C G361 = C63 * G76;
C G362 = C64 * G79;
C C80 = .456779+.270071*ii;
C G363 = C80 * G81;
C G364 = C66 * G83;
C G365 = C67 * G86;
C G366 = C68 * G89;
C G367 = C69 * G92;
C C81 = .517962+.473808*ii;
C G368 = C81 * G94;
C G369 = C71 * G96;
C G370 = C72 * G99;
C G371 = C73 * G102;
C C82 = .8388+.053775*ii;
C G372 = C82 * G104;
C G373 = C75 * G106;
C G374 = C76 * G109;
C C83 = .253473+.324277*ii;
C G375 = C83 * G111;
C G376 = C78 * G113;
C C84 = .100553+.59853*ii;
C G377 = C84 * G115;
C C85 = .844741+.001332*ii;
C G378 = C85 * G62;
C G379 = G358 + G359 + G360 + G361 + G362 + G363 + G364 + G365 + G366 + G367 + G368 + G369 + G370 + G371 + G372 + G373 + G374 + G375 + G376 + G377 + G378;
C G380 = G1 * G379;
C G381 = C65 * G2;
C G382 = C66 * G121;
C G383 = C67 * G123;
C G384 = C68 * G125;
C G385 = C69 * G127;
C G386 = C81 * G23;
C G387 = C70 * G131;
C G388 = C71 * G134;
C G389 = C72 * G137;
C G390 = C73 * G140;
C G391 = C82 * G142;
C G392 = C74 * G145;
C G393 = C75 * G148;
C G394 = C76 * G151;
C G395 = C83 * G153;
C G396 = C77 * G156;
C G397 = C78 * G159;
C G398 = C84 * G161;
C G399 = C79 * G164;
C G400 = C85 * G166;
C C86 = .229574+.68382*ii;
C G401 = C86 * G168;
C G402 = G381 + G382 + G383 + G384 + G385 + G386 + G387 + G388 + G389 + G390 + G391 + G392 + G393 + G394 + G395 + G396 + G397 + G398 + G399 + G400 + G401;
C G403 = G1 * G402;
C G404 = X3 * G168;
C G405 = G403 + G404;
C G406 = C59 * G172;
C G407 = C60 * G174;
C G408 = C61 * G176;
C G409 = C62 * G178;
C G410 = C63 * G180;
C G411 = C64 * G182;
C G412 = C80 * G184;
C G413 = C65 * G186;
C G414 = C66 * G188;
C G415 = C67 * G190;
C G416 = C68 * G192;
C G417 = C69 * G194;
C G418 = C81 * G196;
C G419 = C70 * G198;
C G420 = C71 * G200;
C G421 = C72 * G202;
C G422 = C73 * G204;
C G423 = C82 * G206;
C G424 = C74 * G208;
C G425 = C75 * G210;
C G426 = C76 * G212;
C G427 = C83 * G214;
C G428 = C77 * G216;
C G429 = C78 * G218;
C G430 = C84 * G220;
C G431 = C79 * G222;
C G432 = C85 * G224;
C G433 = C86 * G226;
C G434 = C30 + G406 + G407 + G408 + G409 + G410 + G411 + G412 + G413 + G414 + G415 + G416 + G417 + G418 + G419 + G420 + G421 + G422 + G423 + G424 + G425 + G426 + G427 + G428 + G429 + G430 + G431 + G432 + G433;
C G435 = C1 * G434;
C G436 = C30 + G226;
C G437 = G435 + G436;
y[0] = G67;
y[1] = G119;
y[2] = G171;
y[3] = G231;
y[4] = G254;
y[5] = G279;
y[6] = G302;
y[7] = G334;
y[8] = G357;
y[9] = G380;
y[10] = G405;
y[11] = G437;
}
