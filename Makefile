NAME = libft.a
CC = cc
objects = $(addsuffix .o, ft_atoi ft_bzero ft_calloc ft_isalnum ft_isalpha ft_isascii ft_isdigit ft_isprint ft_memchr ft_memcmp ft_memcpy ft_memmove ft_memset ft_strchr ft_strrchr ft_strlcat ft_strlcpy ft_strlen ft_strncmp ft_strnstr ft_strdup ft_tolower ft_toupper ft_substr ft_strjoin ft_split)
flags = -Wall -Wextra -Werror
$(NAME) : $(objects)
	ar rc $(NAME) $(objects)
	ranlib $(NAME)
%.o : %.c libft.h
	$(CC) $(flags) -o $@ -c $<
.PHONY : clean fclean all re
all : $(NAME)
clean :
	rm -f $(objects)
fclean : clean
	rm -f $(NAME)
re : fclean all