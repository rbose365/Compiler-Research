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
C C2 = .854009+.787218*ii;
C G2 = X0 * X0 * X0;
C G3 = G2 + G2 + G2 + G2;
C G4 = C2 * G3;
C C3 = .372747+.89722*ii;
C G5 = X0 * X0;
C G6 = G5 + G5 + G5;
C G7 = X1 * G6;
C G8 = C3 * G7;
C C4 = .501609+.191157*ii;
C G9 = X1 * X1;
C G10 = X0 + X0;
C G11 = G9 * G10;
C G12 = C4 * G11;
C C5 = .547746+.525152*ii;
C G13 = X1 * X1 * X1;
C G14 = C5 * G13;
C C6 = .138265+.476085*ii;
C G15 = X2 * G6;
C G16 = C6 * G15;
C C7 = .015680+.741408*ii;
C G17 = X1 * G10;
C G18 = X2 * G17;
C G19 = C7 * G18;
C C8 = .492744+.575174*ii;
C G20 = X2 * G9;
C G21 = C8 * G20;
C C9 = .278863+.717166*ii;
C G22 = X2 * X2;
C G23 = G22 * G10;
C G24 = C9 * G23;
C C10 = .607402+.99094*ii;
C G25 = G22 * X1;
C G26 = C10 * G25;
C C11 = .881205+.075142*ii;
C G27 = X2 * X2 * X2;
C G28 = C11 * G27;
C G29 = G4 + G8 + G12 + G14 + G16 + G19 + G21 + G24 + G26 + G28;
C G30 = G1 * G29;
C G31 = X3 * G3;
C G32 = G30 + G31;
C G33 = C3 * G2;
C G34 = X1 + X1;
C G35 = G5 * G34;
C G36 = C4 * G35;
C G37 = G9 + G9 + G9;
C G38 = X0 * G37;
C G39 = C5 * G38;
C C12 = .734937+.783374*ii;
C G40 = G13 + G13 + G13 + G13;
C G41 = C12 * G40;
C G42 = X2 * G5;
C G43 = C7 * G42;
C G44 = X0 * G34;
C G45 = X2 * G44;
C G46 = C8 * G45;
C C13 = .241315+.193424*ii;
C G47 = X2 * G37;
C G48 = C13 * G47;
C G49 = G22 * X0;
C G50 = C10 * G49;
C C14 = .549702+.038853*ii;
C G51 = G22 * G34;
C G52 = C14 * G51;
C C15 = .57164+.410128*ii;
C G53 = C15 * G27;
C G54 = G33 + G36 + G39 + G41 + G43 + G46 + G48 + G50 + G52 + G53;
C G55 = G1 * G54;
C G56 = C6 * G2;
C G57 = G5 * X1;
C G58 = C7 * G57;
C G59 = X0 * G9;
C G60 = C8 * G59;
C G61 = C13 * G13;
C G62 = X2 + X2;
C G63 = G5 * G62;
C G64 = C9 * G63;
C G65 = X0 * X1;
C G66 = G65 * G62;
C G67 = C10 * G66;
C G68 = G9 * G62;
C G69 = C14 * G68;
C G70 = G22 + G22 + G22;
C G71 = X0 * G70;
C G72 = C11 * G71;
C G73 = X1 * G70;
C G74 = C15 * G73;
C C16 = .935215+.523502*ii;
C G75 = G27 + G27 + G27 + G27;
C G76 = C16 * G75;
C G77 = G56 + G58 + G60 + G61 + G64 + G67 + G69 + G72 + G74 + G76;
C G78 = G1 * G77;
C C17 = -1;
C G79 = X0 * X0 * X0 * X0;
C G80 = C2 * G79;
C G81 = G2 * X1;
C G82 = C3 * G81;
C G83 = G5 * G9;
C G84 = C4 * G83;
C G85 = X0 * G13;
C G86 = C5 * G85;
C G87 = X1 * X1 * X1 * X1;
C G88 = C12 * G87;
C G89 = G2 * X2;
C G90 = C6 * G89;
C G91 = G57 * X2;
C G92 = C7 * G91;
C G93 = G59 * X2;
C G94 = C8 * G93;
C G95 = G13 * X2;
C G96 = C13 * G95;
C G97 = G5 * G22;
C G98 = C9 * G97;
C G99 = G65 * G22;
C G100 = C10 * G99;
C G101 = G9 * G22;
C G102 = C14 * G101;
C G103 = X0 * G27;
C G104 = C11 * G103;
C G105 = X1 * G27;
C G106 = C15 * G105;
C G107 = X2 * X2 * X2 * X2;
C G108 = C16 * G107;
C G109 = C17 + G80 + G82 + G84 + G86 + G88 + G90 + G92 + G94 + G96 + G98 + G100 + G102 + G104 + G106 + G108;
C G110 = C1 * G109;
C G111 = C17 + G79;
C G112 = G110 + G111;
C C18 = .533482+.781663*ii;
C G113 = C18 * G3;
C C19 = .696693+.433136*ii;
C G114 = C19 * G7;
C C20 = .621545+.108816*ii;
C G115 = C20 * G11;
C C21 = .732183+.799802*ii;
C G116 = C21 * G13;
C C22 = .246167+.578024*ii;
C G117 = C22 * G15;
C C23 = .646776+.316428*ii;
C G118 = C23 * G18;
C C24 = .405635+.0094474*ii;
C G119 = C24 * G20;
C C25 = .92132+.370528*ii;
C G120 = C25 * G23;
C C26 = .0132865+.470799*ii;
C G121 = C26 * G25;
C C27 = .5132+.587324*ii;
C G122 = C27 * G27;
C G123 = G113 + G114 + G115 + G116 + G117 + G118 + G119 + G120 + G121 + G122;
C G124 = G1 * G123;
C G125 = C19 * G2;
C G126 = C20 * G35;
C G127 = C21 * G38;
C C28 = .264383+.601855*ii;
C G128 = C28 * G40;
C G129 = C23 * G42;
C G130 = C24 * G45;
C C29 = .448665+.328299*ii;
C G131 = C29 * G47;
C G132 = C26 * G49;
C C30 = .059256+.771005*ii;
C G133 = C30 * G51;
C C31 = .253067+.928093*ii;
C G134 = C31 * G27;
C G135 = G125 + G126 + G127 + G128 + G129 + G130 + G131 + G132 + G133 + G134;
C G136 = G1 * G135;
C G137 = X3 * G40;
C G138 = G136 + G137;
C G139 = C22 * G2;
C G140 = C23 * G57;
C G141 = C24 * G59;
C G142 = C29 * G13;
C G143 = C25 * G63;
C G144 = C26 * G66;
C G145 = C30 * G68;
C G146 = C27 * G71;
C G147 = C31 * G73;
C C32 = .863456+.987696*ii;
C G148 = C32 * G75;
C G149 = G139 + G140 + G141 + G142 + G143 + G144 + G145 + G146 + G147 + G148;
C G150 = G1 * G149;
C G151 = C18 * G79;
C G152 = C19 * G81;
C G153 = C20 * G83;
C G154 = C21 * G85;
C G155 = C28 * G87;
C G156 = C22 * G89;
C G157 = C23 * G91;
C G158 = C24 * G93;
C G159 = C29 * G95;
C G160 = C25 * G97;
C G161 = C26 * G99;
C G162 = C30 * G101;
C G163 = C27 * G103;
C G164 = C31 * G105;
C G165 = C32 * G107;
C G166 = C17 + G151 + G152 + G153 + G154 + G155 + G156 + G157 + G158 + G159 + G160 + G161 + G162 + G163 + G164 + G165;
C G167 = C1 * G166;
C G168 = C17 + G87;
C G169 = G167 + G168;
C C33 = .990811+.352058*ii;
C G170 = C33 * G3;
C C34 = .65996+.680041*ii;
C G171 = C34 * G7;
C C35 = .694074+.948397*ii;
C G172 = C35 * G11;
C C36 = .174208+.130992*ii;
C G173 = C36 * G13;
C C37 = .26191+.505003*ii;
C G174 = C37 * G15;
C C38 = .834556+.427404*ii;
C G175 = C38 * G18;
C C39 = .66765+.662855*ii;
C G176 = C39 * G20;
C C40 = .679132+.986708*ii;
C G177 = C40 * G23;
C C41 = .471245+.0928165*ii;
C G178 = C41 * G25;
C C42 = .791783+.398605*ii;
C G179 = C42 * G27;
C G180 = G170 + G171 + G172 + G173 + G174 + G175 + G176 + G177 + G178 + G179;
C G181 = G1 * G180;
C G182 = C34 * G2;
C G183 = C35 * G35;
C G184 = C36 * G38;
C C43 = .577511+.343642*ii;
C G185 = C43 * G40;
C G186 = C38 * G42;
C G187 = C39 * G45;
C C44 = .246066+.538295*ii;
C G188 = C44 * G47;
C G189 = C41 * G49;
C C45 = .722593+.637193*ii;
C G190 = C45 * G51;
C C46 = .419682+.028286*ii;
C G191 = C46 * G27;
C G192 = G182 + G183 + G184 + G185 + G186 + G187 + G188 + G189 + G190 + G191;
C G193 = G1 * G192;
C G194 = C37 * G2;
C G195 = C38 * G57;
C G196 = C39 * G59;
C G197 = C44 * G13;
C G198 = C40 * G63;
C G199 = C41 * G66;
C G200 = C45 * G68;
C G201 = C42 * G71;
C G202 = C46 * G73;
C C47 = .743729+.189063*ii;
C G203 = C47 * G75;
C G204 = G194 + G195 + G196 + G197 + G198 + G199 + G200 + G201 + G202 + G203;
C G205 = G1 * G204;
C G206 = X3 * G75;
C G207 = G205 + G206;
C G208 = C33 * G79;
C G209 = C34 * G81;
C G210 = C35 * G83;
C G211 = C36 * G85;
C G212 = C43 * G87;
C G213 = C37 * G89;
C G214 = C38 * G91;
C G215 = C39 * G93;
C G216 = C44 * G95;
C G217 = C40 * G97;
C G218 = C41 * G99;
C G219 = C45 * G101;
C G220 = C42 * G103;
C G221 = C46 * G105;
C G222 = C47 * G107;
C G223 = C17 + G208 + G209 + G210 + G211 + G212 + G213 + G214 + G215 + G216 + G217 + G218 + G219 + G220 + G221 + G222;
C G224 = C1 * G223;
C G225 = C17 + G107;
C G226 = G224 + G225;
y[0] = G32;
y[1] = G55;
y[2] = G78;
y[3] = G112;
y[4] = G124;
y[5] = G138;
y[6] = G150;
y[7] = G169;
y[8] = G181;
y[9] = G193;
y[10] = G207;
y[11] = G226;
}
