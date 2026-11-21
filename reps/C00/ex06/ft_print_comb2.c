/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valisoa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/20 16:05:45 by valisoa           #+#    #+#             */
/*   Updated: 2026/11/20 16:37:36 by valisoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	int	a;
	int	b;
	int	c;
	int	d;
	char	x;
	char	y;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			c = a / 10;
			d = a % 10;
			x = c + '0';
			y = d + '0';
			write(1, &x, 1);
			write(1, &y, 1);
			write(1, " ", 2);
			c = b / 10;
			d = b % 10;
			x = c + '0';
			y = d + '0';
			write(1, &x, 1);
			write(1, &y, 1);
			write(1, ", ", 2);
			b++;
		}
		a++;
	}
}

int	main(void)
{
	ft_print_comb2();
}
