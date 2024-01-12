/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb_dev.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otodd <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 12:54:21 by otodd             #+#    #+#             */
/*   Updated: 2023/10/09 10:55:02 by otodd            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_comb(int i, int j, int k)
{
	char	combinations[6];

	combinations[0] = i + '0';
	combinations[1] = j + '0';
	combinations[2] = k + '0';
	if (i == 7 && j == 8 && k == 9)
	{
		combinations[3] = '\0';
		combinations[4] = '\0';
	}
	else
	{
		combinations[3] = ',';
		combinations[4] = ' ';
	}
	combinations[5] = '\0';
	write(1, &combinations, 5);
}

void	ft_print_comb(void)
{
	int	i;
	int	j;
	int	k;

	while (i <= 7)
	{	
		j = i + 1;
		while (j <= 8)
		{	
			k = j + 1;
			while (k <= 9)
			{
				ft_comb(i, j, k);
				k++;
			}
			j++;
		}
		i++;
	}
}		

int	main(void)
{
	ft_print_comb();
	return (0);
}
