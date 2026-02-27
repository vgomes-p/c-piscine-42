/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vigomes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 12:19:56 by vigomes-          #+#    #+#             */
/*   Updated: 2026/02/26 18:35:29 by vigomes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int sz)
{
	int	temp;
	int	i;
	int	j;

	i = 0;
	j = sz - 1;
	while (i < j)
	{
		temp = tab[i];
		tab[i] = tab[j];
		tab[j] = temp;
		i++;
		j--;
	}
}

// https://onlinegdb.com/5KMVpgvgU
