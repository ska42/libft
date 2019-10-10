/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 14:21:36 by lmartin           #+#    #+#             */
/*   Updated: 2019/10/09 20:59:52 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	reverse(int i, int j, char *res)
{
	int n;

	while (j < i)
	{
		n = res[j];
		res[j++] = res[i];
		res[i--] = n;
	}
}

char	*ft_itoa(int n)
{
	long		i;
	long		j;
	char		*res;

	j = n;
	i = 0;
	if (!n)
		return ("0");
	while (n)
		n = n / 10 + 0 * i++;
	n = (j < 0) ? -1 : 1;
	i = (j < 0) ? i + 1 : i;
	j *= 10 * n;
	if (!(res = malloc((i + 1) * sizeof(char))))
		return (0);
	i = -1;
	while (j /= 10)
		res[++i] = j % 10 + 48;
	if (n < 0)
		res[++i] = '-';
	res[i + 1] = '\0';
	reverse(i, j, res);
	return (res);
}
