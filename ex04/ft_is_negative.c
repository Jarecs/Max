#include <unistd.h>

void	ft_is_negative(int n)
{
	char	x;
	char	y;

	x = 'N';
	y = 'P';
	if (n < 0)
	{
		write(1, &x, 1);
	}
	else
	{
		write(1, &y, 1);
	}
}

/*
int	main(void)
{
	ft_is_negative(-1);
	return (0);
}
*/