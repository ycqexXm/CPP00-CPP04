# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yorlians <yorlians@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/26 18:53:36 by yorlians          #+#    #+#              #
#    Updated: 2023/10/26 18:57:59 by yorlians         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.SILENT:

NAME		=	BraiiiiiiinnnzzzZ

CC			=	c++
RM			=	rm -rf
CFLAGS		=	-Wall -Wextra -Werror -std=c++98

SRCS		=	main.cpp		\
				Zombie.cpp		\
				newZombie.cpp	\
				randomChump.cpp \
				
OBJS		=	$(SRCS:.cpp=.o)

BLUE		=	\033[0;94m
GREEN		=	\033[0;32m
PURPLE		=	\033[0;35m
RESET		=	\033[0m

all:		$(NAME)
			@printf "\n"
			@printf "$(PURPLE)            ___ ___        ___    _____    _     _   \n$(RESET)"
			@printf "$(PURPLE) ___ _ _   |   |   |   ___|  _|  |    _| _| |_ _| |_ \n$(RESET)"
			@printf "$(PURPLE)| -_|_'_|  | | | | |  | . |  _|  |   |_ |_   _|_   _|\n$(RESET)"
			@printf "$(PURPLE)|___|_,_|  |___|___|  |___|_|    |_____|  |_|   |_|  \n$(RESET)"
			@printf "$(PURPLE)                                                     \n$(RESET)"
			@printf "\n"

%.o:		%.cpp
			@c++ $(CFLAGS) -o $@ -c $<

$(NAME):	$(OBJS)
			$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
			echo "$(GREEN)✅🚀 Program compiled successfully 🚀✅$(RESET)"

clean:
			$(RM) $(OBJS)
			echo "$(BLUE)✨🧹🧺✨ Removed object files ✨🧺🧹✨$(RESET)"

fclean:		clean
			$(RM) $(NAME)
			echo "$(BLUE)✨💦🛁✨ Removed executable ✨🛁💦✨$(RESET)"

re:			fclean all

.PHONY:		all clean fclean re