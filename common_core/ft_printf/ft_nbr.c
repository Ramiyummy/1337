#include "ft_printf.h"

void ft_nbr(int n)
{
  unsigned int nb;

  nb = n;
  if (n < 0)
  {
   ft_char('-');
    nb *= -1;
  }
  if (nb < 10)
  {
    ft_char(nb + '0');
  }
  else
  {
    ft_nbr(nb / 10);
    ft_nbr(nb % 10);
  }
}
