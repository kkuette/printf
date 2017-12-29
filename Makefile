# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tdenion <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/04/07 21:39:55 by tdenion           #+#    #+#              #
#    Updated: 2016/09/27 23:47:07 by tdenion          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = srcs/ft_printf.c \
	   srcs/conversion.c \
	   srcs/flags.c \
	   srcs/len_modif.c \
	   srcs/lst.c \
	   srcs/precision.c \
	   srcs/print.c \
	   srcs/print_nbr.c \
	   srcs/print_char.c \
	   srcs/print_hex.c \
	   srcs/tool.c \
	   srcs/tool_wchar.c \
	   srcs/print_wchar.c \
	   srcs/print_prec.c \

LIB = libft/libft.h

INCLUDES = includes/ft_printf.h

FLAGS = -Wall -Werror -Wextra

OBJS = ft_printf.o \
	   conversion.o \
	   flags.o \
	   len_modif.o \
	   lst.o \
	   precision.o \
	   print.o \
	   print_nbr.o \
	   print_char.o \
	   print_hex.o \
	   tool.o \
	   tool_wchar.o \
	   print_wchar.o \
	   print_prec.o \

OLIB = libft/ft_atoi.o \
	   libft/ft_charcmp.o \
	   libft/ft_isdigit.o \
	   libft/ft_itoa.o \
	   libft/ft_nbrlen.o \
	   libft/ft_putchar.o \
	   libft/ft_putstr.o \
	   libft/ft_strchr.o \
	   libft/ft_strcmp.o \
	   libft/ft_strdup.o \
	   libft/ft_strfjoin.o \
	   libft/ft_strjoin.o \
	   libft/ft_strlen.o \
	   libft/ft_strrev.o \
	   libft/ft_strsub.o \
	   libft/ft_memalloc.o \
	   libft/ft_strcpy.o \
	   libft/ft_bzero.o \

all:$(NAME)

$(NAME):
	@make -C libft/
	@gcc $(FLAGS) -c $(SRCS) -I $(LIB)
	@ar rc $(NAME) $(OBJS) $(OLIB)
	@ranlib $(NAME)

clean:
	@rm -rf $(OBJS)
	@make -C libft/ clean

fclean: clean
	@rm -rf $(NAME)
	@make -C libft/ fclean

re: fclean all
