NAME		=	animalbrain
CXX			=	c++
CXXFLAGS	=	-Wall -Wextra -Wextra -std=c++98 $(INFLAGS)
INFLAGS		=	-I$(INCDIR)
INCDIR		=	./includes/
SRCDIR		= 	srcs/

SRCS	=	main.cpp \
			$(addprefix $(SRCDIR), \
			Animal.cpp \
			Dog.cpp \
			Cat.cpp \
			WrongAnimal.cpp \
			WrongCat.cpp \
			Brain.cpp)
			
OBJS 	=	$(SRCS:.cpp=.o)

$(NAME)	:	$(OBJS)
		$(CXX) $(CXXFLAGS) $(OBJS) -o $@

all	:	$(NAME)

clean	:
		rm -rf $(OBJS)

fclean	:	clean
		rm -rf $(NAME)

re		:	fclean all

.PHONY	: all clean fclean re