/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgomes-p <vgomes-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 19:44:17 by vgomes-p          #+#    #+#             */
/*   Updated: 2024/07/28 16:14:22 by vgomes-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	a;

	a = 0 ;
	while (src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	dest[a] = '\0';
	return (dest);
}

// int	main(void)
// {
// 	char src[] = "Capeta de lista!";
// 	char dest[20];

// 	ft_strcpy(dest, src);

// 	printf("String Original: %s\n", src);
// 	printf("String Copiada: %s\n", dest);

// 	return 0;
// }
/* https://onlinegdb.com/ORpIzi_J_*/
