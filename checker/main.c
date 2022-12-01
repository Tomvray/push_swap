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
#include <stdio.h>

int main(int ac, char **av)
{

	t_list *a;
	t_list *b;
	t_list *lst;

	a = ft_parse(ac, av);	
	b = NULL;
	lst = a;
	while (lst)
	{
		printf("nb = %i\n", lst->nb);
		lst = lst->next;
	}
	
	// if (a && ft_read_instructions(&a, &b))
	// {
	// 	if (ft_is_sorted(a, b))
	// 		write(1, "OK\n, 3");
	// 	else
	// 		write(1, "KO\n, 3");
	// }
	// else
	// 	write(1, "KO\n, 3");
	//printf("sorted = %i", ft_is_sorted(a, b));
	ft_clear(a);
	ft_clear(b);
	return(1);
}
