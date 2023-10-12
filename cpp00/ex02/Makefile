# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/22 13:46:43 by diogmart          #+#    #+#              #
#    Updated: 2023/05/22 13:57:27 by diogmart         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bank

CPP	= c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
RM	= rm -rf

all: $(NAME)

$(NAME):
	@$(CPP) $(CPPFLAGS) Account.cpp tests.cpp -o $(NAME)

clean:
	@$(RM) $(NAME)

fclean:
	@$(RM) $(NAME)

re: clean all