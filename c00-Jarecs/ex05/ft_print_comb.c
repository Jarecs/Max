#include <unistd.h>

void	ft_print_comb(void)
{
	char	output[5];
	output[3] = ',';
	output[4] = ' ';
	for (int i = 0; i < 10; ++i)
	{
		for (int j = i + 1; j < 10; ++j)
		{
			for (int k = j + 1; k < 10; ++k)
			{
				output[0] = '0' + i;
				output[1] = '0' + j;
				output[2] = '0' + k;
				write(1, output, 5);
			}
		}
	}
}

/*
int	main(void)
{
	ft_print_comb();
	return (0);
}
*/