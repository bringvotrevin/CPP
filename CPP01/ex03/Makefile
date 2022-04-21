NAME	 	=	a.out
CXX			=	c++
CXXFLAGS	=	-Wall -Werror -Wextra -std=c++98
INFLAGS		=	-I$(INCDIR)
INCDIR		=	includes/
SRCDIR		= 	srcs/

SRCS	=	main.cpp \
			$(addprefix $(SRCDIR), \
			HuamnA.cpp \
			HumanB.cpp \
			Weapon.cpp)

OBJS 	=	$(SRCS:.cpp=.o)

$(NAME)	:	$(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $@

all		:	$(NAME)

clean 	:
	rm -rf $(OBJS)

fclean	:	clean
	rm -rf $(NAME)

re		:	fclean all

.PHONY	: all clean fclean re