/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 08:58:10 by lmartin           #+#    #+#             */
/*   Updated: 2019/10/12 10:39:39 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	char	*pt;

	i = 0;
	while (s[i] && i < (int)start)
		i++;
	if (i < (int)start)
	{
		if (!(pt = malloc(sizeof(char))))
			return (0);
		pt[0] = '\0';
		return (pt);
	}
	if (!(pt = malloc((len + 1) * sizeof(char))))
		return (0);
	i = 0;
	while (i < (int)len && s[start + i] != '\0')
	{
		pt[i] = s[start + i];
		i++;
	}
	pt[i] = '\0';
	return (pt);
}
