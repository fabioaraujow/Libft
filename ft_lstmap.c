/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabde-ar <fabde-ar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 17:42:20 by fabde-ar          #+#    #+#             */
/*   Updated: 2026/04/21 17:42:27 by fabde-ar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_list	*ft_lstmap_fail(t_list **nw_lst,
			void *content, void (*del)(void *))
{
	if (content)
		del(content);
	ft_lstclear(nw_lst, del);
	return (NULL);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*nw_lst;
	t_list	*nw_node;
	void	*nw_content;

	if (!lst || !f)
		return (NULL);
	nw_lst = NULL;
	while (lst)
	{
		nw_content = f(lst->content);
		if (!nw_content)
			return (ft_lstmap_fail(&nw_lst, NULL, del));
		nw_node = ft_lstnew(nw_content);
		if (!nw_node)
			return (ft_lstmap_fail(&nw_lst, nw_content, del));
		ft_lstadd_back(&nw_lst, nw_node);
		lst = lst->next;
	}
	return (nw_lst);
}
