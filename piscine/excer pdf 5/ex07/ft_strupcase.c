/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgomes-p <vgomes-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 19:49:36 by vgomes-p          #+#    #+#             */
/*   Updated: 2024/07/30 11:00:39 by vgomes-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}

/*int main(void)
{
	char str1[] = "calma, poha!";
	char str2[] = "42 Sao Paulo";
	char str3[] = "em CAPS";

	printf("Original: %s\n", str1);
	printf("Uppercase: %s\n \n", ft_strupcase(str1));

	printf("Original: %s\n", str2);
	printf("Uppercase: %s\n \n", ft_strupcase(str2));

	printf("Original: %s\n", str3);
	printf("Uppercase: %s\n \n", ft_strupcase(str3));

	return 0;
}*/
// Main aqui: https://onlinegdb.com/mkttCW-m28
