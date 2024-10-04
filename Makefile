NAME			= libftprintf.a


SRCS_DIR		= ./srcs/
HEAD_DIR		= ./includes/


SRC             = ft_printf.c \
					ft_putlchar.c \
					ft_putlnbr.c \
					ft_putlstr.c \
					ft_putlnbrbase.c \
					ft_putlptr.c
SRCS			= $(addprefix $(SRCS_DIR), $(SRC))
OBJS			= $(SRCS:.c=.o)


CC				= cc
RM				= rm -f
AR				= ar -rcs

FLAGS			= -Wall -Wextra -Werror


all:		$(NAME)

$(NAME):	$(OBJS)
			$(AR) $(NAME) $(OBJS)

.c.o:
			$(CC) $(FLAGS) -c -I $(HEAD_DIR) $< -o $(<:.c=.o)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re