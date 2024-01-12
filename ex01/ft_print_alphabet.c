/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otodd <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 15:19:00 by otodd             #+#    #+#             */
/*   Updated: 2023/10/05 11:05:05 by otodd            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{	
	char	alphabet_char;

	alphabet_char = 'a';
	while (alphabet_char <= 'z')
	{
		write(1, &alphabet_char, 1);
		++alphabet_char;
	}
}
