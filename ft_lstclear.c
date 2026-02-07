/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckurtul <ckurtul@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 15:14:10 by ckurtul           #+#    #+#             */
/*   Updated: 2026/02/06 21:14:02 by ckurtul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
	tmp = NULL;
}

// #include <stdlib.h>
// #include <stdio.h>
// void del_content(void *content)
// {
//     free(content);
// }
// int main()
// {
// 	t_list *a = malloc(sizeof(t_list));
// 	ft_lstclear(&a, del_content);
// }