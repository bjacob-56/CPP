class Parent {};
class Child1: public Parent {};
class Child2: public Parent {};

int main()
{
	Child1 a;

	Parent * b = &a;	// float to void*
	Parent * c = (Parent *) &a;

	Parent * d = &a;
	// Child1 * e = d;	// NOOOOOO
	Child2 * f = (Child2 *) d;	// Ok, mais pertinent ?

	return 0;
}
