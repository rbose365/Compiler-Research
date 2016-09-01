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
	C<T> (T a) : real(a){};

	//Getters
	T getReal();
	T getComplex();

	//Operation Implementation
	C<T> operator + (const C<T>);
	C<T> operator * (const C<T>);
};
 
#endif