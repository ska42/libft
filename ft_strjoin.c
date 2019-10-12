/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 09:14:49 by lmartin           #+#    #+#             */
/*   Updated: 2019/10/12 13:41:31 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		o;
	char	*c;

	i = 0;
	o = 0;
	while (s1[i])
		i++;
	while (s2[o])
		o++;
	if ((i + o) < 1)
		return (0);
	if (!(c = malloc((i + o) * sizeof(char))))
		return (0);
	i = -1;
	o = -1;
	while (s1[++i] != '\0')
		c[i] = s1[i];
	while (s2[++o] != '\0')
		c[i + o] = s2[o];
	c[i + o] = '\0';
	return (c);
}
