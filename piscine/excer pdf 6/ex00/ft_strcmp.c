/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgomes-p <vgomes-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 11:59:55 by vgomes-p          #+#    #+#             */
/*   Updated: 2024/08/01 00:15:11 by vgomes-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}

// int main(void)
// {
// 	char *str1 = "AHHHHHHHH";
// 	char *str2 = "Apenas um teste";
// 	int result;

// 	result = ft_strcmp(str1, str2);

// 	if (result < 0)
// 		printf("'%s' é menor que '%s'.\n", str1, str2);
// 	else if (result > 0)
// 		printf("'%s' é maior que '%s'.\n", str1, str2);
// 	else
// 		printf("'%s' é igual a '%s'.\n", str1, str2);

// 	return 0;
// }
// https://onlinegdb.com/mxkH1caPQV