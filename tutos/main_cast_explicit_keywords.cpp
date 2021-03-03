#include <iostream>

class A {};
class B {};

class C {
public:
				C(A const & _ ) { }
	explicit	C(B const & _ ) { }	// interdit la conversion implicite de C
};

///////////////////////

void f( C const & _) {
	return ;
}


int main()
{
	f( A() ); // implicit conversion ok
	// f( B() ); // implicit conversion NOT ok, constructor is explicit

	return 0;
}
