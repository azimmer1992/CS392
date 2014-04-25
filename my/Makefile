NAME=libmy.a
SRC=my_str.c my_char.c my_int.c my_num_base.c my_alpha.c my_digits.c my_strlen.c my_revstr.c my_strindex.c my_strrindex.c my_find.c my_strcat.c my_rfind.c my_strcmp.c my_strncmp.c my_strconcat.c my_strnconcat.c my_strcpy.c my_strncpy.c my_strdup.c xmalloc.c my_vect2str.c my_str2vect.c my_atoi.c
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
