NAME		=	executeforms
CXX			=	c++
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98 $(INFLAGS)
INFLAGS		=	-I$(INCDIR)
INCDIR		=	./includes/
SRCDIR		=	srcs/

SRCS	=	main.cpp \
			$(addprefix $(SRCDIR), \
			Bureaucrat.cpp \
			Form.cpp \
			ShrubberyCreationForm.cpp \
			PresidentialPardonForm.cpp \
			RobotomyRequestForm.cpp)
			
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