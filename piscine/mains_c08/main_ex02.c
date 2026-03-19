/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ex02.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vigomes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 17:56:14 by vigomes-          #+#    #+#             */
/*   Updated: 2026/03/18 18:03:18 by vigomes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_abs.h"

int main()
{
	int	nb1 = 42;
	int	anb1 = ABS(nb1);
	int	nb2 = -42;
	int	anb2 = ABS(nb2);
	printf("nb1 before abs: %d\nnb1 after abs: %d\n\n", nb1, anb1);
	printf("nb2 before abs: %d\nnb1 after abs: %d\n", nb2, anb2);
}
