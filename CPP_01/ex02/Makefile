# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yorlians <yorlians@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/27 17:42:25 by yorlians          #+#    #+#              #
#    Updated: 2023/11/08 13:53:56 by yorlians         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= HiThisIsBrain

CC				= c++
RM				= rm -rf
CFLAGS			= -Wall -Wextra -Werror -std=c++98

SRCS			= $(shell find . -type f -name "*.cpp")

OBJS			= $(SRCS:.cpp=.o)

PURPLE			= \033[0;35m
BLUE			= \033[0;94m
RESET			= \033[0m
_CLEAR			= \033[0K\r\c
OKAYY_LETSGO	= \n[\033[32mOK\033[0m]

%.o:			%.cpp
				@echo "[..] $(PURPLE)*white noise*$(RESET)... compiling $*.cpp\r\c"
				@$(CC) $(CFLAGS) -c $< -o $@
				@echo "$(_CLEAR)"

all:			$(NAME)
				@printf "\n"
				@printf "$(PURPLE)  _____    _     _       ___ ___     \n$(RESET)"
				@printf "$(PURPLE) |    _| _| |_ _| |_    |   |_  |     \n$(RESET)"
				@printf "$(PURPLE) |   |_ |_   _|_   _|   | | |_| |_     \n$(RESET)"
				@printf "$(PURPLE) |_____|  |_|   |_|     |___|_____|     \n$(RESET)"
				@printf "$(PURPLE)                                        \n$(RESET)"
				@printf "\n"

$(NAME):		$(OBJS)
				@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
				@echo "$(OKAYY_LETSGO) $(PURPLE)*white noise*$(RESET) $(BLUE)compiled$(RESET)"

clean:
				@$(RM) $(OBJS)

fclean:			clean
				@$(RM) $(NAME)

re:				fclean all

.PHONY:			all clean fclean re
