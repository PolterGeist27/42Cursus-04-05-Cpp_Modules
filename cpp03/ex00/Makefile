NAME = claptrap

CPP	= c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -g
RM	= rm -rf

all: $(NAME)

$(NAME):
	@$(CPP) $(CPPFLAGS) main.cpp ClapTrap.cpp -o $(NAME)

clean:
	@$(RM) $(NAME)

fclean:
	@$(RM) $(NAME)

re: clean all