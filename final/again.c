#include <unistd.h>

void string_it(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int main(int ac, char **av)
{
	if ( ac > 1)
		string_it(av[ac - 1]);
	return (0);
}
