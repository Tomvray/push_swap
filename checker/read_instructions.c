#include "checker.h"
#include "instructions.h"

/*
int	ft_do_instruction(char *line, t_list **a, t_list **b)
{
	if (ft_strcmp(line, "sa\n"))
		ft_sa(a);
	else if (ft_strcmp(line, "sb\n"))
		 ft_sa(b);
	else if (ft_strcmp(line, "ss\n"))
		ft_ss(a, b);
	else if (ft_strcmp(line, "ra\n"))
		ft_ra(a);
	else if (ft_strcmp(line, "rb\n"))
		ft_ra(b);
	else if (ft_strcmp(line, "rr\n"))
		ft_rr(a, b);
	else if (ft_strcmp(line, "pa\n"))
		ft_pa(a, b);
	else if (ft_strcmp(line, "pb\n"))
		ft_pa(b, a);
	else if (ft_strcmp(line, "rra\n"))
		ft_rra(a);
	else if (ft_strcmp(line, "rrb\n"))
		ft_rra(b);
	else if (ft_strcmp(line, "rrr\n"))
		ft_rrr(a, b);
	else
		return(0);
	return (1);
}

int	ft_read(t_list **a, t_list **b)
{
	char	*line;
	int		ret;

	line = get_next_line(0);
	ret = 1;
	while (line)
	{
		if (!ft_do_instruction(line, a, b))
			ret = 0;
		free(line);
		line = get_next_line(0);
	}
	return (1);
}
*/
int ft_is_sorted(t_list *a, t_list *b)
{
	int prev;
	if (b)
		return (0);
	prev = a->nb;
	a = a->next;
	while (a)
	{
		if (prev > a->nb)
			return (0);
		prev = a->nb;
		a = a->next;
	}
	return (1);
}
