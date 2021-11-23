/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arharif <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 14:35:00 by arharif           #+#    #+#             */
/*   Updated: 2021/11/07 14:49:28 by arharif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len1;
	char	*ptr;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	len1 = ft_strlen(s1);
	while (len1 && ft_strchr(set, s1[len1 - 1]))
		len1--;
	ptr = (char *)malloc(sizeof(char) * (len1 + 1));
	if (!ptr)
		return (0);
	ft_memcpy(ptr, s1, len1);
	ptr[len1] = '\0';
	return (ptr);
}
