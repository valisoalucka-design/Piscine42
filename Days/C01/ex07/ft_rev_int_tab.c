/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valisoa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 12:56:40 by valisoa           #+#    #+#             */
/*   Updated: 2026/11/19 13:06:23 by valisoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	k;
	int	i;
	int	j;

	i = 0;
	j = size - 1;
	while (i < (size / 2))
	{
		k = tab[i];
		tab[i] = tab[j];
		tab[j] = k;
		i++;
	}
}

int	main(void)
{
	int	i;
	int	tab[] = {1, 2, 3, 4, 5, 6};
	int	size = 6;

	i = 0;
	ft_rev_int_tab(tab, size);
	while (i < size)
	{
		printf("%d", tab[i]);
		i++;
	}
	return (0);
}
