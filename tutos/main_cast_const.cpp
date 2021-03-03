
int main()
{
	int a = 42;

	int const * b = &a;
	// int * c = b; // Noooooooo
	int * d = const_cast<int *>(b);

	return 0;
}

