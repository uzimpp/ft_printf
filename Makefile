NAME			= libftprintf.a
NAME_LIBFT		= libft.a


SRCS_DIR		= ./srcs/
HEAD_DIR		= ./includes/


# rwildcard 		= $(shell find $(1) -type f -name '$(2)')
# SRCS			= $(call rwildcard,$(SRCS_DIR),*.c)
# OBJS			= $(SRCS:.c=.o)

SRC             = ft_printf \
					ft_putlchar \
					ft_putlnbr \
					ft_putlnbrbase \
					ft_putlptr \
					ft_putlstr
SRCS			= $(addprefix $(SRCS_DIR), $(addsuffix .c, $(SRC)))
OBJS			= $(SRCS:.c=.o)


CC				= cc
RM				= rm -f
AR				= ar -rsc

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