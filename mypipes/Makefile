Name=mypipes
SRC=pipes.c
LIBPATH=../lib
LIB=my
RM=rm -f
all:$(SRC)
	cc -L$(LIBPATH) $(SRC) -l$(LIB) -o $(Name)
clean:
	-$(RM) $(Name)
fclean:clean
re:fclean all
