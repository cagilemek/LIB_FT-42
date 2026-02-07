/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckurtul <ckurtul@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 03:37:42 by ckurtul           #+#    #+#             */
/*   Updated: 2026/01/24 02:46:54 by ckurtul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*src;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen (s);
	if (start >= s_len)
	{
		src = malloc(1);
		if (!src)
			return (NULL);
		src[0] = '\0';
		return (src);
	}
	if (len > s_len - start)
		len = s_len - start;
	src = malloc(len + 1);
	if (!src)
		return (NULL);
	ft_strlcpy (src, s + start, len + 1);
	return (src);
}
