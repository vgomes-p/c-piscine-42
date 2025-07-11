/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgomes-p <vgomes-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 12:01:21 by vgomes-p          #+#    #+#             */
/*   Updated: 2024/08/01 01:49:11 by vgomes-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	char	*dest_ini;

	dest_ini = dest;
	while (*dest)
	{
		dest++;
	}
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest_ini);
}

// int main(){
// 	char destino[50] = "Calma, ";
// 	char *origem = "krai!";

// 	ft_strcat(destino, origem);
// 	printf("Resultado: %s\n", destino);

// 	return 0;
// }
// https://onlinegdb.com/sRseE2QHg