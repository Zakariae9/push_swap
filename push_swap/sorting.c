#include "push_swap.h"
// #include "nodes.c"
// #include "ra.c"
// #include "sa.c"
// #include "pop_then_push.c"
// #include "swap2top_elemenets.c"
// #include "rra.c"
// #include "delete_return_element.c"

void	sort_2elements(st_stack **head)
{
	if (head && length_stack(head) == 2)
	{
		if ((*head)->data > (*head)->next->data)
			sa(head, 1);
	}
}

void	sort_3elements(st_stack **head)
{
	if (head && length_stack(head) == 3)
	{
		if (((*head)->data > (*head)->next->data) && ((*head)->data > (*head)->next->next->data))
		{
			ra(head, 1);
			if ((*head)->data > (*head)->next->data)
				sa(head, 1);
		}
		else if (((*head)->next->data > (*head)->data) && ((*head)->next->data > (*head)->next->next->data))
		{
			rra(head, 1);
			if ((*head)->data > (*head)->next->data)
				sa(head, 1);
		}
		else
			sa(head, 1);
	}
}

void	sort_4element(st_stack **head)
{
	if (head && length_stack(head) == 4)
	{
		sort_3elements((*head)->next);
		if ((*head)->next > (*head)->next->next)
			sa(head, 1);
	}
}

int main()
{
	st_stack *a=NULL, *a1=NULL, *a2=NULL;

	a1= new_node(1);
	a2 = new_node(2);
	// a3 = new_node(3);

	add_node_back(&a, a1);
	add_node_back(&a, a2);
	// add_node_back(&a, a3);

	sort_2elements(&a);

	while (a != NULL){
		printf("%d\n", a->data);
		a = a->next;
	}
	

}