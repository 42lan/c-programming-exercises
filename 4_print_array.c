#include <stdio.h>

void	print_array_elem(int *array, int size)
{
	if (size)
	{
		printf("%d\n", *array);
		print_array_elem(++array, --size);
	}
}

int		main(void)
{
	int		array[] = {2, 4, 6, 8, 10, 12, 15, 34};
	print_array_elem(array, sizeof(array)/sizeof(int));
	return (0);
}
