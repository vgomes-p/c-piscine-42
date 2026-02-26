/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vigomes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 07:55:13 by vigomes-          #+#    #+#             */
/*   Updated: 2026/02/26 08:59:48 by vigomes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_nbrs(char i, char j, char k, char l)
{
	write(1, &i, 1);
	write(1, &j, 1);
	write(1, " ", 1);
	write(1, &k, 1);
	write(1, &l, 1);
	if (!(i == '9' && j == '8' && k == '9' && k == '9'))
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			ft_print_nbrs(
				(i / 10) + '0',
				(i % 10) + '0',
				(j / 10) + '0',
				(j % 10) + '0');
			j++;
		}
		i++;
	}
}

// https://onlinegdb.com/su1pjpmdGa