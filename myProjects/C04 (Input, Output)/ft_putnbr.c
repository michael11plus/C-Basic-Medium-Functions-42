#include <unistd.h>
#include <stdio.h>

void	ft_putnbr(int nb)
{
	long	nbl;
	char	str;

	nbl = (long)nb;
	if (nbl < 0)
	{
		write (1, "-", 1);
	}
	if (nbl / 10 != 0)
	{
		if (nbl < 0)
		{
			ft_putnbr((nbl / 10) * -1);
		}
		else
			ft_putnbr(nbl / 10);
	}
	if (nbl < 0)
	{
		str = (((nbl % 10) * -1) + '0');
	}
	else
		str = ((nbl % 10) + '0');
	write(1, &str, 1);
}

/* int	main(void)
{
	ft_putnbr(-48645);
}
 */
