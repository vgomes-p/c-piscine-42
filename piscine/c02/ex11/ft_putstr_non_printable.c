/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vigomes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 16:50:36 by vigomes-          #+#    #+#             */
/*   Updated: 2026/03/04 11:54:43 by vigomes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_put_hexdec(unsigned char c)
{
	char	*hex;
	char	ch1;
	char	ch2;

	hex = "0123456789abcdef";
	ch1 = hex[c / 16];
	ch2 = hex[c % 16];
	ft_putchar('\\');
	ft_putchar(ch1);
	ft_putchar(ch2);
}

void	ft_putstr_non_printable(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if ((s[i] >= 0 && s[i] <= 31) || (s[i] == 127))
			ft_put_hexdec((unsigned char)s[i]);
		else
			ft_putchar(s[i]);
		i++;
	}
}

// https://onlinegdb.com/wrv3aVenc
