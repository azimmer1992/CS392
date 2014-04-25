NAME=termcaps
SRC=caps.c check_char.c elems.c get_win_size.c move.c refresh.c term_cap.c terminal.c main.c
LIBPATH=../lib
LIB=my
RM=rm -f
all: $(SRC)
	cc -L$(LIBPATH) -g $(SRC) -l$(LIB) -ltermcap -o $(NAME)
clean:
	-$(RM) $(NAME)
	-$(RM) *.o
	-$(RM) *~
	-$(RM) \#*
	-$(RM) *.core
	-$(RM) *.swp
fclean:clean
re:fclean all
