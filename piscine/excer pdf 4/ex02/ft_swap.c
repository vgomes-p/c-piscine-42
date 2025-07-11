/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgomes-p <vgomes-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 15:59:58 by vgomes-p          #+#    #+#             */
/*   Updated: 2024/07/23 16:49:18 by vgomes-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*
int main(void)
{
	int a;
	int b;

	a = 10;
	b = 20;
	printf("Antes da troca: a = %d, b = %d\n", a, b);
	ft_swap(&a, &b);
	printf("Depois da troca: a = %d, b = %d\n", a, b);
	return (0);
}
*/
//https://onlinegdb.com/TVDXGhr1v
