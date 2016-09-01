#ifndef C_H
#define C_H
 
template <class T> class C {
public:
	T real;
	T complex;

	C<T> () {};
	C<T> (T a, T b) : real(a), complex(b){};
	C<T> (T a) : real(a){};

	T getReal();
	T getComplex();
	C<T> operator + (const C<T>);
	C<T> operator * (const C<T>);
};
 
#endif