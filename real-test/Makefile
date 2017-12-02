# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: xamartin <marvin@le-101.fr>                +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2017/12/02 11:05:55 by xamartin     #+#   ##    ##    #+#        #
#    Updated: 2017/12/02 18:20:43 by xamartin    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

.PHONY = all, clean, fclean, re

NAME = libunit

CC = gcc
CFLAGS = -Wall -Wextra -Werror

INCLUDE = real_test.h
LIBFT = ../libft/libft.a
FRAMEWORK = ../framework/libftunit.a

SRCS = main.c \
	   strlen/00_launch_test_strlen.c \
	   strlen/01_basic_strlen.c \
	   strlen/02_medium_strlen.c \
	   strlen/03_hard_strlen.c \
	   strlen/04_void_strlen.c \
	   atoi/00_launch_atoi.c \
	   atoi/01_test_basic1.c \
	   atoi/02_test_basic2.c \
	   atoi/03_test_basic3.c \
	   atoi/04_test_basic4.c \
	   atoi/05_test_intmax.c \
	   atoi/06_test_intmin.c \
	   atoi/07_test_space1.c \
	   atoi/08_test_space2.c \
	   atoi/09_test_error1.c \
	   atoi/10_test_error2.c \
	   atoi/11_test_void.c \

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) $(LIBFT) $(FRAMEWORK) -I $(INCLUDE) -o $(NAME)

./%.o:./%.c
	@$(CC) $(CFLAGS) -o $@ -c $<

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all
