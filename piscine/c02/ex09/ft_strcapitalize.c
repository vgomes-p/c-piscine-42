/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vigomes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 19:10:20 by vigomes-          #+#    #+#             */
/*   Updated: 2026/03/04 11:22:01 by vigomes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_is_alnum(char c)
{
	return ((c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'));
}

static void	ft_capitalize_word(char *s, int *i, int *nw_word)
{
	while (ft_is_alnum(s[*i]))
	{
		if (*nw_word == 1)
		{
			if (s[*i] >= 'a' && s[*i] <= 'z')
				s[*i] -= 32;
			*nw_word = 0;
		}
		else if (s[*i] >= 'A' && s[*i] <= 'Z')
			s[*i] += 32;
		(*i)++;
	}
}

char	*ft_strcapitalize(char *s)
{
	int	i;
	int	nw_word;

	i = 0;
	nw_word = 1;
	while (s[i])
	{
		if (ft_is_alnum(s[i]))
			ft_capitalize_word(s, &i, &nw_word);
		else
		{
			nw_word = 1;
			i++;
		}
	}
	return (s);
}

// https://onlinegdb.com/_sZgYcWKL
