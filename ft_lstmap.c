/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckurtul <ckurtul@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 16:59:34 by ckurtul           #+#    #+#             */
/*   Updated: 2026/02/06 21:15:46 by ckurtul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	void	*new_content;

	if (!lst || !f || !del)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		new_content = f(lst->content);
		new_node = ft_lstnew(new_content);
		if (!new_node)
		{
			del (new_content);
			ft_lstclear (&new_list, del);
			return (NULL);
		}
		ft_lstadd_back (&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}

// #include "libft.h"
// #include <stdio.h>
// #include <stdlib.h>

// void	*sq(void *c)
// {
// 	int *r = malloc(sizeof(int));
// 	*r = (*(int *)c) * (*(int *)c);
// 	return (r);
// }

// void	del(void *c)
// {
// 	free(c);
// }

// int	main(void)
// {
// 	t_list *a = ft_lstnew((int[]){1});
// 	a->next = ft_lstnew((int[]){2});
// 	a->next->next = ft_lstnew((int[]){3});

// 	t_list *b = ft_lstmap(a, sq, del);

// 	while (b)
// 	{
// 		printf("%d ", *(int *)b->content);
// 		b = b->next;
// 	}
// }
