#include <stdio.h>

int	gl_var = 1;
int	f(void) {return 2; }

namespace Space {
	
	int	gl_var = 3;
	int	f(void) {return 4; }

}

namespace Space1 {
	
	int	gl_var = 4;
	int	f(void) {return 5; }

}

namespace Test = Space;

int	main(void)
{
	printf("gl_var: %d\n", gl_var);
	printf("f(): %d\n", f());

	printf("Space::gl_var: %d\n", Space::gl_var);
	printf("Space::f(): %d\n", Space::f());

	printf("Space1::gl_var: %d\n", Space1::gl_var);
	printf("Space1::f(): %d\n", Space1::f());

	printf("Test::gl_var: %d\n", Test::gl_var);
	printf("Test::f(): %d\n", Test::f());

	printf("Test::gl_var: %d\n", ::gl_var);
	printf("Test::f(): %d\n", ::f());

// Std::   -> bibli standard de c++

	return (0);
}