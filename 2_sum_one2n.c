#include <stdio.h>

int		sum_one2n(int n)
{
	if (n == -1 || n == 0 || n == 1)
		return (n);
	if (n < 0)
		return (n + sum_one2n(n + 1));
	return (n + sum_one2n(n - 1));
}

int		main(void)
{
	printf("%d\n", sum_one2n(5));
	return (0);
}
