#include <unistd.h>
#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	a;

	a = 1;
	if (nb < 0)
		return (0);
	else
	{
		while (nb >= a * a)
		{
			if (a * a == nb)
				return (a);
			a++;
		}
	}
	return (0);
}

/* int	main(void)
{
	printf("%d \n", ft_sqrt(49));
}
 */
