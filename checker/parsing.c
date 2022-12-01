/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvray <tvray@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 19:17:53 by tvray             #+#    #+#             */
/*   Updated: 2022/11/26 20:43:45 by tvray            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"
#include <limits.h>

void	*ft_clear(t_list *lst)
{
	t_list	*next;

	while (lst)
	{
		next = lst->next;
		free(lst);
		lst = next;
	}
	return (NULL);
}

t_list	*ft_new(int nb, t_list *a)
{
	t_list	*new;
	t_list	*last;

	new = malloc(sizeof(t_list));
	if (!new)
		return (ft_clear(a));
	else
	{
		new->next = NULL;
		new->nb = nb;
		if (!a)
			return (new);
		last = a;
		while (last->next)
			last = last->next;
		last->next = new;
		return (a);
	}
}

t_list	*ft_lst_add_back(char	*str, t_list *a)
{
	unsigned int	nb;
	int				i;
	int				sign;

	nb = 0;
	i = 0;
	sign = 1;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	while ('0' <= str[i] && str[i] <= '9')
	{
		nb = nb * 10 + str[i] - '0';
		i++;
		if (nb > (unsigned int) INT_MAX + 1
			|| (nb == (unsigned int) INT_MAX + 1 && sign == 1))
			return (ft_clear(a));
	}
	if (str[i])
		return (ft_clear(a));
	return (ft_new(nb * sign, a));
}

t_list	*ft_parse(int ac, char **strs)
{
	int		i;
	t_list	*a;

	i = 1;
	a = NULL;
	while (i < ac)
	{
		a = ft_lst_add_back(strs[i], a);
		if (!a)
			return (NULL);
		i++;
	}
	return (a);
}
