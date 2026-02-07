/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckurtul <ckurtul@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 00:39:02 by ckurtul           #+#    #+#             */
/*   Updated: 2026/02/06 21:02:18 by ckurtul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	size_t	i;
	char	*new;

	i = 0;
	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	new = malloc (len + 1);
	if (!new)
		return (NULL);
	while (s[i])
	{
		new [i] = f(i, s[i]);
		i++;
	}
	new [i] = '\0';
	return (new);
}

/*#include <stdio.h>
#include "libft.h"

char my_toupper(unsigned int i, char c)
{
	(void)i;
	return ft_toupper(c);
}

int main()
{
	char *a = "asdf";
	char *b = ft_strmapi(a, my_toupper);

	printf("%s\n", b);
	free(b);
}*/