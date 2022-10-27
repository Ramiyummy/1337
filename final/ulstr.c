#include <unistd.h>

void string_it(char *str)
{
	while (*str)
		write(1, str++, 1);
}

char  *ft_ulstr(char *str)
{
	int	i;
	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] +=32;
		else if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -=32;
		i++;
	}
	return (str);
}

int main(int ac, char **av)
{
	if ( ac == 2)
		string_it(ft_ulstr(av[1]));
	string_it("\n");
	return (0);
}
