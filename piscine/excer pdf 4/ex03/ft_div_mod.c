/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgomes-p <vgomes-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 16:49:46 by vgomes-p          #+#    #+#             */
/*   Updated: 2024/07/23 16:50:30 by vgomes-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
int main()
{
	int a = 10;
	int b = 3;
	int div;
	int mod;

	// Chamada da função ft_div_mod
	ft_div_mod(a, b, &div, &mod);

	// Imprime os resultados
	printf("a = %d, b = %d\n", a, b);
	printf("Divisão inteira: %d\n", div);
	printf("Resto da divisão: %d\n", mod);

	return 0;
}
*/
//https://onlinegdb.com/_2ofvHUa2