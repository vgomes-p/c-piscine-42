/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgomes-p <vgomes-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 19:45:42 by vgomes-p          #+#    #+#             */
/*   Updated: 2024/07/27 17:52:45 by vgomes-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	count;

	count = 0;
	while (count < n && src[count] != '\0')
	{
		dest[count] = src[count];
		count ++;
	}
	while (count < n)
	{
		dest[count] = '\0';
		count++;
	}
	return (dest);
}

// int main(void)
// {
// 	char dest[20];
// 	char src[] = "Calma, poha, a derrota é certa!";
// 	unsigned int n = 11;

// 	ft_strncpy(dest, src, n);

// 	dest[n] = '\0';

// 	printf("String original: %s\n", src);
// 	printf("Resultado: %s\n", dest);

// 	return 0;
// }
/*https://onlinegdb.com/1o8YShOg_*/
