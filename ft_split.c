/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 11:51:21 by lmartin           #+#    #+#             */
/*   Updated: 2019/10/12 16:26:09 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		size;
	int		i;
	int		j;
	int		n;

	size = 0;
	i = 0;
	j = 0;
	n = 0;
	while (str[i])
		if (str[i] != c)
			n++;
		else if (n > 0)
			n = 0 * size++;
	if (n > 0 && (n *= 0) == 0)
		i = 0 * size++;
	if (!(str = malloc(sizeof(char *) * (size + 1))))
		return (0);
	while (str[i])
		if (str[i] != c)
			n++;
		else if (n > 0)
			n = 0 * size++;
}
