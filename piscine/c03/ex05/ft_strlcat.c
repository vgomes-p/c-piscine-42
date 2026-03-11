/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vigomes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/08 18:29:18 by vigomes-          #+#    #+#             */
/*   Updated: 2026/03/08 19:44:57 by vigomes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *s)
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_destsz(char *s, unsigned int sz)
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0' && i < sz)
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int sz)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	destsz;
	unsigned int	srcsz;

	srcsz = ft_strlen(src);
	destsz = ft_destsz(dest, sz);
	if (destsz == sz)
		return (sz + srcsz);
	i = destsz;
	j = 0;
	while (src[j] != '\0' && i < sz - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (destsz + srcsz);
}

// https://onlinegdb.com/HADCBEBsY
