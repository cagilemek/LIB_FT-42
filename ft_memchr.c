/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckurtul <ckurtul@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 15:12:22 by ckurtul           #+#    #+#             */
/*   Updated: 2026/02/07 18:00:46 by ckurtul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*k;

	k = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (k[i] == (unsigned char)c)
			return (k + i);
		i++;
	}
	return (NULL);
}
