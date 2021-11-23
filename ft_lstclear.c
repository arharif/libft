/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arharif <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 23:43:32 by arharif           #+#    #+#             */
/*   Updated: 2021/11/21 23:43:42 by arharif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	if (lst)
	{
		while (*lst)
		{
			ft_lstdelone(*lst, del);
			(*lst) = (*lst)->next;
		}
		(*lst) = NULL;
	}
	return ;
}
/*
int main()
{
	t_list *l;
	t_list *l1;
	t_list *l2;

	l = ft_lstnew(ft_strdup("kko "));
	l1 = ft_lstnew(ft_strdup("zaplo "));
	l2 = ft_lstnew(ft_strdup("batbat "));
	l->next = l1;
	l1->next = l2;
	l2->next= NULL;
	ft_lstclear(&l, del);
	while(l)
	{
		printf("%s", l->content);
		l = l->next;
	}
}*/
