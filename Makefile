target = libft.a
CC = cc
objects = $(addsuffix .o, ft_atoi ft_bzero ft_isalnum ft_isalpha ft_isascii ft_isdigit ft_isprint ft_memchr ft_memcmp ft_memcpy ft_memmove ft_memset ft_strchr ft_strlcat ft_strlcpy ft_strlen ft_strncmp ft_strnstr ft_strdup ft_tolower ft_toupper)
flags = -Wall -Wextra -Werror
$(target) : $(objects)
	ar rc $(target) $(objects)
	ranlib $(target)
%.o : %.c libft.h
	$(CC) $(flags) -o $@ -c $<
.PHONY : clean fclean all re
all : $(target)
clean :
	rm $(objects)
fclean : clean
	rm $(target)
re : fclean all