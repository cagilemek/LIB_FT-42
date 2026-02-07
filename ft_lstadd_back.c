/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckurtul <ckurtul@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 14:11:10 by ckurtul           #+#    #+#             */
/*   Updated: 2026/02/06 21:11:53 by ckurtul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast (*lst);
	last ->next = new;
}

// #include "libft.h"
// #include <stdio.h>

// int	main(void)
// {
// 	t_list *lst = NULL;

// 	ft_lstadd_back(&lst, ft_lstnew("ilk"));

// 	printf("%s\n", (char *)lst->content);
// }
