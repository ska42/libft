/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 11:51:21 by lmartin           #+#    #+#             */
/*   Updated: 2019/10/09 20:31:07 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	fill_array(char **res, char const *s, char c)
{
	int i;
	int j;
	int n;

	i = 0;
	j = 0;
	n = 0;
	while (s[i])
	{
		if (s[i] != c)
			res[j][n++] = s[i];
		else
		{
			if (i > 0)
				if (s[i - 1] != c)
				{
					res[j][n] = '\0';
					n = 0;
					j++;
				}
		}
		i++;
	}
	if (n > 0)
		res[j][n] = '\0';
}

int		nb_split(char const *s, char c)
{
	int i;
	int b;
	int count;

	i = 0;
	count = 0;
	b = 1;
	while (s[i])
	{
		if (s[i] != c && b == 1)
			b = 0 * count++;
		if (s[i] == c)
			b = 1;
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		n;
	int		count;
	char	**res;

	count = nb_split(s, c);
	if (!(res = malloc((count + 1) * sizeof(char *))))
		return (0);
	i = -1;
	j = 0;
	n = 0;
	while (s[++i])
	{
		n = (s[i] != c) ? n + 1 : n;
		if (s[i] == c && n != 0)
		{
			res[j++] = malloc((n + 1) * sizeof(char));
			n = 0;
		}
	}
	res[j] = malloc((n + 1) * sizeof(char));
	fill_array(res, s, c);
	res[count] = 0;
	return (res);
}
