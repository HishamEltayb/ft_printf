# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/22 20:22:02 by heltayb           #+#    #+#              #
#    Updated: 2024/01/23 08:42:07 by heltayb          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CFLAGS = -Wall -Wextra -Werror
AR = ar -rcs

OBJ  = ft_printf.o ft_putchar_fd.o ft_putnbr_base.o ft_putstr_fd.o \
		ft_strchr.o ft_strlen.o ft_putnbr_fd.o
	
all: $(NAME)

$(NAME): $(OBJ)
	@$(AR) $(NAME) $(OBJ)
clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
