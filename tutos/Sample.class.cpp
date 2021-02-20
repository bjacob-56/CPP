
#include <iostream>
#include "Sample.class.hpp"

Sample::Sample(int v) : _foo(v) {
	Sample::_nbInst++;
	this->foo = 42;
	std::cout << "Constructor called" << std::endl;
	return ;
}

Sample::~Sample(void){

	std::cout << "Destructor called" << std::endl;
	return ;
}

// int	Sample::getFoo(void) const {
// 	return this->_foo;
// }

// int	Sample::compare(Sample * other) const{
// 	if (this->_foo < other->getFoo())
// 		return -1;
// 	else if (this->_foo > other->getFoo())
// 		return 1;
// 	return 0;
// }

void Sample::bar(void) const{
	std::cout << "Bar function called" << std::endl;
	return ;
}

int Sample::getNbInst(void){
	return Sample::_nbInst;
}

int	Sample::_nbInst = 0;