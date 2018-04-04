/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdouniol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 03:30:46 by jdouniol          #+#    #+#             */
/*   Updated: 2017/11/29 02:29:00 by jdouniol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *lst2;
	t_list *start;

	if (lst != NULL)
	{
		if (!(start = malloc(sizeof(lst))))
			return (NULL);
		start = ft_lstnew(lst, lst->content_size);
		start = f(lst);
		lst2 = start;
		while (lst->next != NULL)
		{
			lst = lst->next;
			lst2->next = f(lst);
			lst2 = lst2->next;
		}
		lst2 = NULL;
		return (start);
	}
	return (NULL);
}
