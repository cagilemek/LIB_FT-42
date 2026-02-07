/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckurtul <ckurtul@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 12:44:06 by ckurtul           #+#    #+#             */
/*   Updated: 2026/02/06 21:06:15 by ckurtul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}

//  int main()
// {
// 	char a;
// 	int fd;
// 	a = 'b';
// 	fd = open("semih.txt", O_CREAT | O_WRONLY, 0777);
// 	printf("%d\n", fd);
// 	ft_putchar_fd(a,fd);
// }