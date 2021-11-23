/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arharif <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 10:48:46 by arharif           #+#    #+#             */
/*   Updated: 2021/11/07 14:23:14 by arharif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
//int main()
//{
//    int fd = open("text.txt", O_RDONLY | O_CREAT | O_WRONLY, "a");
//    int fd2 = open("text2.txt", O_RDONLY | O_CREAT, "r");
//    int fd3 = open("text2.txt", O_RDONLY | O_CREAT, "r");
//    printf("%d %d %d", fd, fd2, fd3);
//    write(fd, " Wadday", 7);
//}
//Input-output system calls in C | Create, Open, Close, Read, Write
