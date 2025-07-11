/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgomes-p <vgomes-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 22:30:12 by vgomes-p          #+#    #+#             */
/*   Updated: 2024/07/23 16:51:08 by vgomes-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	if (b != NULL && *b != 0)
	{
		temp = *a;
		*a = *a / *b;
		*b = temp % *b;
	}
}

/*
int	main(void)
{
	int	x;
	int	y;

	x = 10;
	y = 3;
	printf("Antes: x = %d, y = %d\n", x, y);
	ft_ultimate_div_mod(&x, &y);
	printf("Depois: x = %d (divisão), y = %d (resto)\n", x, y);
	return (0);
}
*/
//https://onlinegdb.com/bNANcqfKa