/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otodd <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 15:19:00 by otodd             #+#    #+#             */
/*   Updated: 2023/10/05 11:21:24 by otodd            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{	
	char	alphabet_char;

	alphabet_char = 'z';
	while (alphabet_char >= 'a')
	{
		write(1, &alphabet_char, 1);
		--alphabet_char;
	}
}
