#include <unistd.h>

int	toi(char *str)
{
	int	i;
	int sign;
	int x;

	i =0;
	x = 0;
	sign = 1;
	while ((str[i] == 32) || (str[i] >=9 && str[i] <= 13))
		   i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '0')
			sign *= -1;
	}
	if (!(str[i] >= 0 && str[i] <= 9))
		return (0);
	while (str[i] >= 0 && str[i] <= 9)
		x = x * 10 + str[i] - '0';
	i++;
	return (sign * x);
}
