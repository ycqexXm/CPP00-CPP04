# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yorlians <yorlians@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/11 14:43:05 by yorlians          #+#    #+#              #
#    Updated: 2023/11/16 18:44:06 by yorlians         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= ./MoreUsefullFixedPointNumberClass

CC				= c++
RM				= rm -rf
CFLAGS			= -Wall -Wextra -Werror -std=c++98

INCS_DIR		= .
MAIN_INC		= -I$(INCS_DIR)
INCS			= $(shell find $(INCS_DIR) -type f -name "*.hpp")

SRCS_DIR 		= .
SRCS			= $(shell find $(SRCS_DIR) -type f -name "*.cpp")

OBJS			= $(SRCS:.cpp=.o)

PURPLE			= \033[0;35m
BLUE			= \033[0;94m
RESET			= \033[0m
_CLEAR			= \033[0K\r\c
OKAYY_LETSGO	= \n[\033[32mOK\033[0m]

%.o:			%.cpp
				@echo "[..] $(PURPLE)*sounds of complete defeat*$(RESET)... compiling $*.cpp\r\c"
				@$(CC) $(CFLAGS) $(MAIN_INC) -c $< -o $@
				@echo "$(_CLEAR)"

all:			$(NAME)
				@printf "\n"
				@printf "$(PURPLE)  _____    _     _       ___ ____    \n$(RESET)"
				@printf "$(PURPLE) |    _| _| |_ _| |_    |   |__  |     \n$(RESET)"
				@printf "$(PURPLE) |   |_ |_   _|_   _|   | | |_/ /_     \n$(RESET)"
				@printf "$(PURPLE) |_____|  |_|   |_|     |___|_____|     \n$(RESET)"
				@printf "$(PURPLE)                                        \n$(RESET)"
				@printf "\n"

$(NAME):		$(OBJS) $(INCS)
				@$(CC) $(CFLAGS) $(OBJS) $(MAIN_INC) -o $(NAME)
				@echo "$(OKAYY_LETSGO) $(PURPLE)*sounds of complete defeat*$(RESET) $(BLUE)compiled$(RESET)"

clean:
				@$(RM) $(OBJS)

fclean:			clean
				@$(RM) $(NAME)

re:				fclean all

.PHONY:			all clean fclean re
