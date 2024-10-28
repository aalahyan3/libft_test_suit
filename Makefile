# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aalahyan <aalahyan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/24 16:23:56 by aalahyan          #+#    #+#              #
#    Updated: 2024/10/28 14:56:35 by aalahyan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CC=cc
CFLAGS=-Wall -Wextra -Werror
CFILES=		../libft/ft_atoi.c\
			../libft/ft_bzero.c\
			../libft/ft_calloc.c\
			../libft/ft_isalnum.c\
			../libft/ft_isalpha.c\
			../libft/ft_isascii.c\
			../libft/ft_isdigit.c\
			../libft/ft_isprint.c\
			../libft/ft_memchr.c\
			../libft/ft_memcmp.c\
			../libft/ft_memcpy.c\
			../libft/ft_memmove.c\
			../libft/ft_memset.c\
			../libft/ft_strchr.c\
			../libft/ft_strdup.c\
			../libft/ft_strlcat.c\
			../libft/ft_strlcpy.c\
			../libft/ft_strlen.c\
			../libft/ft_strncmp.c\
			../libft/ft_strnstr.c\
			../libft/ft_strrchr.c\
			../libft/ft_tolower.c\
			../libft/ft_toupper.c\
			../libft/ft_substr.c\
			../libft/ft_strjoin.c\
			../libft/ft_strtrim.c\
			../libft/ft_split.c\
			../libft/ft_itoa.c\
			../libft/ft_strmapi.c\
			../libft/ft_striteri.c\
			../libft/ft_putchar_fd.c\
			../libft/ft_putstr_fd.c\
			../libft/ft_putendl_fd.c\
			../libft/ft_putnbr_fd.c
BINDIR=bin
TESTFILES=	test_isalpha.c\
			test_isdigit.c\
			test_isalnum.c\
			test_isascii.c\
			test_isprint.c\
			test_strlen.c\
			test_memset.c\
			correct.c\
			wrong.c\
			test_bzero.c\
			test_memcpy.c\
			test_memmove.c\
			test_strlcpy.c\
			test_strlcat.c\
			test_toupper.c\
			test_tolower.c\
			test_strchr.c\
			test_strrchr.c\
			test_strncmp.c\
			test_memchr.c\
			test_memcmp.c\
			test_strnstr.c\
			test_atoi.c\
			test_calloc.c\
			test_strdup.c\
			test_substr.c\
			test_strjoin.c\
			test_strtrim.c\
			test_split.c
OFILES =	$(patsubst ../libft/%.c, bin/%.o, $(CFILES)) $(patsubst %.c, $(BINDIR)/%.o, $(TESTFILES))


NAME = libft.a

all: $(BINDIR) $(NAME)  test.out
	@./test.out

test.out: $(NAME)
		@$(CC) $(CFLAGS) main.c $(NAME) -o test.out

$(BINDIR): 
	@mkdir bin

$(NAME): $(OFILES)
		@ar rcs $(NAME) $(OFILES)

bin/%.o: ../libft/%.c
	@$(CC) $(CFLAGS) -c $< -o $@
bin/%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

clean: 
	@rm -f $(OFILES)

fclean: clean
	@rm -f $(NAME) test.out
re : fclean all

.PHONEY: all clean fclean re