# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/10 14:29:55 by diogmart          #+#    #+#              #
#    Updated: 2023/10/12 11:13:49 by diogmart         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = converter

CPP	= c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
RM	= rm -rf

all: $(NAME)

$(NAME):
	@$(CPP) $(CPPFLAGS) main.cpp ScalarConverter.cpp -o $(NAME)

clean:
	@$(RM) $(NAME)

fclean:
	@$(RM) $(NAME)

re: clean all