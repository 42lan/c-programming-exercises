#include <stdio.h>

int		no_of_digit(int n)
{
	static int		cnt;

	cnt = 0;
	if (n == 0)
		return (1);
	no_of_digit(n / 10);
	cnt++;
	return (n > 0 ? cnt : cnt + 1);
}

int		main(void)
{
	printf("%d\n", no_of_digit(-523));
	return (0);
}
