CFLAGS = -lX11 -lXtst -std=c99 $(OPT)
CC = gcc
SRC = xfakeevent.c
OBJ = $(SRC:.c=.o)
EXEC = xfakeevent
OPT = -Os
BINPREFIX = /usr/local/bin

cleanwn: $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(EXEC)

clean:
	@echo "cleaning"
	rm -f $(EXEC) *.o

install:
	@echo "installing $(EXEC) to $(BINPREFIX)"
	@mkdir -p "$(BINPREFIX)"
	@cp $(EXEC) "$(BINPREFIX)"
	@chmod 755 "$(BINPREFIX)/$(EXEC)"

uninstall:
	@echo "removing $(EXEC) from $(BINPREFIX)"
	@rm -f "$(BINPREFIX)/$(EXEC)"
