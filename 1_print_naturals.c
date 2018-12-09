#include <stdio.h>

void    print_naturals(int n)
{
	if (n <= 50)
	{
		printf("%d ", n);
		print_naturals(++n);
	}
}

int     main(void)
{
    print_naturals(0);
    return (0);
}
