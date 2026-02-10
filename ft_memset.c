/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckurtul <ckurtul@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 07:58:14 by ckurtul           #+#    #+#             */
/*   Updated: 2026/02/07 17:03:17 by ckurtul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*k;

	k = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		k[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
