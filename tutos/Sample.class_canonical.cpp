
#include <iostream>
#include "Sample.class_canonical.hpp"

Sample::Sample(void): _foo(0){
	return ;
}

Sample::Sample(int const n): _foo(n){
	return ;
}

Sample::Sample(Sample const & src){
	*this = src;
	return ;
}

Sample::~Sample(void){
	return ;
}

int 	Sample::getFoo(void) const{
	return (this->_foo);
}

Sample & Sample::operator=(Sample const & rhs){
	this->_foo = rhs.getFoo();
	return (*this);
}

std::ostream &	operator<<(std::ostream & o, Sample const & i)
{
	o << i.getFoo();
	return o;
}
