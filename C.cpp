#include <stdio.h>
template <class T> class C {
	public:
		int real, complex;
		C<T> () {};
		C<T> (T a, T b) : real(a), complex(b){};
		
		T getReal();
		T getComplex();
		C<T> operator + (const C<T>);
		C<T> operator * (const C<T>);
};

template <class T>
T C<T>::getReal() {
	return real;
}


template <class T>
T C<T>::getComplex() {
	return complex;
}

template <class T>
C<T> C<T>::operator+ (const C<T> param) {
	C<T> temp;
	temp.real = real + param.real;
	temp.complex = complex + param.complex;
	return temp;
}

template <class T>
C<T> C<T>::operator* (const C<T> param) {
	C<T> temp;
	temp.real = (real * param.real) - (complex * param.complex);
	temp.complex = (real*param.complex) + (complex * param.real);
	return temp;
}

int main() {
	C<int> s (3,5);
	C<int> t (4,2);

	C<int> result = s * t;
	printf("%i\n", result.getReal());
	printf("%i\n", result.getComplex());

	return 1;
}