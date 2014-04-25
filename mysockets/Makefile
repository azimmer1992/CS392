SNAME=server
CNAME=client
SSRC=server.c
CSRC=client.c
LIBPATH=../lib
LIB=my
RM=rm -f
all:$(SSRC) $(CSRC)
	cc -L$(LIBPATH) $(SSRC) -l$(LIB) -o $(SNAME)
	cc -L$(LIBPATH) $(CSRC) -l$(LIB) -o $(CNAME)
clean:
	-$(RM) $(SNAME)
	-$(RM) $(CNAME)
	-$(RM) *.o
	-$(RM) *~
	-$(RM) \#*
	-$(RM) *.core
	-$(RM) *.swp
fclean:clean
re:fclean all
server:$(SSRC)
	cc -L$(LIBPATH) $(SSRC) -l$(LIB) -o $(SNAME)
client:$(CSRC)
	cc -L$(LIBPATH) $(CSRC) -l$(LIB) -o $(CNAME)
