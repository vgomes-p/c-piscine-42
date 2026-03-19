/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ex04.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vigomes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 18:40:39 by vigomes-          #+#    #+#             */
/*   Updated: 2026/03/19 18:46:40 by vigomes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"

int main(int argc, char **argv)
{
	t_stock_str *result;

	printf("\n=== Test 1: using program arguments ===\n");
	result = ft_strs_to_tab(argc, argv);
	print_stock_tab(result);

	if (result)
	{
		int i = 0;
		while (result[i].str)
		{
			free(result[i].copy);
			i++;
		}
		free(result);
	}

	printf("\n=== Test 2: hardcoded small test ===\n");
	char *test_args[] = {
		"hello",
		"42",
		"this is a longer string to test size",
		"last one",
		NULL
	};
	int test_ac = 4;

	result = ft_strs_to_tab(test_ac, test_args);
	print_stock_tab(result);

	if (result)
	{
		int i = 0;
		while (result[i].str)
		{
			free(result[i].copy);
			i++;
		}
		free(result);
	}

	printf("\n=== Test 3: ac = 0 ===\n");
	result = ft_strs_to_tab(0, argv);
	print_stock_tab(result);

	if (result)
		free(result);

	return (0);
}
