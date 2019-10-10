/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 08:58:10 by lmartin           #+#    #+#             */
/*   Updated: 2019/10/09 18:40:22 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	char	*pt;

	i = -1;
	if (!(pt = malloc((len + 1) * sizeof(char))))
		return (0);
	while (i++ < (int)len - 1)
		pt[i] = s[start + i];
	pt[i] = '\0';
	return (pt);
}
