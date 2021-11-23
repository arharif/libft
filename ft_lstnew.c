/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arharif <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 23:36:42 by arharif           #+#    #+#             */
/*   Updated: 2021/11/21 23:37:57 by arharif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*p;

	p = (t_list *)malloc(sizeof(t_list));
	if (!p)
		return (NULL);
	p -> content = content;
	p -> next = NULL;
	return (p);
}
/*
int main()
{
	t_list *kl;
	int *j ;
	int a = 5;
	j = &a;
	kl = ft_lstnew(j);
	printf("%d ->",*((int *)kl->content));
}*/
