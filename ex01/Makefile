# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dabdygal <dabdygal@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/15 15:43:23 by dabdygal          #+#    #+#              #
#    Updated: 2024/06/17 14:56:55 by dabdygal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# *********************************INITIALIZE********************************* #

BIN_NAME = fixed

INCLUDE_DIR = .

SRC_DIR = .

OBJ_DIR = .

INCLUDE_FILES = Fixed.hpp

SRC_FILES = main.cpp \
			Fixed.cpp

OBJ_FILES = $(SRC_FILES:.cpp=.o)

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic-errors

# ************************************RULES*********************************** #

$(BIN_NAME): $(addprefix $(OBJ_DIR)/,$(OBJ_FILES)) $(addprefix $(INCLUDE_DIR)/,$(INCLUDE_FILES))
	$(CXX) $(CXXFLAGS) $(addprefix $(OBJ_DIR)/,$(OBJ_FILES)) -o $(BIN_NAME)

$(addprefix $(OBJ_DIR)/,$(OBJ_FILES)): $(addprefix $(INCLUDE_DIR)/,$(INCLUDE_FILES))

all: $(BIN_NAME)

clean:
	rm -f $(addprefix $(OBJ_DIR)/,$(OBJ_FILES))

fclean: clean
	rm -f $(BIN_NAME)

re: fclean all

.PHONY: all clean fclean re
