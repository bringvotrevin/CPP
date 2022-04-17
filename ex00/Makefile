NAME		=	megaphone
CXX			=	c++
CXXFLAGS	=	-Wall -Wextra -Wall -pedantic -std=c++98

SRCS	=	megaphone.cpp
OBJS	=	$(SRCS:.cpp=.o)

all	:	$(NAME)

$(NAME)	:	$(OBJS)
		$(CXX) $(CXXFLAGS) $< -o $@

%.o	:	%.cpp
		$(CXX) $(CXXFLAGS) -c $^

clean	:
		rm -rf $(OBJS)

fclean	:	clean
		rm -rf $(NAME)

re		:	fclean all