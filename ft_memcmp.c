/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckurtul <ckurtul@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 01:25:31 by ckurtul           #+#    #+#             */
/*   Updated: 2026/02/07 18:01:37 by ckurtul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*k;
	unsigned char	*p;

	k = (unsigned char *)s1;
	p = (unsigned char *)s2;
	while (n > 0)
	{
		if (*k != *p)
			return (*k - *p);
		n--;
		k++;
		p++;
	}
	return (0);
}
