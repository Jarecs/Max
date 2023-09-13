#include <unistd.h>
#include <stdio.h>

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
	printf("\ncount: %d\n", count);
	int digit;
	char c;
	while	(count != 0)
	{
		digit = nb / count;
		if (digit < 0)
		{
			digit *= -1;
		}
		printf("digit: %d\n", digit);
		nb = nb % count;
		printf("nb: %d\n", nb);
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
