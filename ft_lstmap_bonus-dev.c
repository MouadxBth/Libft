/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouthai <mbouthai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 16:21:44 by mbouthai          #+#    #+#             */
/*   Updated: 2022/01/27 16:23:20 by mbouthai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*mapped_list;
	t_list	*mapped_element;

	if (!lst)
		return (NULL);
	while (lst)
	{
		mapped_element = ft_lstnew(f(lst->content));
		if (!mapped_element)
		{
			ft_lstclear(&mapped_list, del);
			return (NULL);
		}
		ft_lstadd_back(&mapped_list, mapped_element);
		lst = lst->next;
	}
	return (mapped_list);
}
