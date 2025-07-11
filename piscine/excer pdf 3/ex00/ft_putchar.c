/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgomes-p <vgomes-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 12:00:15 by vgomes-p          #+#    #+#             */
/*   Updated: 2024/07/22 14:04:25 by vgomes-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/*
int main(void)
{
	ft_putchar('H');
	ft_putchar(' ');
	ft_putchar('l');
	ft_putchar('!');
	ft_putchar('\n');

	return 0;
}
*/
//https://onlinegdb.com/Nri375iEZ