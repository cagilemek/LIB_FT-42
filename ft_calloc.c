/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckurtul <ckurtul@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 01:35:52 by ckurtul           #+#    #+#             */
/*   Updated: 2026/02/06 22:37:47 by ckurtul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (nmemb != 0 && size != 0 && nmemb > ((size_t) - 1) / size)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	ft_bzero (ptr, (nmemb * size));
	return (ptr);
}

// #include <stdio.h>
// #include <stdlib.h>

// int	main(void)
// {
// 	char *s = ft_calloc(3, sizeof(char));
// 	printf("%d %d %d\n", s[0], s[1], s[2]);
// 	free(s);
// }
