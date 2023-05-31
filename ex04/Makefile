# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zwong <zwong@student.42kl.edu.my>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/26 13:01:59 by zwong             #+#    #+#              #
#    Updated: 2023/05/31 13:34:36 by zwong            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = replace
COMPILER = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = 	main.cpp

OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS) $(SRCS)
	$(COMPILER) $(CFLAGS) $(OBJS) -o $@

clean : 
	rm *.replace
	rm $(OBJS)

fclean : clean 
	rm -rf $(NAME)

re : fclean all
