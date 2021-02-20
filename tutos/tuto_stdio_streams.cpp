#include <iostream>

namespace Space {
	
	int	gl_var = 3;
	int	f(void) {return 4; }

}

int	main(void)
{

	char	buff[512];

	std::cout << "Hello world!" << std::endl;

	std::cout << "Enter a word: ";
	std::cin >> buff;
	std::cout << "You entered :[" << buff << "]" << std::endl;

// cplusplus.com
	return (0);
}
