NAME		=	megaphone
CXX			=	c++
CXXFLAGS	=	-Wall -Wextra -Werror -pedantic -std=c++98

SRCS	=	megaphone.cpp

OBJS	=	$(SRCS:.cpp=.o)

$(NAME)	:	$(OBJS)
		$(CXX) $(CXXFLAGS) $< -o $@

all	:	$(NAME)

clean	:
		rm -rf $(OBJS)

fclean	:	clean
		rm -rf $(NAME)

re		:	fclean all

.PHONY	: all clean fclean re