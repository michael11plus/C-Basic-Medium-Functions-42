#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

/* int	main(void)
{
	int	number1;
	int	number2;

	number1 = 4570;
	number2 = 28;
	ft_ultimate_div_mod(&number1, &number2);
	printf("The result is for div is %d and for mod is %d", number1, number2);
	return(0);
}
*/
