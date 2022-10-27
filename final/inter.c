#include <unistd.h>

void	inter(char *s1, char *s2)
{
	int tab[256] = {0};
	int i = 0;

	while (s1[i])
		tab[(int)s1[i++]] = 1;
	while (s1[i])
	{	
		if (tab[(int)s1[i]] == 1)
			write(1, &s1[i], 1);
		tab[(int)s2[i]] = 2;
	}
	i++;
}

int main(int ac, char **av)
{
	if (ac == 3)
	inter(av[1], av[2]);

}
