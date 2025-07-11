/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgomes-p <vgomes-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 11:46:07 by vgomes-p          #+#    #+#             */
/*   Updated: 2024/07/23 16:53:03 by vgomes-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	a;
	int	z;

	a = 0;
	z = size - 1;
	while (a < z)
	{
		temp = tab[a];
		tab[a] = tab[z];
		tab[z] = temp;
		a++;
		z--;
	}
}

/*
int	main(void)
{
	char	str[] = "NOVA";
	int	size;
	int	tab[sizeof(str) - 1];
	int	i;

	size = sizeof(str) - 1;
	i = 0;
	while (i < size)
	{
		tab[i] = (int)str[i];
		i++;
	}
	printf("String original: ");
	i = 0;
	while (i < size)
	{
		printf("%c", (char)tab[i]);
		i++;
	}
	printf("\n");
	ft_rev_int_tab(tab, size);
	printf("String invertida: ");
	i = 0;
	while (i < size)
	{
		printf("%c", (char)tab[i]);
		i++;
	}
	printf("\n");
	return (0);
}
*/
//https://onlinegdb.com/bUdjtsXK4