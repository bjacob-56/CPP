#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

# include <string>

class AAnimal {

public:
	int foo;

	AAnimal(int v);
	~AAnimal(void);

	void	bar(void) const;

	virtual void	run(int distance) = 0; // class abstraite a cause du " = 0" 
	void	eat(std::string food);

private:

	int	_numberOfLegs;

protected:	// private + accessible par une instance derivee
	int	_nbLegs;

};

class Cat : public AAnimal {

public:
	int foo;

	Cat(int v);
	~Cat(void);

	void	bar(void) const;

	// int		getFoo(void) const;
	// int		compare(Sample * other) const;

	void	meow(int distance);
	virtual void	run(int distance);

private:

};

class IInterface {	// contrat à respecter un implémentant la classe (en héritant, cahier des charges à respecter)

public:
	virtual void	run(int distance) = 0;

};


}

#endif

// A creuser :
// 		private/protected heritage
// 		heritage multiple