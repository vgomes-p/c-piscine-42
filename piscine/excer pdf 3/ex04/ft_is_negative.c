/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgomes-p <vgomes-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 18:26:33 by vgomes-p          #+#    #+#             */
/*   Updated: 2024/07/22 14:06:51 by vgomes-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n < 0)
		write(1, "N", 1);
	else
		write(1, "P", 1);
}

/*
int main(void)
{
	ft_is_negative(-25);
	ft_is_negative(1);
	ft_is_negative(0);
	return 0;
}
*/
//https://onlinegdb.com/lP3fjQA1-5