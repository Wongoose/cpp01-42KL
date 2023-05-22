NAME = zombie
COMPILER = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = 	main.cpp 			\
		Zombie.cpp 			\
		newZombie.cpp 		\
		randomChump.cpp

OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS) $(SRCS)
	$(COMPILER) $(CFLAGS) $(OBJS) -o $@

clean : 
	rm $(OBJS)

fclean : clean 
	rm -rf $(NAME)

re : fclean all
