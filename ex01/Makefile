NAME = run_ex01

OBJS = main.o

FILES = main.cpp

CXX = c++

RM = rm -rf

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

all :  $(NAME)

%.o: %.cpp iter.hpp
	@$(CXX) $(CXXFLAGS) -c $< -o $@

$(NAME) :  $(OBJS) $(FILES)
	@echo "------>making the ex01<------"
	@$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)
	@echo "--------->ex01 Done<---------"

clean:
	@echo " remove $(OBJS)"
	@$(RM) $(OBJS)

fclean:  clean
	@echo " clean --> $(NAME)"
	@$(RM) $(NAME)

re: fclean all

.PHONY: clean