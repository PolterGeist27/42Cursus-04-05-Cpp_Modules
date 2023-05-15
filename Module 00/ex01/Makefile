# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/10 14:28:58 by diogmart          #+#    #+#              #
#    Updated: 2023/05/15 09:58:26 by diogmart         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

INCS = ./includes/

SRC_DIR = ./srcs/

SRC =	srcs/main.cpp \
		srcs/PhoneBook.cpp \
		srcs/Contact.cpp \

OBJ_DIR = ./bin/

OBJ = $(SRC:.cpp=.o)

CPP = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

$(OBJ_DIR)%.o: $(SRC_DIR)%.cpp
	@mkdir -p $(OBJ_DIR)
	@$(CPP) $(CPPFLAGS) -I $(INCS) -c $< -o $@

all: $(NAME)

$(NAME): $(addprefix $(OBJ_DIR), $(OBJ))
	@$(CPP) $(CPPFLAGS) -I $(INCS) -o $@ $^

clean:
	@rm -rf $(OBJ_DIR)

fclean: clean
	@rm -f $(NAME)

re: fclean all
