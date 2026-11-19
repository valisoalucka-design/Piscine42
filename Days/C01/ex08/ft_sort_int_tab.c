/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valisoa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 12:57:39 by valisoa           #+#    #+#             */
/*   Updated: 2026/11/19 16:38:58 by valisoa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = size - 1;
	while (i < (size - 1))
	{
		if(tab[i] > tab[j])
		{
			k = tab[i];
			tab[i] = tab[j];
			tab[j] = k;
			i = 0;
		}
		else
			i++;
	}
}

int	main(void)
{
	int	i;
	int	tab[] = {4, 3, 1, 5, 2};
	int	size = 5;

	i = 0;
	ft_sort_int_tab(tab, size);
	while (i < size)
	{
		printf("%d", tab[i]);
		i++;
	}
	return (0);
}
