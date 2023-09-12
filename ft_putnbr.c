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
	while (nb_reversed != 0)
	{
		int digit = nb_reversed % 10;
		char i = '0' + digit;
		write(1, &i, 1);
		nb_reversed /= 10;
	}
}

int	main(void)
{
	ft_putnbr(-42);
	return (0);
}
