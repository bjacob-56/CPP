#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

class Sample {

public:
	int foo;

	Sample(void);
	~Sample(void);

	void	bar(void) const;
	void	bar(char const c) const;
	void	bar(int const n) const;
	// void	bar(float const z) const;
	// void	bar(Sample const & i) const;
	

private:

	int	_foo;
};

#endif