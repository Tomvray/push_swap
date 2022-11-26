/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvray <tvray@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 20:41:05 by tvray             #+#    #+#             */
/*   Updated: 2022/11/26 20:41:31 by tvray            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

t_list	*ft_lst_last(t_list *a)
{
	while (a && a->next)
		a = a->next;
	return (a);
}

void	ft_ra(t_list **a)
{
	t_list	*temp;

	if (!a || !*a || !(*a)->next)
		return ;
	temp = *a;
	*a = temp->next;
	(ft_lst_last(*a))->next = temp;
	temp->next = NULL;
}

void	ft_rra(t_list **a)
{
	t_list	*pre_last;

	if (!a || !*a || !(*a)->next)
		return ;
	pre_last = *a;
	while (pre_last->next->next)
		pre_last = pre_last->next;
	pre_last->next->next = *a;
	*a = pre_last->next;
	pre_last->next = NULL;
}
