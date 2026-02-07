/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckurtul <ckurtul@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 16:23:49 by ckurtul           #+#    #+#             */
/*   Updated: 2026/02/06 21:10:25 by ckurtul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

// #include <stdio.h>

// int main()
// {
// 	t_list *lst = NULL;
// 	t_list *n1 = ft_lstnew("gil");
// 	t_list *n2 = ft_lstnew("ca");

// 	ft_lstadd_front(&lst, n1);
// 	ft_lstadd_front(&lst, n2);

// 	printf("%s", (char *)lst->content);
// 	printf("%s", (char *)lst->next->content);
// }