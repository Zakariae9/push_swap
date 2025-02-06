# ifndef	PUSH_SWAP_H
#define		PUSH_SWAP_H

#include "libft/libft.h"
#include<stdarg.h>
#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
#include <limits.h>

// #include "add_node_back.c"
// #include "delete_return_element.c"
// #include "main.c"
// #include "pop_then_push.c"
// #include "sb.c"
// #include "add_node_front.c"
// #include "last_node.c"
// #include "ss.c"
// #include "swap_data.c"
// #include "length_stack.c"
// #include "new_node.c"
// #include "sa.c"
// #include "swap2top_elemenets.c"


typedef struct	list
{
	int			data;
	struct list	*next;
} st_stack;


st_stack	*new_node(int data);
void	add_node_front(st_stack **head, st_stack *new_node);
int		length_stack(st_stack *head);
st_stack	*last_node(st_stack *head);
void	add_node_back(st_stack **head, st_stack *new);
void	swap2top_elements(st_stack **head);
void	sa(st_stack **head, int print);
void	sb(st_stack **head, int print);
void	ss(st_stack **a, st_stack **b);
st_stack	*delete_return_element(st_stack **head, char element);
void	pop_then_push(st_stack **node_fill, st_stack **node_empty, char type, char ele);
void	pb(st_stack **b, st_stack **a, int print);
void	pa(st_stack **a, st_stack **b, int print);
void	rb(st_stack **head, int print);
void	ra(st_stack **head, int print);
void	rr(st_stack **a, st_stack **b);
st_stack	*befor_last_node(st_stack *head);
void	rra(st_stack **head, int print);
void	rrb(st_stack **head, int print);
void	rrr(st_stack **head);
int 	is_olny_numbers(char *str);
int		is_operation_wrong(char *str);
int		is_num_duplicate(char **str);
int		is_outside_range(char *str);
int		is_input_correct(char *str);
int		is_input_correct1(char **str, int words_num);
void	free_(char **str, int rows);
int		rows(char **s);
int	is_num_duplicate1(char **str);
int	expected_pos(st_stack *head, int data);
void	swap_first_with_nodepos(int	pos, st_stack **head);

#endif