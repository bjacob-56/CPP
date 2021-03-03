
#include <iostream>

template < typename T >
// template < typename T, typename U >
class List {

public:
	List<T>(T const & content) {}
	
	~List<T>(void) {}

private:
	T * _content;
	List<t> * _next;

};


// ******************************************************** //

int main()
{
	List<int>	a(42);
	List<float> b(3.14f);
	List< List<int> > c(a);

	return 0;
}
