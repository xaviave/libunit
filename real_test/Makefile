# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: xamartin <marvin@le-101.fr>                +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2017/12/02 11:05:55 by xamartin     #+#   ##    ##    #+#        #
#    Updated: 2017/12/03 12:19:08 by xamartin    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

.PHONY = all, clean, fclean, re

NAME = libunit
NAME2 = libunit_test

#		COMIPLATION

CC = gcc
CFLAGS = -Wall -Wextra -Werror


#		PATH

INCLUDE_ALL = real_test.h
INCLUDE_TEST = ../test/tests.h
LIBFT = ../libft/libft.a
FRAMEWORK = ../framework/libftunit.a

SRCS_ALL = main.c \
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

SRCS_TEST = ../test/main.c \
			../test/00_error_launch.c \
			../test/01_test_ok.c \
			../test/02_test_ko.c \
			../test/03_test_segf.c \
			../test/04_test_bus.c \
			../test/05_test_abort.c \
			../test/06_test_floating.c \
			../test/07_test_timeout.c \


OBJS_ALL = $(SRCS_ALL:.c=.o)
OBJS_TEST = $(SRCS_TEST:.c=.o)

#		RULES ALL

all: $(NAME)

$(NAME): $(OBJS_ALL)
	@make -C ../libft && make -C ../framework
	@$(CC) $(CFLAGS) $(OBJS_ALL) $(LIBFT) $(FRAMEWORK) -I $(INCLUDE_ALL) -o $(NAME)
	@cd .. && touch test_log.txt && cd real_test
	@./$(NAME) > ../test_log.txt

./%.o:./%.c
	@$(CC) $(CFLAGS) -o $@ -c $<

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all


#		RULES TEST

test: $(NAME2)

$(NAME2): $(OBJS_TEST)
	@make -C ../libft && make -C ../framework
	@$(CC) $(OBJS_TEST) $(LIBFT) $(FRAMEWORK) -I $(INCLUDE_TEST) -o $(NAME2)
	@cd .. && touch test_log2.txt && cd real_test
	@./$(NAME2) > ../test_log2.txt

./%.o:./%.c
	@$(CC) $(CFLAGS) -o $@ -c $<

clean_2:
	@rm -f $(OBJS_TEST)

fclean_2: clean_2
	@rm -f $(NAME2)

re_2: fclean_2 test
