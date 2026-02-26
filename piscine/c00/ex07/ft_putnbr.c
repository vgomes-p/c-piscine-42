/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vigomes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 12:13:59 by vigomes-          #+#    #+#             */
/*   Updated: 2026/02/26 09:00:39 by vigomes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putc(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long int	n;
	char		c;

	n = nb;
	if (n < 0)
	{
		n *= -1;
		ft_putc('-');
	}
	if (n > 9)
		ft_putnbr(n / 10);
	c = n % 10 + '0';
	ft_putc(c);
}

// https://onlinegdb.com/0laAXuD0N
