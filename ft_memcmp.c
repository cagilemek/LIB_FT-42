/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckurtul <ckurtul@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 01:25:31 by ckurtul           #+#    #+#             */
/*   Updated: 2026/02/06 17:14:39 by ckurtul          ###   ########.fr       */
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

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	*a = "hello";
// 	char	*b = "hezzo";

// 	printf("%d\n", ft_memcmp(a, b, 5));
// }

// char a[] = "hello";
// char b[] = "hezzo"; FARKINI SORRRRRR
// */
