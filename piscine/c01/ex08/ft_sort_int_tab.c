/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vigomes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 19:40:35 by vigomes-          #+#    #+#             */
/*   Updated: 2026/02/26 20:07:42 by vigomes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int sz)
{
	int	temp;
	int	i;
	int	j;

	j = sz;
	while (j > 1)
	{
		i = 0;
		while (i < j - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
			}
			i++;
		}
		j--;
	}
}
// https://onlinegdb.com/9j2UwoLNd
