NAME = fixedpoint

CPP	= c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
RM	= rm -rf

all: $(NAME)

$(NAME):
	@$(CPP) $(CPPFLAGS) main.cpp Fixed.cpp -o $(NAME)

clean:
	@$(RM) $(NAME)

fclean:
	@$(RM) $(NAME)

re: clean all