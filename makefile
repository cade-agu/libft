
NAME	=	libft.a
CC		=	gcc
CFLAGS	=	-Wall -Werror -Wextra
AR		=	ar
RM		=	rm -f

SOURCES =	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c\
	ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c\
	ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c\
	ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c\
	ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c\
	ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c\
	ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c\
	ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c\
	ft_putendl_fd.c ft_putnbr_fd.c

OBJS = $(SOURCES:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) rcs $(NAME) $(OBJS)

#bonus: $(OBJ) $(OBJBON)
#	$(AR) $(NAME) $(OBJ) $(OBJBON)
#	$(info Bonus functions compiled.)

$(OBJS): %.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
#	$(info * File '$<' compiled.)

clean:
	$(RM) -f $(OBJS)
#	$(info Object files removed.)

fclean: clean
	$(RM) $(NAME)
#	$(info File '$ (NAME)' removed.)

re: fclean all

.PHONY: all bonus clean fclean re
