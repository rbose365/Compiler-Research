#include <stdio.h>
template <class T> class C {
	public:
		int real, complex;
		C<T> () {};
		C<T> (T a, T b) : real(a), complex(b){};
		T getReal();
		T getComplex();
};

template <class T>
T C<T>::getReal() {
	return real;
}


template <class T>
T C<T>::getComplex() {
	return complex;
}

int main() {
	C<int> t (0,1);
	printf("%i\n", t.getReal());
	printf("%i\n", t.getComplex());
	return 1;
}