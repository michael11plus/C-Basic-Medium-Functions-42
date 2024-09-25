#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*copy;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	i = max - min;
	copy = (int *)malloc(sizeof(int) * i);
	if (copy == NULL)
	{
		*range = NULL;
		return (-1);
	}
	*range = copy;
	i = 0;
	while (max > min)
	{
		copy[i] = min;
		min++;
		i++;
	}
	return (i);
}

int main(void)
{
	int *range;
	printf("%d\n", ft_ultimate_range(&range, 1, 16));
	return 0;
}

