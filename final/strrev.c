#include <unistd.h>

int lenght_it(char *str)
{
	int i = 0;
		while (*str)
		{
			str++;
			i++;
		}
	return (i);
}

char *strrev_it(char *str)
{
	int size = lenght_it(str);
	char temp;
	int i = 0;
	size--;
	while (size > i)
	{
		temp = str[i];
		str[i] = str[size];
		str[size] = temp;
		i++;
		size--;
	}
	return (str);
}

int main(void)
{
	char s[] = "rami";
	strrev_it(s);
}	
