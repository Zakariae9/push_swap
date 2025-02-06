FLAGS = -Wall -Werror -Wextra
SRC = add_node_front.c length_stack.c new_node.c main.c last_node.c\
add_node_back.c swap_address.c swap2top_elemenets.c swap_data.c\
sa.c sb.c ss.c delete_return_element.c pop_then_push befor_last_node.c\


#don't forget remove man.c becouse you just test your program
OBJS = $(SRC:.c=.o)
NAME = push_swap.a

all: $(NAME)

$(NAME): $(OBJS)
	ar crs $(NAME) $(OBJS)

%.o: %.c
	cc $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all



