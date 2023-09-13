#include <unistd.h>

void ft_print_comb2(void)
{
	char output[7];
	output[2] = ' ';
	output[5] = ',';
	output[6] = ' ';
	for (int i = 0; i < 100; i++)
	{
		for (int j = i + 1; j < 100; j++)
		{
			output[0] = '0' + i / 10;
			output[1] = '0' + i % 10;
			output[3] = '0' + j / 10;
			output[4] = '0' + j % 10;
			if ((i == 98) && (j == 99))
			{
				write(1, output, 5);
			}
			else
			{
				write(1, output, 7);
			}
		}
	}
}
/*
int	main(void)
{
	ft_print_comb2();
	return (0);
}
*/