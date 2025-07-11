/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgomes-p <vgomes-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 11:26:52 by vgomes-p          #+#    #+#             */
/*   Updated: 2024/07/23 16:52:15 by vgomes-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}

/*
int main(void)
{
	char str1[] = "Escola 42";
	char str2[] = "Piscina C02";
	char str3[] = "vgomes-p";

	printf("O len da string '%s' é %d\n", str1, ft_strlen(str1));
	printf("O len da string '%s' é %d\n", str2, ft_strlen(str2));
	printf("O len da string '%s' é %d\n", str3, ft_strlen(str3));

	return 0;
}
*/
//https://onlinegdb.com/i54NhG4gt