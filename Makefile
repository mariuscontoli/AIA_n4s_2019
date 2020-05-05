NAME	= 	ai

SRC = 	$(wildcard src/*.c) \

OBJ = 	$(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
		cc -o $(NAME) $(OBJ)

re:
	make fclean
	make all

clean:
	find -name '*.o' -exec rm {} \;

fclean:
	make clean
	rm -f $(NAME)
