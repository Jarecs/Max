/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgocalv <vgocalv@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 08:48:38 by vgocalv           #+#    #+#             */
/*   Updated: 2021/09/06 08:48:38 by vgocalv          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_comb(void)
{
	char numbers[] = "0123456789";
	int	x;
	int	y;
	int	z;
	
	x = 0;
	while (x < 10)
	{
		y = x + 1;
		while (y < 10)
		{
			z = y + 1;
			while (z < 10)
			{
				write(1, &numbers[x], 1);
				write(1, &numbers[y], 1);
				write(1, &numbers[z], 1);
				write(1, ", ",2);
				z = z + 1;
			}
			y = y + 1;
		}
		x = x + 1;
	}
}

int	main(void)
{
	ft_print_comb();
	return (0);
}
