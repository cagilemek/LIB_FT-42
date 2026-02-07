/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckurtul <ckurtul@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 02:49:28 by ckurtul           #+#    #+#             */
/*   Updated: 2026/01/27 01:10:30 by ckurtul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)

{
	size_t	i;
	size_t	j;
	char	*top;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	top = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!top)
		return (NULL);
	while (s1[i])
	{
		top[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		top[i + j] = s2[j];
		j++;
	}
	top[i + j] = '\0';
	return (top);
}
