/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vigomes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 16:49:59 by vigomes-          #+#    #+#             */
/*   Updated: 2026/03/01 17:33:27 by vigomes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

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

/*c1: first char || c2: last char || c3: middle chars*/
void	ft_print_ln(int x, char c1, char c2, char c3)
{
	int	cnt_x;

	cnt_x = 1;
	while (cnt_x <= x)
	{
		if (cnt_x == 1)
			ft_putchar(c1);
		else if (cnt_x == x)
			ft_putchar(c2);
		else
			ft_putchar(c3);
		cnt_x++;
	}
	ft_putchar('\n');
}

void	ft_make_body(int x, int y)
{
	int	cnt_y;

	cnt_y = y - 2;
	ft_print_ln(x, 'A', 'C', 'B');
	while (cnt_y >= 1)
	{
		ft_print_ln(x, 'B', 'B', ' ');
			cnt_y--;
	}
	if (y > 1)
		ft_print_ln(x, 'C', 'A', 'B');
}

void	rush(int x, int y)
{
	if (x > 200 || y > 200)
	{
		ft_putstr("Error: that's a large number, try something less than 200!");
		return ;
	}
	else if (x <= 0 || y <= 0)
	{
		ft_putstr("Error: x and y must be greater than 0!");
		return ;
	}
	else
		ft_make_body(x, y);
}
