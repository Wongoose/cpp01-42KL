NAME = harl
COMPILER = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = 	main.cpp Harl.cpp

OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS) $(SRCS)
	$(COMPILER) $(CFLAGS) $(OBJS) -o $@

clean : 
	rm $(OBJS)

fclean : clean 
	rm -rf $(NAME)

re : fclean all
