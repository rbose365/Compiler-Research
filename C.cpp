#include <stdio.h>
#include "C.h"

//Gets the real component of the complex Number
template <class T>
T C<T>::getReal() {
	return real;
}

//Gets the imaginary component of the complex Number
template <class T>
T C<T>::getComplex() {
	return complex;
}

//Implements addition for this class
template <class T>
C<T> C<T>::operator+ (const C<T> param) {
	C<T> temp;
	temp.real = real + param.real;
	temp.complex = complex + param.complex;
	return temp;
}

//Implements multiplication for this class
template <class T>
C<T> C<T>::operator* (const C<T> param) {
	C<T> temp;
	temp.real = (real * param.real) - (complex * param.complex);
	temp.complex = (real*param.complex) + (complex * param.real);
	return temp;
}

//Test if the functions work
int main() {
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


	return 1;
}