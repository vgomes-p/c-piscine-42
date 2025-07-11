/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgomes-p <vgomes-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 14:02:49 by vgomes-p          #+#    #+#             */
/*   Updated: 2024/07/23 17:10:40 by vgomes-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	a;
	int	sorted;
	int	temp;

	while (size > 1)
	{
		sorted = 0;
		a = 0;
		while (a < size - 1)
		{
			if (tab[a] > tab[a + 1])
			{
				temp = tab[a];
				tab[a] = tab[a + 1];
				tab[a + 1] = temp;
				sorted = 1;
			}
			a++;
		}
		if (sorted == 0)
			break ;
		(size)--;
	}
}

/*
int main()
{
	int arr[] = {8, 0, 3, 2, 4};
	int original_size = sizeof(arr) / sizeof(arr[0]);
	int size = original_size;

	ft_sort_int_tab(arr, size);

	printf("Organizado: ");
	for (int i = 0; i < original_size; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;
}
*/
//https://onlinegdb.com/G1yZBn-w5