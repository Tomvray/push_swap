/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvray <tvray@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 20:44:38 by tvray             #+#    #+#             */
/*   Updated: 2022/11/26 20:44:39 by tvray            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INSTRUCTIONS_H
# define INSTRUCTIONS_H
# include "checker.h"

void	ft_sa(t_list **a);
void	ft_ss(t_list **a, t_list **b);
void	ft_ra(t_list **a);
void	ft_rr(t_list **a, t_list **b);
void	ft_rra(t_list **a);
void	ft_rrr(t_list **a, t_list **b);
void	ft_pa(t_list **a, t_list **b);

#endif