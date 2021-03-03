#include <iostream>

class Parent { public: virtual ~Parent(void){} };
class Child1: public Parent {};
class Child2: public Parent {};

class Unrelated {};

// int main()
// {
// 	int a = 42;

// 	double b = a;
// 	int c = b;	// Nooooooo
// 	int d = static_cast<int>(b);

// 	return 0;
// }

/////////////////////////////////////////////////////////////////////////////////////////

// - Le dynamic_cast est le seul cast qui se fait a l'execution
// - Le dynamic_cast ne fonctionne que dans un cas de polymorphisme (i.e. au moins une instance virtuelle)

/////////////////////////////////////////////////////////////////////////////////////////


int main()
{
	Child1 a;
	Parent * b = &a;

/////////////// Cas 1 pointeur ////////////////////
	Child1 * c = dynamic_cast<Child1 *>(b);
	if ( c == NULL)
		std::cout << "conversion NOT ok" << std::endl;
	else
		std::cout << "conversion ok" << std::endl;

/////////////// Cas 2 reference ////////////////////
	try
	{
		Child2 & c = dynamic_cast<Child2 &>(*b);
		std::cout << "conversion ok" << std::endl;
	}
	catch( std::bad_cast &bc )
	{
		std::cout << "conversion NOT ok: " << bc.what() << std::endl;
		return 0;
	}

	return 0;
}
