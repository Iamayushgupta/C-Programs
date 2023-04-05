# include <stdio.h>
# define bool int

bool getParity( int n)
{
	bool parity = 0;
	while (n)
	{
		parity = !parity;
		n	 = n & (n - 1);
	}	
	return parity;
}

int main()
{
	unsigned int n = 7;
	printf("Parity of no %d = %s", n,
			(getParity(n)? "odd": "even"));
	
	getchar();
	return 0;
}
