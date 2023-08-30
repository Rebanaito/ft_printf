UNAME_S := $(shell uname -s)
NAME	=	libftprintf.a
SRC		=	ft_printf.c ft_printf_c.c ft_printf_signed.c ft_printf_unsigned.c \
			ft_printf_s_mac.c ft_printf_p_mac.c ft_printf_spec_parser.c ft_printf_util.c\
			ft_printf_util2.c ft_printf_prcnt_mac.c
ifeq ($(UNAME_S),Linux)
	SRC		=	ft_printf.c ft_printf_c.c ft_printf_signed.c ft_printf_unsigned.c \
			ft_printf_s.c ft_printf_p.c ft_printf_spec_parser.c ft_printf_util.c\
			ft_printf_util2.c ft_printf_prcnt.c
endif
ifeq ($(UNAME_S),Darwin)
	SRC		=	ft_printf.c ft_printf_c.c ft_printf_signed.c ft_printf_unsigned.c \
			ft_printf_s_mac.c ft_printf_p_mac.c ft_printf_spec_parser.c ft_printf_util.c\
			ft_printf_util2.c ft_printf_prcnt_mac.c
endif

LIBFT	=	./libft
OBJ		=	${SRC:.c=.o}
LIBC	=	ar	-rc
CC		=	cc
RM		=	rm -rf
CFLAGS	=	-Wall -Wextra -Werror 

all : ${LIBFT} ${NAME}

${NAME} : ${LIBFT} ${OBJ}
		cp libft/libft.a .
		mv libft.a ${NAME}
		${LIBC} ${NAME} ${OBJ}

${OBJ}	:
		${CC} ${CFLAGS} -c ${SRC}

${LIBFT}:
		${MAKE} -C $@

clean :
		${RM} ${OBJ}
		${MAKE} clean -C libft

fclean : clean
		${RM} ${NAME}
		${MAKE} fclean -C libft

bonus: ${NAME}
		
re :	fclean all

.PHONY: all clean fclean re ${LIBFT}