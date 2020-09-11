/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 16:46:05 by lmartin           #+#    #+#             */
/*   Updated: 2020/09/12 00:23:35 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	char	*ptr;
	int		num;
	int		sign;

	ptr = (char *)str;
	num = 0;
	sign = 1;
	while (ft_iswhitespace(*ptr))
		ptr++;
	if (*ptr == '-' || *ptr == '+')
		sign *= (*ptr++ == '-') ? -1 : 1;
	while (ft_isdigit(*ptr))
		num = num * 10 + *ptr++ - '0';
	return (num * sign);
}
