/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckurtul <ckurtul@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 02:47:47 by ckurtul           #+#    #+#             */
/*   Updated: 2026/02/06 21:04:47 by ckurtul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*#include <stdio.h>
#include "libft.h"

void my_toupper_i(unsigned int i, char *c)
{
    (void)i;
    *c = ft_toupper(*c);
}

int main(void)
{
    char s[] = "emek";   // DİKKAT: dizi olmalı, pointer değil!

    printf("Önce : %s\n", s);

    ft_striteri(s, my_toupper_i);

    printf("Sonra: %s\n", s);

    return (0);
}*/
