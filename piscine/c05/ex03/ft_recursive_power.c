/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vigomes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 18:43:05 by vigomes-          #+#    #+#             */
/*   Updated: 2026/03/17 15:50:07 by vigomes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	n;

	if (power < 0)
		return (0);
	if (power == 0 || (nb == 0 && power == 0))
		return (1);
	n = power;
	if (n == 1)
		return (nb);
	return (nb * ft_recursive_power(nb, n - 1));
}

// https://onlinegdb.com/QBtd19Pwc
