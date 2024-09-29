NAME			= libftprintf.a
NAME_LIBFT		= libft.a


SRCS_DIR		= ./srcs/
HEAD_DIR		= ./includes/
LIBFT_DIR		= ./libft/


rwildcard 		= $(shell find $(1) -type f -name '$(2)')
SRCS			= $(call rwildcard,$(SRCS_DIR),*.c)
OBJS			= $(SRCS:.c=.o)

# SRC			= ft_printf\
# 					formatter
# SRCS			= $(addprefix $(SRCS_DIR), $(addsuffix .c, $(SRC)))
# OBJS			= $(SRCS:.c=.o)


CC				= cc
RM				= rm -f
AR				= ar rc

FLAGS			= -Wall -Wextra -Werror


all:		$(NAME)

$(NAME):	$(OBJS)
			cd $(LIBFT_DIR) && $(MAKE) && cp -v $(NAME_LIBFT) ../$(NAME)
			$(AR) $(NAME) $(OBJS)

.c.o:
			$(CC) $(FLAGS) -c -I $(HEAD_DIR) -I $(LIBFT_DIR) $< -o $(<:.c=.o)

clean:
			$(RM) $(OBJS)
			cd $(LIBFT_DIR) && $(MAKE) clean

fclean:		clean
			$(RM) $(NAME)
			cd $(LIBFT_DIR) && $(MAKE) fclean

re:			fclean all

.PHONY:		all clean fclean re