C_FILES		=	ft_atoi.c ft_isalpha.c  ft_itoa.c ft_itoa_ll.c ft_itoa_ull.c ft_strjoin.c ft_memmove.c\
				ft_putnbr_fd.c  ft_memcpy.c ft_strlcpy.c ft_striteri.c ft_tolower.c\
				ft_bzero.c ft_isascii.c ft_memchr.c  ft_memset.c ft_putstr_fd.c\
				ft_strlen.c ft_strrchr.c ft_toupper.c ft_strnstr.c ft_calloc.c\
				ft_isdigit.c ft_memcmp.c ft_putchar_fd.c ft_split.c \
				ft_strmapi.c ft_strtrim.c ft_isalnum.c ft_isprint.c ft_strdup.c\
				ft_putendl_fd.c ft_strchr.c ft_strlcat.c ft_strncmp.c ft_substr.c\
				ft_strcmp.c ft_strcpy.c ft_strcat.c ft_strncpy.c ft_isspace.c\
				ft_putstr.c ft_putnbr_ll.c ft_putnbr_ull.c ft_itoa_oct.c ft_itoa_hex.c\
				ft_str_tolower.c ft_str_toupper.c
O_FILES 			= $(C_FILES:.c=.o)

BONUS_C_FILES	=	ft_lstadd_front.c  ft_lstdelone.c  ft_lstlast.c  ft_lstnew.c\
				ft_lstadd_back.c ft_lstclear.c ft_lstiter.c ft_lstmap.c ft_lstsize.c
BONUS_O_FILES		= $(BONUS_C_FILES:.c=.o)

CC 				= gcc
CFLAGS			= -Wall -Wextra -Werror -I.

NAME 			= libft.a

all:			$(NAME)

$(NAME):		$(O_FILES)
				ar rcs $(NAME) $(O_FILES)

clean:   
				rm -f $(O_FILES)

fclean:			clean
				rm -f $(NAME) $(BONUS_O_FILES)

re:				fclean $(NAME)
	
bonus:			$(O_FILES) $(BONUS_O_FILES)
				ar rcs $(NAME) $(O_FILES) $(BONUS_O_FILES)

.PHONY:			all clean fclean re bonus