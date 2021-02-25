#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

# include <string>

class Animal {

public:
	int foo;

	Animal(int v);
	~Animal(void);

	void	bar(void) const;

	// int		getFoo(void) const;
	// int		compare(Sample * other) const;

	void	run(int distance);
	void	eat(std::string food);

private:

	int	_numberOfLegs;

protected:	// private + accessible par une instance derivee
	int	_nbLegs;

};

class Cat : public Animal {

public:
	int foo;

	Cat(int v);
	~Cat(void);

	void	bar(void) const;

	// int		getFoo(void) const;
	// int		compare(Sample * other) const;

	void	meow(int distance);
	void	run(int distance);

private:

};

#endif

// A creuser :
// 		private/protected heritage
// 		heritage multiple