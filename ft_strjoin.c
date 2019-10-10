/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 09:14:49 by lmartin           #+#    #+#             */
/*   Updated: 2019/10/09 20:23:11 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		temp;
	int		len;
	char	*pt;

	i = 0;
	len = 0;
	while (s1[i++])
		len++;
	temp = len;
	i = 0;
	while (s2[i++])
		len++;
	if (!(pt = malloc((len + 1) * sizeof(char))))
		return (0);
	i = -1;
	while (++i < temp)
		pt[i] = s1[i];
	i--;
	while (++i < len)
		pt[i] = s2[i - temp];
	pt[i] = '\0';
	return (pt);
}
