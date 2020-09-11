/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 07:34:18 by lmartin           #+#    #+#             */
/*   Updated: 2020/09/11 23:19:33 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char		*pt_src;
	char		*pt_dst;

	pt_src = (char *)src;
	pt_dst = (char *)dst;
	while (n-- && *pt_src != c)
		*pt_dst++ = *pt_src++;
	if (*pt_src == c)
	{
		*pt_dst++ = *pt_src;
		return (pt_dst);
	}
	return (NULL);
}
