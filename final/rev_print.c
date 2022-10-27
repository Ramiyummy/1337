#include <unistd.h>
// kinda some work to get done here, i guess!!!

int	ft_strlen(char *str)
{
	int	i = 0;
	while (*str != '\0')
	{
		str++;
		i++;
	}
	return (i);
}

char *ft_rev_print(char *str)
{
	int	size = ft_strlen(str);
	size--;
	while (size >= 0)
	{
		write(1, &str[size], 1);
		size--;
	}
	return (str);
}

int main()
{
	char str[] = "ramiiscool";
	ft_rev_print(str);
}
