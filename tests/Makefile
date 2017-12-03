# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: xamartin <marvin@le-101.fr>                +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2017/12/02 11:05:55 by xamartin     #+#   ##    ##    #+#        #
#    Updated: 2017/12/03 18:25:32 by xamartin    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

.PHONY = all, clean, fclean, re

NAME = libunit_test

#		COMIPLATION

CC = gcc
CFLAGS = -Wall -Wextra -Werror


#		PATH

INCLUDE = tests.h
LIBFT = ../libft/libft.a
FRAMEWORK = ../framework/libftunit.a

SRCS = main.c \
	   00_error_launch.c \
	   01_test_ok.c \
	   02_test_ko.c \
	   03_test_segf.c \
	   04_test_bus.c \
	   05_test_abort.c \
	   06_test_floating.c \
	   07_test_timeout.c \


OBJS = $(SRCS:.c=.o)

#		RULES ALL

all: $(NAME)

$(NAME): $(OBJS)
	@make -C ../libft && make -C ../framework
	@$(CC) $(CFLAGS) $(OBJS) $(LIBFT) $(FRAMEWORK) -I $(INCLUDE) -o $(NAME)
	@clear && echo "\033[32m -------------------\nLIBUNIT TEST COMPLIED\n -------------------\n\033[0m"	

./%.o:./%.c
	@$(CC) $(CFLAGS) -o $@ -c $<

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all
