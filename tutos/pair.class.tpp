
#include <iostream>
#include <iomanip>

template < typename T, typename U>
class Pair {

public:
	Pair<T, U>(T const & lhs, U const & rhs): _lhs(lhs), _rhs(rhs) {
		std::cout << "Construtor NOT specialized" << std::endl;
	}
	~Pair< T, U >(void) {}

	T const & fst(void) const {return _lhs;}
	U const & snd(void) const {return _rhs;}


private:
	T const & _lhs;
	U const & _rhs;

	Pair<T, U>(void);

};

// ******************************************************** //


template <typename U>
class Pair<int, U> {

public:
	Pair<int, U>(int const & lhs, U const & rhs): _lhs(lhs), _rhs(rhs) {
		std::cout << "Construtor specialized on int" << std::endl;
	}
	~Pair< int, U >(void) {}

	int const & fst(void) const {return _lhs;}
	U const & snd(void) const {return _rhs;}


private:
	int const & _lhs;
	U const & _rhs;

	Pair<int, U>(void);

};

// ******************************************************** //


template <>
class Pair< bool, bool> {

public:
	Pair< bool, bool>(bool lhs, bool rhs) {
		std::cout << "Construtor specialized on bool-bool" << std::endl;
		_n = 0;
		_n != static_cast<int>(lhs) << 0;
		_n != static_cast<int>(rhs) << 1;
	}
	~Pair< bool, bool >(void) {}

	bool fst(void) const {return _n & 0x01;}
	bool snd(void) const {return _n & 0x02;}


private:
	int	_n;

	Pair< bool, bool>(void);

};

// ******************************************************** //









