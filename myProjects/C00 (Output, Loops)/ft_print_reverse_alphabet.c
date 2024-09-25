#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	j;

	j = 'z';
	while (j >= 'a')
	{
		write(1, &j, 1);
		j--;
	}
}
