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

void	ft_print_comb2(void)
{
	char	numbers[] = "0123456789";
	char	cx;
	char	cy;
	int		x;
	int		y;

	for(x = 0; x < 100; x++)
	{
		for(y = x + 1; y < 100; y++)
		{
			cx = '0' + x;
			cy = '0' + y;
			write(1, &cx, 1);
			write(1, &" ", 1);
			write(1, &cy, 1);
			write(1, &", ", 2);
		}
	}
}


int	main(void)
{
	ft_print_comb2();
	return (0);
}
