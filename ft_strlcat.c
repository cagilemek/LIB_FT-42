/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckurtul <ckurtul@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 20:39:05 by ckurtul           #+#    #+#             */
/*   Updated: 2026/02/02 11:55:14 by ckurtul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	l;
	size_t	s;

	i = 0;
	l = 0;
	s = 0;
	while (dst[l])
		l++;
	while (src[s])
		s++;
	if (size <= l)
		return (size + s);
	while (src[i] && i + l < size - 1)
	{
		dst[l + i] = src[i];
		i++;
	}
	dst [l + i] = '\0';
	return (l + s);
}
