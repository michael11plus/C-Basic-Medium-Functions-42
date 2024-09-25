#include <unistd.h>

void	ft_is_negative(int a)
{
	char	x;

	if (a >= 0)
	{
		x = 'P';
	}
	else
	{
		x = 'N';
	}
	write (1, &x, 1);
}
