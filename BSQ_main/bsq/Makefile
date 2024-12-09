# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: datikhom <datikhom@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/22 00:19:11 by datikhom          #+#    #+#              #
#    Updated: 2024/09/25 23:08:57 by datikhom         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
LDFLAGS = -I include

SRC_DIR = src
OBJ_DIR = obj
SOL_DIR = solution

TARGET = bsq

SRCS = $(SRC_DIR)/main.c \
       $(SOL_DIR)/bsq42.c $(SOL_DIR)/fillval.c $(SOL_DIR)/fillx.c $(SOL_DIR)/min.c \
       $(SOL_DIR)/presol.c $(SOL_DIR)/sqrupd.c $(SOL_DIR)/validcheck.c \
       $(SRC_DIR)/io/onr.c $(SRC_DIR)/io/printmatrix.c $(SRC_DIR)/io/utility.c \
       $(SRC_DIR)/io/squarefree.c $(SRC_DIR)/io/matrixfree.c \
       $(SRC_DIR)/parsing/areate.c $(SRC_DIR)/parsing/mapinfo.c $(SRC_DIR)/parsing/parsing.c \
       $(SRC_DIR)/parsing/r_c_cal.c $(SRC_DIR)/parsing/sqreate.c \
       $(SRC_DIR)/utils/error_handling.c

OBJS = $(SRCS:%.c=$(OBJ_DIR)/%.o)

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(TARGET)

$(OBJ_DIR)/%.o: %.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) $(LDFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ_DIR) $(TARGET)

fclean:		clean
			rm -f ${NAME}
re: clean all
