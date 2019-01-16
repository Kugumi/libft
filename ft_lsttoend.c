/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lsttoend.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jijerde <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/27 23:51:04 by jijerde           #+#    #+#             */
/*   Updated: 2018/12/28 00:28:03 by jijerde          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lsttoend(t_list **alst, t_list *new)
{
	t_list **alst2;

	alst2 = alst;
	if (!alst || !new)
		return ;
	while ((*alst2)->next)
	{
		*alst2 = (*alst2)->next;
	}
	(*alst2)->next = new;
	new->next = NULL;
}
