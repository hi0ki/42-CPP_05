C++ = c++ -Wall -Wextra -Werror

SRC = Bureaucrat.cpp Form.cpp main.cpp

NAME = program

OBJ = $(SRC:.cpp=.o)

HEADERS = Bureaucrat.hpp Form.hpp

ALL: $(NAME)

$(NAME): $(OBJ) $(HEADERS)
	$(C++) $(OBJ) -o $(NAME)

%.o:%.cpp $(HEADERS)
	$(C++) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean $(NAME)