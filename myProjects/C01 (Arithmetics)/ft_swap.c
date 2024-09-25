#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	var;

	var = *a;
	*a = *b;
	*b = var;
}

/*
int	main(void)
{
	int	a = 7;
	int	b = 9;

	printf("Before: %d, %d\n", a, b);
	ft_swap(&a, &b);
	printf("After: %d, %d\n", a, b);
	return (0);
}
*/
