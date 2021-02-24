
#include <iostream>
#include "Sample.class_poly_adhoc.hpp"

Sample::Sample(void){
	return ;
}

Sample::~Sample(void){
	return ;
}

void 	Sample::bar(void) const{
	std::cout << "Bar function called" << std::endl;
	return ;
}

void	Sample::bar(char const c) const {
	std::cout << "Bar char function called" << std::endl;
	return ;
}

void	Sample::bar(int const n) const {
	std::cout << "Bar int function called" << std::endl;
	return ;
}
