/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vigomes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 18:42:41 by vigomes-          #+#    #+#             */
/*   Updated: 2026/03/18 15:15:38 by vigomes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *st)
{
	int	i;

	i = 0;
	while (st[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*strdup;

	i = 0;
	strdup = malloc(ft_strlen(src) + 1);
	if (!strdup)
		return (NULL);
	while (src[i] != '\0')
	{
		strdup[i] = src[i];
		i++;
	}
	strdup[i] = '\0';
	return (strdup);
}
