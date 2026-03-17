/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vigomes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 18:11:33 by vigomes-          #+#    #+#             */
/*   Updated: 2026/03/16 19:34:05 by vigomes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	n;
	int	ret;

	if (power < 0)
		return (0);
	if (power == 0 || (nb == 0 && power == 0))
		return (1);
	n = 1;
	ret = nb;
	while (n != power)
	{
		ret *= nb;
		n++;
	}
	return (ret);
}

// https://onlinegdb.com/rUKmJOLnv
