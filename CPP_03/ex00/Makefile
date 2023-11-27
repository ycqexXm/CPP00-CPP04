# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yorlians <yorlians@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/16 18:16:44 by yorlians          #+#    #+#              #
#    Updated: 2023/11/16 18:44:35 by yorlians         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= ./Aaaaand_Open

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
				@echo "[..] $(PURPLE)*i love cpps*$(RESET)... compiling $*.cpp\r\c"
				@$(CC) $(CFLAGS) $(MAIN_INC) -c $< -o $@
				@echo "$(_CLEAR)"

all:			$(NAME)
				@printf "\n"
				@printf "$(PURPLE)        ,\n$(RESET)"
				@printf "$(PURPLE)       /|\n$(RESET)"
				@printf "$(PURPLE)      / |\n$(RESET)"
				@printf "$(PURPLE)     /  /\n$(RESET)"
				@printf "$(PURPLE)    |   |\n$(RESET)"
				@printf "$(PURPLE)   /    |\n$(RESET)"
				@printf "$(PURPLE)   |    \_\n$(RESET)"
				@printf "$(PURPLE)   |      \__\n$(RESET)"
				@printf "$(PURPLE)   \       __\_______    \n$(RESET)"
				@printf "$(PURPLE)    \                 \_    \n$(RESET)"
				@printf "$(PURPLE)    | /                 \   \n$(RESET)"
				@printf "$(PURPLE)    \/                   \    \n$(RESET)"
				@printf "$(PURPLE)     |                    |    \n$(RESET)"
				@printf "$(PURPLE)     \                   \|    \n$(RESET)"
				@printf "$(PURPLE)     |                    \     \n$(RESET)"
				@printf "$(PURPLE)     \                     |     \n$(RESET)"
				@printf "$(PURPLE)     /\    \_               \    \n$(RESET)"
				@printf "$(PURPLE)    / |      \__ (   )       \     \n$(RESET)"
				@printf "$(PURPLE)   /  \      / |\\  /       __\____    \n$(RESET)"
				@printf "$(PURPLE)   |  ,     |  /\ \ \__    |       \_      \n$(RESET)"
				@printf "$(PURPLE)   \_/|\___/   \   \}}}\__|  (@)     )    \n$(RESET)"
				@printf "$(PURPLE)    \)\)\)      \_\---\   \|       \ \    \n$(RESET)"
				@printf "$(PURPLE)                  \>\>\>   \   /\__o_o)    \n$(RESET)"
				@printf "$(PURPLE)                            | /  VVVVV    \n$(RESET)"
				@printf "$(PURPLE)                            \ \    \       \n$(RESET)"
				@printf "$(PURPLE)                             \ \MMMMM\                 oh bugger!    \n$(RESET)"
				@printf "$(PURPLE)                              \______/         _____ /\n$(RESET)"
				@printf "$(PURPLE)                                              |  O O|\n$(RESET)"
				@printf "$(PURPLE)                                             /___|_|/\_\n$(RESET)"
				@printf "$(PURPLE)                                        ==( |          |\n$(RESET)"
				@printf "$(PURPLE)                                             (o)====(o)\n$(RESET)"
				@printf "\n"

$(NAME):		$(OBJS) $(INCS)
				@$(CC) $(CFLAGS) $(OBJS) $(MAIN_INC) -o $(NAME)
				@echo "$(OKAYY_LETSGO) $(PURPLE)*i love cpps*$(RESET) $(BLUE)compiled$(RESET)"

clean:
				@$(RM) $(OBJS)

fclean:			clean
				@$(RM) $(NAME)

re:				fclean all

.PHONY:			all clean fclean re
