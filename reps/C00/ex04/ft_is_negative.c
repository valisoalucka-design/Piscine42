/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valisoa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 11:06:25 by valisoa           #+#    #+#             */
/*   Updated: 2026/11/19 11:16:07 by valisoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	a;
	char	b;

	a = 'N';
	b = 'P';
	if (n <= 10)
	{
		write(1, &a, 1);
	}
	else
	{
		write(1, &b, 1);
	}
}

int	main(void)
{
	int	n;

	n = 2;
	ft_is_negative(n);
}
