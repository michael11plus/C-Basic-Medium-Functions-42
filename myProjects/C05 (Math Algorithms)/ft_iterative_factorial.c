#include <unistd.h>
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	number;
	int	i;

	number = 1;
	i = 1;
	if ((nb < 0) || (nb > 12))
		return (0);
	if ((nb == 1) || (nb == 0))
		return (i);
	while (i <= nb)
	{
		number = i * number;
		i++;
	}
	return (number);
}

/* int	main(void)
{
	printf("%d \n", ft_iterative_factorial(0));
}
 */
