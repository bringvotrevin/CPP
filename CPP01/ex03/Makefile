NAME	 	=	weapon
CXX			=	c++
CXXFLAGS	=	-Wall -Werror -Wextra -std=c++98 $(INFLAGS)
INFLAGS		=	-I$(INCDIR)
INCDIR		=	includes/
SRCDIR		= 	srcs/

SRCS	=	main.cpp \
			$(addprefix $(SRCDIR), \
			HumanA.cpp \
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