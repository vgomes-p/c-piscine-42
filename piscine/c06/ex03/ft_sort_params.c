/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vigomes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 16:21:58 by vigomes-          #+#    #+#             */
/*   Updated: 2026/03/17 11:43:10 by vigomes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && (s1[i] == s2[i]))
		i++;
	return (s1[i] - s2[i]);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		ft_putchar(s[i]);
		i++;
	}
	ft_putchar('\n');
}

void	ft_print_arr(char **arr, int sz)
{
	int	i;

	i = 0;
	while (i <= sz)
	{
		ft_putstr(arr[i]);
		i++;
	}
}

int	main(int ac, char **av)
{
	int		a;
	int		i;
	char	*temp;

	if (ac > 1)
	{
		a = ac;
		while (a-- > 1)
		{
			i = 1;
			while (i++ < a - 1)
			{
				if (ft_strcmp(av[i], av[i + 1]) > 0)
				{
					temp = av[i];
					av[i] = av[i + 1];
					av[i + 1] = temp;
				}
			}
		}
		ft_print_arr(av, ac - 1);
		return (0);
	}
	ft_putchar("\n");
	return (0);
}
