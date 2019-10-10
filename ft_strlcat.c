/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 15:38:40 by lmartin           #+#    #+#             */
/*   Updated: 2019/10/09 15:20:29 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t		i;
	size_t		j;
	size_t		k;
	size_t		l;

	k = 0;
	while (src[k] != '\0')
		k++;
	if (dstsize == 0)
		return (k);
	i = 0;
	while (dst[i] != '\0')
		i++;
	l = i;
	j = 0;
	while (i < dstsize - 1 && src[j] != '\0')
		dst[i++] = src[j++];
	dst[i] = '\0';
	if (dstsize - 1 < l)
		return (dstsize + k);
	return (k + l);
}
