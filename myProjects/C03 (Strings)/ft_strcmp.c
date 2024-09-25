#include <unistd.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] == s2[i])
		{
			i++;
		}
		else
		{
			return (s1[i] - s2[i]);
		}
	}
	return (0);
}

/* int	main(void)
{
	char string1[] = "I dont even like";
	char string2[] = "I dont even lile";
	char returnvalue = ft_strcmp(string1, string2);
	printf("Look: %d", returnvalue);
} */
