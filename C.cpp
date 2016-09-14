#include <stdio.h>
#include "C.h"


//Test if the functions work
int test() {
	//Test Getters
	printf("Test Getters on ints:\n");

	C<int> s (3,5);

	printf("Does %i = %i for the real values: %s.\n",
		s.getReal(), s.real, s.getReal()
		== s.real ? "true" : "false");

	printf("Does %i = %i for the imaginary values: %s.\n",
		s.getComplex(), s.complex, s.getComplex()
		== s.complex ? "true" : "false");

	//Test using doubles
	printf("\nTest Getters on doubles:\n");

	C<double> a (3.0,5.9);
	C<double> b (4.1,2.5);

	printf("Does %f = %f for the real values: %s.\n",
		a.getReal(), a.real, a.getReal()
		== a.real ? "true" : "false");

	printf("Does %f = %f for the imaginary values: %s.\n",
		a.getComplex(), a.complex, a.getComplex()
		== a.complex ? "true" : "false");

	//Test Addition
	printf("\nAddition test: \n");
	C<double> sum = a + b;

	printf("(%f + %f i) + (%f + %f i) = (%f + %f i)\n",
		a.real, a.complex, b.real, b.complex, sum.real, sum.complex);

	//Test Multiplication
	printf("\nMultiplication test: \n");
	C<double> product = a * b;

	printf("(%f + %f i) * (%f + %f i) = (%f + %f i)\n",
		a.real, a.complex, b.real, b.complex, product.real, product.complex);

	C<double> x(0, 1.0);
	C<double> mult;
	mult = x * 13.0;

	printf("13 * sqrt(-1) = %f + %f i\n", mult.getReal(), mult.getComplex());

	C<double> add;
	add = x + 13;
	printf("13 + sqrt(-1) = %f + %f i\n", add.getReal(), add.getComplex());
	
	C<int> real = 1;
	printf("does 1 = %i\n", real.getReal());
	return 1;
}