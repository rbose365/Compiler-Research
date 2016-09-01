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

	C<int> s (3,5);
	C<int> t (4,2);

	C<int> result = s * t;
	printf("%i\n", result.getReal());
	printf("%i\n", result.getComplex());

	return 1;
}