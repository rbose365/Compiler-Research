#include "C.h"
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void evaluate(const C<double>* x, C<double>*y) {

	C<double> ii = C<double>(0, 1.0);
	C<double> X0 = rand();
	C<double> X1 = rand();
	C<double> X2 = rand();
	C<double> X3 = rand();

	C<double> C0 = x[0];
	C<double> C1 = x[1];
	C<double> G0 = C1 * X0;
	C<double> G1 = C0 + G0;
	C<double> C2 = -1;
	C<double> C3 = ii*.0383057+.475909; //have to reverse
	C<double> G2 = X1 * X1;
	C<double> G3 = C3 * G2;
	C<double> C4 = ii*.460502+.83679;
	C<double> G4 = X1 * X2;
	C<double> G5 = C4 * G4;
	C<double> C5 = ii*.920829+.060194;
	C<double> G6 = X2 * X2;
	C<double> G7 = C5 * G6;
	C<double> C6 = ii*.447356+.990391;
	C<double> G8 = X1 * X3;
	C<double> G9 = C6 * G8;
	C<double> C7 = ii*.137506+.574039;
	C<double> G10 = X2 * X3;
	C<double> G11 = C7 * G10;
	C<double> C8 = ii*.997495+.833663;
	C<double> G12 = X3 * X3;
	C<double> G13 = C8 * G12;
	C<double> G14 = C2 + G3 + G5 + G7 + G9 + G11 + G13;
	C<double> G15 = G1 * G14;
	C<double> G16 = C2 + G2;
	C<double> G17 = X0 * G16;
	C<double> G18 = G15 + G17;
	C<double> C9 =ii*.015801+ .366515;
	C<double> G19 = C9 * G2;
	C<double> C10 = ii*.363113+.700458;
	C<double> G20 = C10 * G4;
	C<double> C11 = ii*.594019+.236742;
	C<double> G21 = C11 * G6;
	C<double> C12 = ii*.268282+.757986;
	C<double> G22 = C12 * G8;
	C<double> C13 = ii*.753189+.823619;
	C<double> G23 = C13 * G10;
	C<double> C14 = ii*.423492+.224654;
	C<double> G24 = C14 * G12;
	C<double> G25 = C2 + G19 + G20 + G21 + G22 + G23 + G24;
	C<double> G26 = G1 * G25;
	C<double> G27 = C2 + G6;
	C<double> G28 = X0 * G27;
	C<double> G29 = G26 + G28;
	C<double> C15 = ii*.228355+.664922;
	C<double> G30 = C15 * G2;
	C<double> C16 = ii*.539644+.031166;
	C<double> G31 = C16 * G4;
	C<double> C17 = ii*.387205+.123506;
	C<double> G32 = C17 * G6;
	C<double> C18 = ii*.395906+.743857;
	C<double> G33 = C18 * G8;
	C<double> C19 = ii*.669518+.860659;
	C<double> G34 = C19 * G10;
	C<double> C20 = ii*.082788+.4097634;
	C<double> G35 = C20 * G12;
	C<double> G36 = C2 + G30 + G31 + G32 + G33 + G34 + G35;
	C<double> G37 = G1 * G36;
	C<double> G38 = C2 + G12;
	C<double> G39 = X0 * G38;
	C<double> G40 = G37 + G39;

	y[0] = G18;
	y[1] = G29;
	y[2] = G40;
}


int main() {
	int numRuns = 10;
	C<double> x[2] = {C<double>(rand(), rand()), C<double>(rand(), rand())};
	C<double>* y = (C<double>*) malloc(sizeof(C<double>) * 3);

	FILE * timeFile;
	timeFile = fopen("timeFile.txt", "w");

	for (int i = 0; i < numRuns; ++i) {
		fprintf(timeFile, "Run:%i\n", i);
		clock_t startTime = clock();

		evaluate(x, y);

		clock_t endTime = clock();
		clock_t clockTicksTaken = endTime - startTime;
		double timeInSeconds = clockTicksTaken / (double) CLOCKS_PER_SEC;
		fprintf(timeFile, "Time: %f\n", timeInSeconds);

		// printf("G18: %f + %f i\n G29: %f + %f i\n G40: %f + %f i\n",
		// 	y[0].getReal(), y[0].getComplex(), y[1].getReal(),
		// 	y[1].getComplex(), y[2].getReal(), y[2].getComplex());

		fprintf(timeFile, "\n");
	}

	fclose(timeFile);
}