/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arharif <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 13:39:42 by arharif           #+#    #+#             */
/*   Updated: 2021/11/14 03:49:07 by arharif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*str;
	size_t			i;

	str = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		str[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
//Remplir une zone mémoire avec un octet donné
//La fonction memset() remplit les len premiers 
//octets de la zone mémoire pointée par b avec l'octet c.
/* int main()
 * {
 *		char ab[] = "hello world";
 *		int len = 4;
 *		char a = 'a';
 *		ft_memset(ab, a, len);
 *		printf("%s", ab);
 * }*/
//  int main(void)
// {
//     int tab[] = {5000, 2};
//     unsigned char *ptr;
//     int i;

//     ptr = (unsigned char *)tab;
//     while (i < 8)
//     {
//         printf("--> %d -- %p\n", ptr[i], &ptr[i]);
//         i += 4;
//     }
// }
