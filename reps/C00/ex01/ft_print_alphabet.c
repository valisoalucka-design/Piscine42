/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valisoa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 11:00:25 by valisoa           #+#    #+#             */
/*   Updated: 2026/11/19 11:00:40 by valisoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	*c;

	c = "abcdefghijklmnopqrstuvwxyz";
	write(1, c, 27);
}

int	main(void)
{
	ft_print_alphabet();
}
