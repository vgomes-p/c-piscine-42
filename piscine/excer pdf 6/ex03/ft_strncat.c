/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgomes-p <vgomes-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 12:02:10 by vgomes-p          #+#    #+#             */
/*   Updated: 2024/08/01 02:17:33 by vgomes-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*dest_ini;

	dest_ini = dest;
	while (*dest)
	{
		dest++;
	}
	while (nb-- && *src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest_ini);
}

// int main() {
// 	char destino[50] = "calma, ";
// 	char *origem = "cara, vai dar certo!";
// 	unsigned int max_caracteres = 4;

// 	ft_strncat(destino, origem, max_caracteres);
// 	printf("Resultado: %s\n", destino);
// 	return 0;
// }
// https://onlinegdb.com/6l7vhNiih
