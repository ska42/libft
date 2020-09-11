/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 08:23:43 by lmartin           #+#    #+#             */
/*   Updated: 2020/09/11 22:45:08 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t		total;
	void		*ptr;

	total = count * size;
	if (!(ptr = malloc(total)))
		return (NULL);
	ft_bzero(ptr, total);
	return (ptr);
}
