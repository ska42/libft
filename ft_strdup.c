/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 08:40:57 by lmartin           #+#    #+#             */
/*   Updated: 2019/10/09 15:20:22 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*pt;

	i = 0;
	while (s1[i])
		i++;
	if (!(pt = malloc(i * sizeof(char))))
		return (0);
	i = -1;
	while (s1[++i])
		pt[i] = s1[i];
	pt[i] = '\0';
	return (pt);
}
