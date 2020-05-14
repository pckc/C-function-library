# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pde-carv <pde-carv@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/25 15:51:10 by pde-carv          #+#    #+#              #
#    Updated: 2020/05/14 18:53:53 by pde-carv         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
SRCS	= ft_strlen.c ft_strncmp.c ft_atoi.c ft_isalpha.c ft_isdigit.c \
	ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c \
	ft_tolower.c ft_memset.c ft_bzero.c ft_strnstr.c ft_calloc.c \
	ft_memcpy.c ft_memccpy.c ft_memmove.c ft_strchr.c ft_memchr.c \
	ft_memcmp.c ft_strdup.c ft_strlcat.c ft_strnlen.c ft_putchar.c \
	ft_putchar_fd.c ft_putnbr.c ft_putnbr_fd.c ft_putstr.c \
	ft_putstr_fd.c ft_isspace.c ft_putendl.c ft_putendl_fd.c ft_strupcase.c \
	ft_strlcpy.c ft_itoa.c ft_strrchr.c ft_substr.c ft_strjoin.c \
	ft_strtrim.c ft_split.c ft_strmapi.c
OBJS	= $(SRCS:.c=.o)
BONUS_SRCS	= ft_lstnew.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c \
	ft_lstiter.c ft_lstlast.c ft_lstmap.c ft_lstadd_back.c ft_lstsize.c
BONUS_OBJS	= $(BONUS_SRCS:.c=.o)
HEADERS	= libft.h
CFLAGS	= -Wall -Wextra -Werror #-fsanitize=address -g
RM	= @/bin/rm -f


all: $(NAME)

$(NAME):
	@echo "\nCompilando..."
	@echo "Por favor, aguarde.\n"
	clang $(CFLAGS) -I $(HEADERS) -c $(SRCS)
	@echo "\n"
	ar -rc $(NAME) $(OBJS)
	@echo "\n"
	ranlib $(NAME)
	@echo "\n"
	@echo "\n$(NAME) foi gerado!"

bonus: all

	clang $(CFLAGS) -I $(HEADERS) -c $(BONUS_SRCS)
	ar -rc $(NAME) $(BONUS_OBJS)
	ranlib $(NAME)

run:
	./$(NAME)

clean:
	$(RM) $(OBJS) $(BONUS_OBJS)
		@echo "\nArquivos objetos removidos!\n"

fclean:	clean
	$(RM) $(NAME)
	@echo "\n$(NAME) removido!\n"

re: fclean all

.PHONY : run clean fclean re
