/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvray <tvray@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 20:42:37 by tvray             #+#    #+#             */
/*   Updated: 2022/11/26 20:42:55 by tvray            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_pa(t_list **a, t_list **b)
{
	t_list	*to_push;

	if (*a)
	{
		to_push = *a;
		*a = to_push->next;
		to_push->next = *b;
		*b = to_push;
	}
}

void	ft_pb(t_list **a, t_list **b)
{
	t_list	*to_push;

	if (*b)
	{
		to_push = *b;
		*b = to_push->next;
		to_push->next = *a;
		*a = to_push;
	}
}
