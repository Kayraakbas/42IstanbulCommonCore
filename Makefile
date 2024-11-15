SRCS			= 	ft_printf.c ft_pt_hex.c ft_pt_int.c ft_pt_ptr.c ft_pt_str.c ft_pt_unsigned.c
OBJS			= 	$(SRCS:.c=.o)
CC				= 	gcc
RM				= 	rm -f
CFLAGS			= 	-Wall -Wextra -Werror
NAME			= 	libftprintf.a

all:			$(NAME)

$(NAME):		$(OBJS)
				ar rcs $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY: 		all clean fclean re