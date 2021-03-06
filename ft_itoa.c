/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arharif <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 14:56:17 by arharif           #+#    #+#             */
/*   Updated: 2021/11/07 17:51:52 by arharif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	len_n(int n)
{
	int	i;

	i = 1;
	if (n < 0)
	{
		n = -n;
		i++;
	}
	while (n >= 10)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*ptr;
	int		len;
	long	nb;

	nb = n;
	if (n == -2147483648)
		return (ft_strdup ("-2147483648"));
	if (n == 0)
		return (ft_strdup ("0"));
	len = len_n(n);
	ptr = (char *)malloc(sizeof(char) * (len + 1));
	if (!ptr)
		return (NULL);
	ptr[len] = '\0';
	if (n < 0)
	{
		n = -n;
		ptr[0] = '-';
	}
	while (n)
	{
		ptr[--len] = n % 10 + 48;
		n = n / 10;
	}
	return (ptr);
}
