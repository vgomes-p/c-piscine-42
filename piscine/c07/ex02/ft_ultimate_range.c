/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vigomes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 13:41:02 by vigomes-          #+#    #+#             */
/*   Updated: 2026/03/18 14:14:50 by vigomes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	sz;
	int	i;

	if (min >= max)
		return (0);
	sz = max - min;
	*range = malloc(sizeof(int) * sz);
	if (!*range)
		return (-1);
	i = 0;
	while (i < sz)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (sz);
}
