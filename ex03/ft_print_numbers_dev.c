/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers_dev.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otodd <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 11:30:59 by otodd             #+#    #+#             */
/*   Updated: 2023/10/09 16:59:00 by otodd            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(void)
{
	char	v;

	v = '0';
	while (v <= '9')
	{
		ft_putchar(v);
		v++;
	}
}

int	main(void)
{
	ft_print_numbers();
	return (0);
}
