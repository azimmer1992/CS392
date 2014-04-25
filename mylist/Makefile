NAME=liblist.a
SRC=new_node.c add_node.c traverse_string.c append.c add_elem.c add_node_at.c count_nodes.c node_at.c elem_at.c remove_node.c remove_last.c remove_node_of.c empty_list.c traverse_char.c traverse_int.c
OBJ=$(SRC:.c=.o)
LIBPATH=../lib
RM=rm -f
all:$(OBJ)
	ar -rc $(LIBPATH)/$(NAME) $(OBJ)
	ranlib $(LIBPATH)/$(NAME)
clean:
	-$(RM) *.o
	-$(RM) *~
	-$(RM) \#*
	-$(RM) *.swp
	-$(RM) *.core
fclean:clean
	-$(RM) $(LIBPATH)/$(NAME)
re:fclean all
