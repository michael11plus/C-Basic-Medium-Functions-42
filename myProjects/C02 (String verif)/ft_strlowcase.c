#include <unistd.h>
#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ('A' <= str[i] && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
			i++;
		}
		else
		{
			i++;
		}
	}
	return (str);
}

	/* int	main(void)
	{
		char str[] = "I dont even Like yoacfsmvsv.3";
		char *returnvalue = ft_strlowcase(str);
		printf("Look: %s", returnvalue);
	}
 */
