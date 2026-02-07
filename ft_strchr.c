/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckurtul <ckurtul@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 03:05:30 by ckurtul           #+#    #+#             */
/*   Updated: 2026/01/19 01:25:11 by ckurtul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t			i;
	unsigned char	k;
	unsigned char	*p;

	i = 0;
	k = (unsigned char)c;
	p = (unsigned char *)s;
	while (p[i])
	{
		if (p[i] == k)
			return ((char *)&p[i]);
		i++;
	}
	if (k == '\0')
		return ((char *)&p[i]);
	return (NULL);
}

/* pointer aritmetiği vers.

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char k;
	unsigned char *p;

	k = (unsigned char)c;
	p = (unsigned char *)s;
	while(*p)
	{
		if(*p == k)
			return((char *)p);
		p++;
	}
	if(k == '\0')
		return ((char *)p);
	return (NULL);
}
*/
/*
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	printf("%s\n", ft_strchr("libft", 'i'));
	return (0);
} */