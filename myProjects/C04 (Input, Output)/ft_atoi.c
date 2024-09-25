#include <unistd.h>
#include <stdio.h>

int	ft_atoi(char *str)
{
	int	minuses;
	int	result;

	minuses = 1;
	result = 0;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			minuses *= -1;
		str++;
	}
	while (*str >= 48 && *str <= 57)
	{
		result = result * 10 + *str - '0';
		str++;
	}
	return (result * minuses);
}

/* int	main(void)
{
	char	*str = "   --+--1234abc567";
	printf("%d \n", ft_atoi(str));
}
 */
