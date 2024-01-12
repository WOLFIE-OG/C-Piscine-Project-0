/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otodd <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 16:45:35 by otodd             #+#    #+#             */
/*   Updated: 2023/10/10 12:37:05 by otodd            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		nb = nb % 10;
	}
	if (nb < 10)
	{
		ft_putchar(nb + '0');
	}
}

void	ft_store_comb(int n_1, int n_2)
{
	ft_putnbr(n_1 / 10);
	ft_putnbr(n_1 % 10);
	ft_putchar(' ');
	ft_putnbr(n_2 / 10);
	ft_putnbr(n_2 % 10);
	if (n_1 == 98 && n_2 == 99)
	{
	}
	else
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int	n_1;
	int	n_2;

	n_1 = 0;
	n_2 = 0;
	while (n_1 < 98)
	{
		if (n_2 >= 99)
		{
			n_1++;
			n_2 = n_1 + 1;
		}
		else
		{
			n_2++;
		}
		ft_store_comb(n_1, n_2);
	}
}
