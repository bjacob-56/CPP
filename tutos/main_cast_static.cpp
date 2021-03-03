class Parent {};
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

// - Le static_cast se fait entre adresses compatibles dans un meme arbre d'heritage

/////////////////////////////////////////////////////////////////////////////////////////


int main()
{
	Child1 a;

	Parent * b = &a;
	// Child1 * c = b; // Nooooooo
	Child2 * d = static_cast<Child2 *>(b); // Explicit downcast --> Ok

	// Unrelated * e = static_cast<Unrelated *>(&a);	// Explicit conversion --> Noooooo

	return 0;
}