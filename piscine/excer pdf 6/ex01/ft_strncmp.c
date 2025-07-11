/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgomes-p <vgomes-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 12:00:36 by vgomes-p          #+#    #+#             */
/*   Updated: 2024/08/01 00:33:27 by vgomes-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (n && *s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
	{
		return (0);
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

// int main()
// {
// 	char str1[] = "teste";
// 	char str2[] = "test";
// 	unsigned int n = 4;

// 	int result = ft_strncmp(str1, str2, n);

// 	printf("Resultado da comparação: %d\n", result);

// 	return 0;
// }
// https://onlinegdb.com/FhxmQSwuH
