/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: login valisoalucka@gmail.com               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 06:00:00 by login             #+#    #+#             */
/*   Updated: 2026/11/07 06:00:00 by login            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 8;
	b = 4;
	ft_div_mod (a, b, &div, &mod);
	printf ("div:%d, mod:%d\n", div, mod);
}
