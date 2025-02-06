#include "push_swap.h"

// int main(int ac, char **av)
// {

// 	if (ac == 2)
// 	{
// 		if (!is_input_correct(av[1]) || av[1][0] == 0)
// 			printf("Error\n");
// 		else
// 			printf("pass\n");
// 	}
// 	else if (ac > 2)
// 	{
// 		if (is_input_correct1(av, ac - 1))
// 			printf("pass\n");
// 		else
// 		{
// 			printf("wrong\n");
// 		}

// 	}
	
// 	return (0);
// }


int	is_list_ordered(st_stack *head)
{
	int	small_num;

	small_num = INT_MIN;
	while (head != NULL)
	{
		if (small_num > head->data)
			return (0);
		small_num = head->data;
		head = head->next;
	}
	return (1);
}

int main()
{
	st_stack *a =NULL, *a1, *a2, *a3;

	a1=new_node(10);
	a2=new_node(20);
	a3= new_node(30);

	add_node_back(&a,a1);
	add_node_back(&a,a2);
	add_node_back(&a,a3);

	int is = is_list_ordered(a);

	if (is)
		printf("yes the list is orderd\n");
	else
		printf("no the list is't orderd\n");

}