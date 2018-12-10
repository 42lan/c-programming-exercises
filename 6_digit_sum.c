#include <stdio.h>

int			digit_sum(int digit)
{
	if (digit == 0)
		return (digit);
	return ((digit % 10) + digit_sum(digit / 10));
}

int			main(void)
{
	printf("%d", digit_sum(1));
	return(0);
}
