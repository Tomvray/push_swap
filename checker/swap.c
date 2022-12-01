/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvray <tvray@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 20:41:02 by tvray             #+#    #+#             */
/*   Updated: 2022/11/26 20:42:24 by tvray            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_sa(t_list **a)
{
	t_list	*temp;

	if (a && *a && (*a)->next)
	{
		temp = (*a)->next;
		(*a)->next = temp->next;
		temp->next = (*a);
		*a = temp;
	}
}

void	ft_sb(t_list **b)
{
	t_list	*temp;

	if (!b || !*b || !(*b)->next)
		return ;
	temp = (*b)->next;
	(*b)->next = temp->next;
	temp->next = (*b);
	*b = temp;
}

void	ft_ss(t_list **a, t_list **b)
{
	ft_sa(a);
	ft_sa(b);
}
