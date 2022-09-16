# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rrivelin <rrivelin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/12 19:58:03 by rrivelin          #+#    #+#              #
#    Updated: 2022/09/16 20:03:22 by rrivelin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f

FILES = ft_atoi \
        ft_bzero \
        ft_calloc \
        ft_isalnum \
        ft_isalpha \
        ft_isascii \
        ft_isdigit \
        ft_isprint \
        ft_itoa \
        ft_memchr \
        ft_memcmp \
        ft_memcpy \
        ft_memmove \
        ft_memset \
        ft_strlcat \
        ft_strlcpy \
        ft_strlen \
        ft_isprint \
        ft_tolower \
        ft_toupper \

SRCS_DIR = ./
SRCS = $(addprefix $(SRCS_DIR), $(addsuffix .c, $(FILES)))
SRCS_B = $(addprefix $(SRCS_DIR), $(addsuffix .c, $(FILES_B)))

OBJS_DIR = ./
OBJS = $(addprefix $(OBJS_DIR), $(addsuffix .o, $(FILES)))
OBJS_B = $(addprefix $(OBJS_DIR), $(addsuffix .o, $(FILES_B)))


.c.o: $(SRCS)
	$(CC) $(CFLAGS) -c -o $@ $<

$(NAME): $(OBJS)
	$(AR) $@ $^

bonus: $(OBJS_B)
	$(AR) $(NAME) $^

all: $(NAME)

clean:
	$(RM) $(OBJS) $(OBJS_B)

fclean: clean
	$(RM) $(NAME)

re: clean all

.PHONY: bonus all clean fclean re
# ===============================================


# NAME = libft.a
# SRCS =  ft_isalnum \
#         ft_isalpha \
#         ft_isascii \
#         ft_isdigit \
#         ft_isprint \
#         ft_tolower \
#         ft_toupper \
#         ft_strlen.\
#         ft_strncmp \
#         ft_strchr\
#         ft_strrchr \
#         ft_memset \
		
# INCLUDEH = .
# OBJS = $(patsubst %.c, %.o, $(SRCS)) #trocando um certo padrão pór outro (.c por .o em todos os arquivos do SRCS)
# CFLAGS = -Wall -Wextra -Werror

# all : $(NAME)

# $(NAME) : $(OBJS)
#     @ar rcs $(NAME) $(OBJS) 

# #o "s" cria um indice para os arquivos, e agiliza o processo de likagem
# $(OBJS) : $(SRCS) libft.h
#     @cc $(CFLAGS) -c $(SRCS) -I $(INCLUDEH) 

# clean : 
#     @rm -f $(OBJS)

# fclean : clean
#     @rm -f $(NAME)

# re : fclean all