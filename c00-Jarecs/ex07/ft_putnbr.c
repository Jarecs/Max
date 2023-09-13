#include <unistd.h>

void	ft_putnbr(int nb)
{
	char sign = '-';
	if (nb < 0)
	{
		write(1, &sign, 1);
	}
	int count = 1;
	int nb2 = nb;
	while	(nb2 != 0)
	{
		nb2 /= 10;
		count *= 10;
	}
	int digit;
	char c;
	while	(count != 0)
	{
		digit = nb / count;
		nb = nb % count;
		count /= 10;
		c = '0' + digit;
		write(1, &c, 1);
	}
}


int	main(void)
{
	ft_putnbr(-21474836);
	return (0);
}
