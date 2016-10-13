#ifndef C_H
#define C_H
 
template <class T> class C {
public:
	//Fields - can change to public if we want to hide
	T real;
	T complex;

	//Constructors
	C<T> () {};
	C<T> (T a, T b) : real(a), complex(b){};
	C<T> (T a) : real(a), complex (0){};

	//Getters
	T getReal();
	T getComplex();

	//Operation Implementation
	C<T> operator + (const C<T>);
	C<T> operator * (const C<T>);
};

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

//Implements scalar multiplication
template <class T>
C<T> operator* (C<T> cc, T const& scalar) {
	C<T> temp;
	temp.real = cc.real * scalar;
	temp.complex = cc.complex * scalar;
	return temp;
}

//Implements scalar addition
template <class T>
C<T> operator+ (C<T> cc, T const& scalar) {
	C<T> temp;
	temp.real = cc.real + scalar;
	temp.complex = cc.complex;
	return temp;
}
 
#endif