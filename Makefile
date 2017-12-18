# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: robihaap <marvin@le-101.fr>                +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2017/12/13 15:46:01 by robihaap     #+#   ##    ##    #+#        #
#    Updated: 2017/12/15 22:27:58 by robihaap    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

NAME = libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRCS = ft_atoi.c \
	   ft_bzero.c \
	   ft_isalnum.c \
	   ft_isalpha.c \
	   ft_isascii.c \
	   ft_isdigit.c \
	   ft_isprint.c \
	   ft_itoa.c \
	   ft_memset.c \
	   ft_memalloc.c \
	   ft_strnew.c \
	   ft_lstadd.c \
	   ft_lstdel.c \
	   ft_memcpy.c \
	   ft_memchr.c \
	   ft_memccpy.c \
	   ft_lstnew.c \
	   ft_lstiter.c \
	   ft_lstdelone.c \
	   ft_lstmap.c \
	   ft_memcmp.c \
	   ft_memmove.c \
	   ft_memdel.c \
	   ft_strlen.c \
	   ft_putstr_fd.c \
	   ft_putstr.c \
	   ft_putendl_fd.c \
	   ft_putendl.c \
	   ft_putchar_fd.c \
	   ft_putchar.c \
	   ft_strdup.c \
	   ft_strdel.c \
	   ft_strcpy.c \
	   ft_strcmp.c \
	   ft_strclr.c \
	   ft_strchr.c \
	   ft_strcat.c \
	   ft_putnbr_fd.c \
	   ft_putnbr.c \
	   ft_strmapi.c \
	   ft_strmap.c \
	   ft_strlcat.c \
	   ft_strjoin.c \
	   ft_striteri.c \
	   ft_striter.c \
	   ft_strequ.c \
	   ft_strnequ.c \
	   ft_strncpy.c \
	   ft_strncmp.c \
	   ft_strncat.c \
	   ft_strsub.c \
	   ft_strrchr.c \
	   ft_strnstr.c \
	   ft_strstr.c \
	   ft_toupper.c \
	   ft_tolower.c \
	   ft_strtrim.c \
	   ft_strsplit.c \

OBJ = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@echo "Bonjour."
	@ar rcs $(NAME) $(OBJ)

./%.o: ./%.c
	@$(CC) $(CFLAGS) -o $@ -c $<

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all
