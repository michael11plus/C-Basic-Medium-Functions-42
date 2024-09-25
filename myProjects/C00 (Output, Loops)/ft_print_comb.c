#include <unistd.h>

void	ft_writeout(int d1, int d2, int d3)
{
	int	comma;
	int	space;

	comma = ',';
	space = ' ';
	write(1, &d1, 1);
	write(1, &d2, 1);
	write(1, &d3, 1);
	write(1, &comma, 1);
	write(1, &space, 1);
}

void	ft_print_comb(void)
{
	int	d1;
	int	d2;
	int	d3;

	d1 = '0';
	d2 = '1';
	d3 = '2';
	while (d1 <= '7')
	{
		d2 = d1 + 1;
		while (d2 <= '8')
		{
			d3 = d2 + 1;
			while (d3 <= '9')
			{
				ft_writeout(d1, d2, d3);
				d3++;
			}
			d2++;
		}
		d1++;
	}
}
