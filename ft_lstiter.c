/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckurtul <ckurtul@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 16:23:43 by ckurtul           #+#    #+#             */
/*   Updated: 2026/02/06 21:14:33 by ckurtul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f (lst->content);
		lst = lst -> next;
	}
}

// #include <stdio.h>
// void print_content(void *content)
// {
//     printf("%d\n", *(int *)content+4);
// }
// int main()
// {
// 	int *a = malloc(sizeof(int)); *a = 9;
//     int *b = malloc(sizeof(int)); *b = 2;
//     int *c = malloc(sizeof(int)); *c = 4;
//     int *d = malloc(sizeof(int)); *d = 1;
//     int *e = malloc(sizeof(int)); *e = 6;

//     t_list *n1 = ft_lstnew(a);
//     t_list *n2 = ft_lstnew(b);
//     t_list *n3 = ft_lstnew(c);
//     t_list *n4 = ft_lstnew(d);
//     t_list *n5 = ft_lstnew(e);

//     n1->next = n2;
//     n2->next = n3;
//     n3->next = n4;
//     n4->next = n5;

//     ft_lstiter(n1, print_content);

// }