# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pde-carv <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/25 15:51:10 by pde-carv          #+#    #+#              #
#    Updated: 2020/01/29 15:51:48 by pde-carv         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
SRC	= ft_strlen.c ft_strncmp.c ft_atoi.c ft_isalpha.c ft_isdigit.c \
	ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c \
	ft_memset.c
OBJ	= $(SRC:.c=.o)
#BONUS_SRC	= ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
#	ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c
BONUS_OBJ	= $(BONUS_SRC:.c=.o)
HEADERS	= libft.h
CFLAGS	= -Wall -Wextra -Werror
RM	= @/bin/rm -f


all: $(NAME)

$(NAME):
	@echo "\nCompilando..."
	@echo "Por favor, aguarde."
	gcc $(CFLAGS) -I $(HEADERS) -c $(SRC)
	ar -rc $(NAME) $(OBJ)
	ranlib $(NAME)
	@echo "\n$(NAME) foi gerado!"

bonus:
	gcc $(CFLAGS) -I $(HEADERS) -c $(BONUS_SRC)
	ar rc $(NAME) $(BONUS_SRC)
	ranlib $(NAME)

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
