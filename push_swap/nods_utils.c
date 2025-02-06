#include "push_swap.h"
#include "nodes.c"

int	expected_pos(st_stack *head, int data)
{
	int			pos;
	pos = 0;
	while (head != NULL && data >= head->data)
	{
		head = head->next;
		pos++;
	}
	return (pos);
}

st_stack	*return_node(st_stack **head, int data)
{
	int			i;

	i = 0;
	while ((head) && (*head))
	{
		if (data != (*head)->data)
		{
			*head = (*head)->next;
			i++;
		}
		else 
			return (*head);
	}
	return (NULL);
}

void	swap_nodes(st_stack **head, st_stack **node)
{
	st_stack	*temp;


	temp = *node;
	
}

void	swap_first_with_nodepos(int	pos, st_stack **head)
{
	st_stack	*temp;
	st_stack	*first;
	int			i;

	first = *head;
	temp = *head;
	i = 1;
	while (temp && i <= pos)
	{
		if (i < pos)
			temp = temp->next;
		else
		{
			
			first->next = temp->next;
			temp = first;
			*head = first->next;
		}
		i++;
	}
	
}

int main()
{
	st_stack *a=NULL;
	st_stack *a1 = new_node(10);
	st_stack *a2 = new_node(20);
	st_stack *a3 = new_node(30);
	st_stack *a4 = new_node(40);

	add_node_back(&a, a1);
	add_node_back(&a, a2);
	add_node_back(&a, a3);
	add_node_back(&a, a4);

	//printf("pos = %d\n", expected_pos(a, 30));
	//swap_first_with_nodepos(expected_pos(a, 30), &a);

	swap_nodes(&a1, &a3);

}