##
## EPITECH PROJECT, 2019
## pushswap
## File description:
## Makefile
##

NAME	=	my_rpg

# ========================================================================== #
MAIN_PATH	=	./src/
MAIN	=	main.c\

# ========================================================================== #
SRC =	$(addprefix $(MAIN_PATH), $(MAIN))\


# ========================================================================== #
CC	=	gcc

OBJ	= 	$(SRC:.c=.o)

LIB	=	-L./lib/ -l my_tools

CFLAGS	=	-g -g3 -I./include -I./include/lib_inc


# ========================================================================== #
REDDARK	=	\033[31;1m
RED	=	\033[31;1m
GREEN	=	\033[32;1m
YEL	=	\033[33;1m
BLUE	=	\033[34;1m
PINK	=	\033[35;1m
CYAN	=	\033[36;1m
WHITE	=	\033[0m


# ========================================================================== ##
all:	$(NAME)
	@printf "$(GREEN)\n$(WHITE)"
	@printf "$(GREEN)  [$(WHITE)MY_RPG$(GREEN)] → "
	@printf "$(WHITE)Compile completed. "
	@printf "$ Binaire : $(CYAN) ./%s$(WHITE)\n\n" $(NAME)

$(NAME):	$(OBJ)
	make -C ./lib/
	$(CC)	-o	$(NAME)	$(OBJ)	$(LIB)	$(CFLAGS)

clean:
	make -C ./lib/ clean
	rm -rf	$(OBJ)
	rm -f	*~
	rm -f	*#
	rm -f	#*
	@printf "$(GREEN)\n$(WHITE)"
	@printf "$(GREEN)  [$(WHITE)MY_RPG$(GREEN)] → "
	@printf "$(WHITE)Deletion complete\n\n"

fclean:	clean
	make -C ./lib/ fclean
	rm -rf  $(NAME)

re:	fclean all

# ========================================================================== ##
%.o:	%.c
	@printf "$(GREEN)[$(WHITE)MY_RPG$(GREEN)] — $(WHITE)%-45s\n" $<
	@printf "$(GREEN) → $(RES) %-70s" $@
	@printf "$(GREEN)[$(WHITE)√$(GREEN)]\n\n"
	@gcc $(CFLAGS) -o $@ -c $<
