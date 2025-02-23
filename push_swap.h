/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaboumei <zaboumei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 12:04:38 by zaboumei          #+#    #+#             */
/*   Updated: 2025/02/19 11:37:20 by zaboumei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct list
{
	int			me;
	int			cost;
	int			index;
	int			is_up;
	int			data;
	int			rank;
	struct list	*next;
	struct list	*target;
}				t_stack;

t_stack			*new_node(int data);
void			add_node_front(t_stack **head, t_stack *new_node);
int				length_stack(t_stack *head);
t_stack			*last_node(t_stack *head);
void			add_node_back(t_stack **head, t_stack *new);
void			swap2top_elements(t_stack **head);
void			sa(t_stack **head, int print);
void			sb(t_stack **head, int print);
void			ss(t_stack **a, t_stack **b);
t_stack			*delete_return_element(t_stack **head, char element);
void			pop_then_push(t_stack **node_fill, t_stack **node_empty,
					char type, char ele);
void			pb(t_stack **b, t_stack **a, int print);
void			pa(t_stack **a, t_stack **b, int print);
void			rb(t_stack **head, int print);
void			ra(t_stack **head, int print);
void			rr(t_stack **a, t_stack **b);
t_stack			*befor_last_node(t_stack *head);
void			rra(t_stack **head, int print);
void			rrb(t_stack **head, int print);
void			rrr(t_stack **a, t_stack **b);
int				is_olny_numbers(char *str);
int				is_operation_wrong(char **str);
int				is_num_duplicate(char **str);
int				is_outside_range(char *str);
int				is_input_correct(char *str);
int				is_input_correct1(char **str, int words_num);
void			free_(char **str, int rows);
int				rows(char **s);
int				is_num_duplicate1(char **str);
void			rank_list(t_stack **head);
void			set_up_or_down(t_stack **head);
void			sort_2elements(t_stack **head);
void			sort_3elements(t_stack **head);
void			turck_algo(t_stack **a, t_stack **b);
void			set_pos_all_elementes(t_stack **a, t_stack **b);
void			set_up_or_down(t_stack **head);
void			indexing_stacks(t_stack **a, t_stack **b);
void			indexing_list(t_stack **head);
void			set_cost(t_stack *a, t_stack **b);
void			all_process_to_pa(t_stack **a, t_stack **b, t_stack *node);
t_stack			*set_less_cost(t_stack **b);
int				less_cost(t_stack *head);
void			make_nodes_up_top(t_stack **a, t_stack **b, t_stack *cheapest);
void			make_nodes_down_top(t_stack **a, t_stack **b,
					t_stack *cheapest);
void			if_they_both_deff_pos(t_stack **a, t_stack **b,
					t_stack *cheapest);
void			pb_while_a_more3(t_stack **a, t_stack **b);
void			rank_list(t_stack **head);
int				are_inputs_correct(int ac, char **av, t_stack **head);
void			fill_stack(t_stack **a, char *str);
int				is_list_ordered(t_stack *head);
long long		ft_atoi(const char *nptr);
int				ft_isalpha(int c);
int				ft_isdigit(int c);
char			*ft_strchr(const char *s, int c);
int				cmp(const char *s1, const char *s2);
size_t			ft_strlcpy(char *dst, const char *src, size_t size);
size_t			ft_strlen(const char *s);
char			**ft_split(char const *s, char c);
void			free_stack(t_stack *list);
int				larger_num_at_stack(t_stack *head);
int				is_there_biggest(t_stack *head, int num);
int				min_num_at_stack(t_stack *head);
void			set_target_node(t_stack *a, t_stack *b);
void			check_if_sorted(t_stack **a, int min);
void			reset_me(t_stack **a, t_stack **b);
t_stack			*min_stack(t_stack *head);
int				is_num_d(t_stack *a);
char			*join(char **s);
int				is_there_only_spaces(char *s);
int				is_there_spacesinrow_or_empty(char **s);

#endif