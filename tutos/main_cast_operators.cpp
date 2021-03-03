#include <iostream>

class Foo {

public:
	Foo (float v): _v(v) {}

	operator float () {return this->_v;} //_v est un float
	operator int() {return static_cast<int> (this->_v);}

private:
	float _v;
};


int main()
{
	Foo a(420.024f);
	float b = a;	// b prend la valeur float de _v
	int c = a;	// c prend la valeur int de _v

	return 0;
}
