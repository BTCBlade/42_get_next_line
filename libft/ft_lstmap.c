/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tochen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/14 23:25:00 by tochen            #+#    #+#             */
/*   Updated: 2017/03/15 10:08:23 by tochen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_et			*ft_lstmap(t_et *lst, t_et *(*f)(t_et *))
{
	t_et		*new;
	t_et		*head;

	if (!lst || !f)
		return (0);
	new = f(lst);
	head = new;
	while (lst->next)
	{
		lst = lst->next;
		new->next = f(lst);
		new = new->next;
	}
	return (head);
}
