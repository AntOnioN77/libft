NAME = libft.a
CC = cc
SOURCES = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c\
ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c\
ft_memset.c ft_strchr.c ft_strrchr.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c\
ft_strnstr.c ft_strdup.c ft_tolower.c ft_toupper.c ft_substr.c ft_strjoin.c ft_split.c\
ft_itoa.c ft_putnbr_fd.c ft_putendl_fd.c ft_putchar_fd.c ft_putstr_fd.c ft_strmapi.c\
ft_striteri.c ft_strtrim.c ft_putnbr_base.c ft_putunbr_base.c
OBJECTS =$(subst .c,.o,$(SOURCES))
BONUSSRC = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c\
ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c
BONUSOBJ = $(subst .c,.o,$(BONUSSRC))
FLAGS = -Wall -Wextra -Werror -g
$(NAME): $(OBJECTS)
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)
bonus: $(OBJECTS) $(BONUSOBJ) libft.h
	ar rcs $(NAME) $(BONUSOBJ) $(OBJECTS)
so:
	$(CC) -nostartfiles -fPIC $(FLAGS) $(SOURCES) $(BONUSSRC)
	gcc -nostartfiles -shared -o libft.so $(OBJECTS) $(BONUSOBJ)
%.o: %.c libft.h
	$(CC) $(FLAGS) -c $< -o $@
.PHONY: clean fclean all re
all: $(NAME)
clean:
	rm -f $(OBJECTS)
	rm -f $(BONUSOBJ)
fclean: clean
	rm -f $(NAME)
re: fclean all
