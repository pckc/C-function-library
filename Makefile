# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pde-carv <pde-carv@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/25 15:51:10 by pde-carv          #+#    #+#              #
#    Updated: 2020/02/19 19:56:55 by pde-carv         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
SRC	= ft_strlen.c ft_strncmp.c ft_atoi.c ft_isalpha.c ft_isdigit.c \
	ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c \
	ft_tolower.c ft_memset.c ft_bzero.c ft_strnstr.c ft_calloc.c \
	ft_memcpy.c
OBJ	= $(SRC:.c=.o)
BONUS_SRC	= 
BONUS_OBJ	= $(BONUS_SRC:.c=.o)
HEADERS	= libft.h
CFLAGS	= -Wall -Wextra -Werror
RM	= @/bin/rm -f


all: $(NAME)

$(NAME):
	@echo "\nCompilando..."
	@echo "Por favor, aguarde.\n"
	gcc $(CFLAGS) -I $(HEADERS) -c $(SRC)
	@echo "\n"
	ar -rc $(NAME) $(OBJ)
	@echo "\n"
	ranlib $(NAME)
	@echo "\n"
	@echo "\n$(NAME) foi gerado!"

bonus: all

	#gcc $(CFLAGS) -I $(HEADERS) -c $(BONUS_SRC)
	#ar rc $(NAME) $(BONUS_SRC)
	#ranlib $(NAME)

run:
	./$(NAME)

clean:
	$(RM) $(OBJ) $(BONUS_OBJ)
		@echo "\nArquivos objetos removidos!\n"

fclean:	clean
	$(RM) $(NAME)
	@echo "\n$(NAME) removido!\n"

re: fclean all

.PHONY : run clean fclean re
