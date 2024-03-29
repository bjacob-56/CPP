#ifndef INTEGER_CLASS_H
# define INTEGER_CLASS_H

# include <iostream>

class Integer {

public:

	Integer(int const n);
	~Integer(void);

	int	getValue(void) const;

	Integer &	operator=(Integer const & rhs);
	Integer		operator+(Integer const & rhs) const;

private:

	int	_n;
};

std::ostream &	operator<<(std::ostream & o, Integer const & rhs);

#endif

// La surcharge d'un operateur doit etre naturelle
// La srucharge doit avoir un rapport avec l'operateur naturel

