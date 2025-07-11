/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgomes-p <vgomes-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 19:50:01 by vgomes-p          #+#    #+#             */
/*   Updated: 2024/07/30 11:13:35 by vgomes-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

/*int main(void)
{
	char str1[] = "TO CALMO, POHA";
	char str2[] = "Me Faz Um Pix";
	char str3[] = "SEM caps";

	printf("Original: %s\n", str1);
	printf("Lowcase: %s\n \n", ft_strlowcase(str1));

	printf("Original: %s\n", str2);
	printf("Lowcase: %s\n \n", ft_strlowcase(str2));

	printf("Original: %s\n", str3);
	printf("Lowcase: %s\n \n", ft_strlowcase(str3));

	return 0;
}*/
// Main aqui: https://onlinegdb.com/SduBPslg4
