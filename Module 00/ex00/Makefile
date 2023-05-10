# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/10 12:54:57 by diogmart          #+#    #+#              #
#    Updated: 2023/05/10 14:31:45 by diogmart         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone
SRC = megaphone.cpp
CPP = c++
CPPFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	@$(CPP) $(CPPFLAGS) -o $@ $(SRC)

clean:
	@rm -f $(NAME)

fclean: clean
	@rm -f $(NAME)

re: fclean all
