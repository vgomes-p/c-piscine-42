/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vigomes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 14:17:05 by vigomes-          #+#    #+#             */
/*   Updated: 2026/03/18 15:45:08 by vigomes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_finalsz(char **strs, char *sep, int size)
{
	int	i;
	int	j;
	int	s;
	int	fj;

	s = 0;
	while (sep[s])
		s++;
	i = 0;
	fj = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			fj++;
			j++;
		}
		i++;
	}
	return (fj + ((size - 1) * s));
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*str;

	if (size == 0)
	{
		str = malloc(1);
		str[0] = '\0';
		return (str);
	}
	str = malloc(ft_finalsz(strs, sep, size) + 1);
	str[0] = '\0';
	i = 0;
	while (i < size)
	{
		ft_strcat(str, strs[i]);
		if (i < size - 1)
			ft_strcat(str, sep);
		i++;
	}
	return (str);
}

// https://onlinegdb.com/eTNXGr8p2
