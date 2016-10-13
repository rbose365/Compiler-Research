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
C C2 = .261127+.250721*ii;
C G2 = X0 * X0;
C G3 = G2 + G2 + G2;
C G4 = C2 * G3;
C C3 = .293284+.516208*ii;
C G5 = X0 + X0;
C G6 = X1 * G5;
C G7 = C3 * G6;
C C4 = .412081+.323418*ii;
C G8 = X1 * X1;
C G9 = C4 * G8;
C C5 = .4915+.191557*ii;
C G10 = X2 * G5;
C G11 = C5 * G10;
C C6 = .162935+.109554*ii;
C G12 = X2 * X1;
C G13 = C6 * G12;
C C7 = .185843+.939859*ii;
C G14 = X2 * X2;
C G15 = C7 * G14;
C G16 = G4 + G7 + G9 + G11 + G13 + G15;
C G17 = G1 * G16;
C G18 = X3 * G3;
C G19 = G17 + G18;
C G20 = C3 * G2;
C G21 = X1 + X1;
C G22 = X0 * G21;
C G23 = C4 * G22;
C C8 = .105375+.763912*ii;
C G24 = G8 + G8 + G8;
C G25 = C8 * G24;
C G26 = X2 * X0;
C G27 = C6 * G26;
C C9 = .553652+.735318*ii;
C G28 = X2 * G21;
C G29 = C9 * G28;
C C10 = .492276+.351177*ii;
C G30 = C10 * G14;
C G31 = G20 + G23 + G25 + G27 + G29 + G30;
C G32 = G1 * G31;
C G33 = C5 * G2;
C G34 = X0 * X1;
C G35 = C6 * G34;
C G36 = C9 * G8;
C G37 = X2 + X2;
C G38 = X0 * G37;
C G39 = C7 * G38;
C G40 = X1 * G37;
C G41 = C10 * G40;
C C11 = .980682+.26546*ii;
C G42 = G14 + G14 + G14;
C G43 = C11 * G42;
C G44 = G33 + G35 + G36 + G39 + G41 + G43;
C G45 = G1 * G44;
C C12 = -1;
C G46 = X0 * X0 * X0;
C G47 = C2 * G46;
C G48 = G2 * X1;
C G49 = C3 * G48;
C G50 = X0 * G8;
C G51 = C4 * G50;
C G52 = X1 * X1 * X1;
C G53 = C8 * G52;
C G54 = G2 * X2;
C G55 = C5 * G54;
C G56 = G34 * X2;
C G57 = C6 * G56;
C G58 = G8 * X2;
C G59 = C9 * G58;
C G60 = X0 * G14;
C G61 = C7 * G60;
C G62 = X1 * G14;
C G63 = C10 * G62;
C G64 = X2 * X2 * X2;
C G65 = C11 * G64;
C G66 = C12 + G47 + G49 + G51 + G53 + G55 + G57 + G59 + G61 + G63 + G65;
C G67 = C1 * G66;
C G68 = C12 + G46;
C G69 = G67 + G68;
C C13 = .212275+.902168*ii;
C G70 = C13 * G3;
C C14 = .731832+.036154*ii;
C G71 = C14 * G6;
C C15 = .36513+.306376*ii;
C G72 = C15 * G8;
C C16 = .73365+.152589*ii;
C G73 = C16 * G10;
C C17 = .0260727+.284993*ii;
C G74 = C17 * G12;
C C18 = .307045+.122749*ii;
C G75 = C18 * G14;
C G76 = G70 + G71 + G72 + G73 + G74 + G75;
C G77 = G1 * G76;
C G78 = C14 * G2;
C G79 = C15 * G22;
C C19 = .545041+.016749*ii;
C G80 = C19 * G24;
C G81 = C17 * G26;
C C20 = .450446+.86858*ii;
C G82 = C20 * G28;
C C21 = .23418+.210781*ii;
C G83 = C21 * G14;
C G84 = G78 + G79 + G80 + G81 + G82 + G83;
C G85 = G1 * G84;
C G86 = X3 * G24;
C G87 = G85 + G86;
C G88 = C16 * G2;
C G89 = C17 * G34;
C G90 = C20 * G8;
C G91 = C18 * G38;
C G92 = C21 * G40;
C C22 = .391748+.752166*ii;
C G93 = C22 * G42;
C G94 = G88 + G89 + G90 + G91 + G92 + G93;
C G95 = G1 * G94;
C G96 = C13 * G46;
C G97 = C14 * G48;
C G98 = C15 * G50;
C G99 = C19 * G52;
C G100 = C16 * G54;
C G101 = C17 * G56;
C G102 = C20 * G58;
C G103 = C18 * G60;
C G104 = C21 * G62;
C G105 = C22 * G64;
C G106 = C12 + G96 + G97 + G98 + G99 + G100 + G101 + G102 + G103 + G104 + G105;
C G107 = C1 * G106;
C G108 = C12 + G52;
C G109 = G107 + G108;
C C23 = .332229+.717282*ii;
C G110 = C23 * G3;
C C24 = .530046+.494125*ii;
C G111 = C24 * G6;
C C25 = .622214+.722295*ii;
C G112 = C25 * G8;
C C26 = .822471+.663702*ii;
C G113 = C26 * G10;
C C27 = .26804+.962439*ii;
C G114 = C27 * G12;
C C28 = .690996+.566282*ii;
C G115 = C28 * G14;
C G116 = G110 + G111 + G112 + G113 + G114 + G115;
C G117 = G1 * G116;
C G118 = C24 * G2;
C G119 = C25 * G22;
C C29 = .99137+.93327*ii;
C G120 = C29 * G24;
C G121 = C27 * G26;
C C30 = .632205+.048965*ii;
C G122 = C30 * G28;
C C31 = .98696+.894014*ii;
C G123 = C31 * G14;
C G124 = G118 + G119 + G120 + G121 + G122 + G123;
C G125 = G1 * G124;
C G126 = C26 * G2;
C G127 = C27 * G34;
C G128 = C30 * G8;
C G129 = C28 * G38;
C G130 = C31 * G40;
C C32 = .827946+.894135*ii;
C G131 = C32 * G42;
C G132 = G126 + G127 + G128 + G129 + G130 + G131;
C G133 = G1 * G132;
C G134 = X3 * G42;
C G135 = G133 + G134;
C G136 = C23 * G46;
C G137 = C24 * G48;
C G138 = C25 * G50;
C G139 = C29 * G52;
C G140 = C26 * G54;
C G141 = C27 * G56;
C G142 = C30 * G58;
C G143 = C28 * G60;
C G144 = C31 * G62;
C G145 = C32 * G64;
C G146 = C12 + G136 + G137 + G138 + G139 + G140 + G141 + G142 + G143 + G144 + G145;
C G147 = C1 * G146;
C G148 = C12 + G64;
C G149 = G147 + G148;
y[0] = G19;
y[1] = G32;
y[2] = G45;
y[3] = G69;
y[4] = G77;
y[5] = G87;
y[6] = G95;
y[7] = G109;
y[8] = G117;
y[9] = G125;
y[10] = G135;
y[11] = G149;
}