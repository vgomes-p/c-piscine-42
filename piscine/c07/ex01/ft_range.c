/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vigomes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 10:47:39 by vigomes-          #+#    #+#             */
/*   Updated: 2026/03/18 14:15:42 by vigomes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	sz;
	int	i;

	if (min >= max)
		return (0);
	sz = max - min;
	arr = malloc(sizeof(int) * sz);
	if (!arr)
		return (0);
	i = 0;
	while (i < sz)
	{
		arr[i] = min + i;
		i++;
	}
	return (arr);
}

// https://onlinegdb.com/8YY_jdlzu_