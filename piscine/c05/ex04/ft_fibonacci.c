/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vigomes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 10:31:22 by vigomes-          #+#    #+#             */
/*   Updated: 2026/03/17 10:57:26 by vigomes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	n;

	n = index;
	if (n <= 1)
		return (n);
	return (ft_fibonacci(n - 1) + ft_fibonacci(n - 2));
}

// https://onlinegdb.com/rkXl2oxqx