/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misung <misung@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 18:45:19 by misung            #+#    #+#             */
/*   Updated: 2021/12/16 12:35:20 by misung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lst_new_pt;
	t_list	*lst_new;
	t_list	*lst_old;

	if (lst == NULL)
		return (NULL);
	lst_new_pt = ft_lstnew((*f)(lst->content));
	lst_new = lst_new_pt;
	lst_old = lst->next;
	while (1)
	{
		if (lst_old == NULL)
			break ;
		lst_new->next = ft_lstnew((*f)(lst_old->content));
		if (lst_new->next == NULL)
		{
			ft_lstclear(&lst_new, del);
			return (NULL);
		}
		lst_new = lst_new->next;
		lst_old = lst_old->next;
	}
	return (lst_new_pt);
}
