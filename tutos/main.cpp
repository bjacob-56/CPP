#include <iostream>
#include "Sample.class.hpp"
#include "Sample1.class.hpp"
#include "Sample2.class.hpp"

// void f1()
// {
// 	Sample instance(42);

// 	std::cout << "One instance created" << std::endl;
// }

int	main()
{

	Sample	instance(42);
	Sample	*instancep = &instance;

	int		Sample::*p = NULL;
	void	(Sample::*f)(void) const;

	p = &Sample::foo;

	std::cout << "Value of foo " << instance.foo << std::endl;
	instance.*p = 21;
	std::cout << "Value of foo " << instance.foo << std::endl;
	instancep->*p = 56;
	std::cout << "Value of foo " << instance.foo << std::endl;

	f = &Sample::bar;

	(instance.*f)();
	(instancep->*f)();

	return 0;
}