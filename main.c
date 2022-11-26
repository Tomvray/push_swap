/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvray <tvray@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 19:18:01 by tvray             #+#    #+#             */
/*   Updated: 2022/11/26 20:47:48 by tvray            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"
#include "instructions.h"

int main(int ac, char **av)
{
	t_list	*a;
	t_list	*lst;

	a = ft_parse(ac, av);
	ft_rra(&a);
	lst = a;
	while (lst)
	{
		printf("i = %i\n", lst->nb);
		lst = lst->next;
	}
	ft_clear(a);
}