#include <unistd.h>

void	ft_putnbr(int nb)
{
	char sign = '-';
	if (nb < 0)
	{
		nb = -nb;
		write(1, &sign, 1);
	}

	int nb_reversed = 0;
	while (nb != 0)
	{
		nb_reversed = nb_reversed * 10 + (nb % 10);
		nb /= 10;
	}

	int digit;
	char i;
	while (nb_reversed != 0)
	{
		digit = nb_reversed % 10;
		i = '0' + digit;
		write(1, &i, 1);
		nb_reversed /= 10;
	}
}

/*
int	main(void)
{
	ft_putnbr(-42);
	return (0);
}
*/