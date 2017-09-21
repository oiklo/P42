#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: llonger <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/09/16 17:36:31 by llonger           #+#    #+#              #
#    Updated: 2017/09/16 19:43:32 by llonger          ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = do-op

SRC = srcs/*.c

OBJ = *.o

INC = includes/*.h

FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	gcc $(FLAGS)  -o $(NAME) $(SRC)

clean:
	find . \( -name "#*#" -o -name "*~" -o -name ".*" -o -name "a.out" \) -print -delete
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all