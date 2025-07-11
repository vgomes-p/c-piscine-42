/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgomes-p <vgomes-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 18:32:52 by vgomes-p          #+#    #+#             */
/*   Updated: 2024/07/22 14:08:31 by vgomes-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_comb(int d1, int d2, int d3)
{
	ft_putchar(d1 + '0');
	ft_putchar(d2 + '0');
	ft_putchar(d3 + '0');
	if (d1 != 7)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	int	d1;
	int	d2;
	int	d3;

	d1 = 0;
	while (d1 <= 7)
	{
		d2 = d1 + 1;
		while (d2 <= 8)
		{
			d3 = d2 + 1;
			while (d3 <= 9)
			{
				print_comb(d1, d2, d3);
				d3++;
			}
			d2++;
		}
		d1++;
	}
}

/*
int	main(void)
{
	ft_print_comb();
	return (0);
}
*/
//https://onlinegdb.com/yPHbY_Anl