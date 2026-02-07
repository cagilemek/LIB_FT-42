/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckurtul <ckurtul@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 01:11:21 by ckurtul           #+#    #+#             */
/*   Updated: 2026/01/29 16:35:40 by ckurtul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	char	*ptr;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr (set, *s1))
		s1++;
	len = ft_strlen (s1);
	while (len && ft_strchr(set, s1[len - 1]))
		len--;
	ptr = malloc (len + 1);
	if (!ptr)
		return (NULL);
	ft_memcpy(ptr, s1, len);
	ptr[len] = '\0';
	return (ptr);
}

/*#include <stdio.h>
int main()
{
	char *a;
	char *set;
	a = " !!? bbbaoooo  ?!! ";
	set = " !?";
	printf("%s", ft_strtrim(a, set));
	
}*/