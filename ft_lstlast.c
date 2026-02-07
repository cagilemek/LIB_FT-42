/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckurtul <ckurtul@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 14:04:07 by ckurtul           #+#    #+#             */
/*   Updated: 2026/02/06 21:11:26 by ckurtul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst -> next;
	return (lst);
}

// #include <stdio.h>

// int	main(void)
// {
// 	t_list *a = ft_lstnew("ilk");
// 	t_list *b = ft_lstnew("orta");
// 	t_list *c = ft_lstnew("son");

// 	a->next = b;
// 	b->next = c;

// 	t_list *last = ft_lstlast(a);
// 	printf("%s\n", (char *)last->content);
// }