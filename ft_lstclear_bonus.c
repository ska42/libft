/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 19:40:50 by lmartin           #+#    #+#             */
/*   Updated: 2019/10/09 15:16:42 by lmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *next;
	t_list *curr;

	curr = *lst;
	while (curr->next)
	{
		curr = *lst;
		del(curr->content);
		next = curr->next;
		free(curr);
		*lst = NULL;
		*lst = next;
	}
}
