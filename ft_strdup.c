/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckurtul <ckurtul@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 02:55:37 by ckurtul           #+#    #+#             */
/*   Updated: 2026/02/08 00:26:46 by ckurtul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*k;

	k = malloc(ft_strlen(s) + 1);
	if (!k)
		return (NULL);
	ft_memcpy(k, s, ft_strlen(s) + 1);
	return (k);
}
