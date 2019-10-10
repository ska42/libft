/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 19:48:56 by lmartin           #+#    #+#             */
/*   Updated: 2019/10/09 15:16:52 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(void *))
{
	t_list *new;
	t_list *start;

	if (!(new = malloc(sizeof(t_list))))
		return (0);
	new = f(lst);
	start = new;
	while (lst->next)
	{
		lst = lst->next;
		if (!(new->next = malloc(sizeof(t_list))))
			return (0);
		new->next = f(lst);
		new = new->next;
	}
	return (start);
}
