#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

class Sample {

public:
	int foo;

	Sample(int v);
	~Sample(void);

	void	bar(void) const;

	// int		getFoo(void) const;
	// int		compare(Sample * other) const;
	static int	getNbInst(void);

private:

	int	_foo;
	static int	_nbInst;
};

#endif