/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckurtul <ckurtul@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 14:30:55 by ckurtul           #+#    #+#             */
/*   Updated: 2026/02/06 21:12:21 by ckurtul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del (lst->content);
	free (lst);
}

// #include <stdlib.h>
// #include <stdio.h>

// void del_content(void *content)
// {
//     free(content);
// }
// int main(void)
// {
//     t_list *node = malloc(sizeof(t_list));
//     if (!node)
//         return (1);

//     node->content = malloc(20);  // node içeriği
//     node->next = NULL;

//     ft_lstdelone(node, del_content);

//     printf("Node ve içeriği silindi.\n");
//     return (0);
// }
