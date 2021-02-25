
#include <iostream>
#include "Sample.class_inheritance.hpp"

animal::animal(int v) : _foo(v) {
	this->foo = 42;
	std::cout << "Constructor called" << std::endl;
	return ;
}

animal::~animal(void){

	std::cout << "Destructor called" << std::endl;
	return ;
}

// int	animal::getFoo(void) const {
// 	return this->_foo;
// }

// int	animal::compare(animal * other) const{
// 	if (this->_foo < other->getFoo())
// 		return -1;
// 	else if (this->_foo > other->getFoo())
// 		return 1;
// 	return 0;
// }

void animal::bar(void) const{
	std::cout << "Bar function called" << std::endl;
	return ;
}
