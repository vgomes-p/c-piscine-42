/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vigomes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 17:10:56 by vigomes-          #+#    #+#             */
/*   Updated: 2026/03/17 15:53:46 by vigomes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	ret;

	if (nb < 0)
		return (0);
	i = 2;
	ret = 1;
	while (i <= nb)
		ret *= i++;
	return (ret);
}

// https://onlinegdb.com/Suo5bpfhS
