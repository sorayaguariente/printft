# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sguarien <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/05 14:13:38 by sguarien          #+#    #+#              #
#    Updated: 2022/11/25 20:43:16 by sguarien         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME                    = libft.a

SRCS			= ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
				ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c \
				ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c \
				ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c \
				ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
				ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c \
				ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c \
				ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c \
				ft_putendl_fd.c ft_putnbr_fd.c

# Use the same files from SRCS but change from .c to .o	
OBJS			= $(SRCS:.c=.o)

# Bonus part
SRCS_BONUS 		= ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
				ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
				ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

OBJS_BONUS		= $(SRCS_BONUS:.c=.o)

# variables
CC			= cc
AR			= ar rcs
RM			= rm -f
CFLAGS			= -Wall -Wextra -Werror

## Compile files using the flags of ar that creates or maintain library archives and 
#rcs that stands for replace, create, sort - r if the library exists, replace old files,
#c will create the library if does not exist, 
#s will create a sorted index of the library, for it to be faster accessed 
MSG1                    = @echo "Compilation complete"
MSG2                    = @echo "Cleaning complete"
MSG3					= @echo "ReCompilation complete"
MSG4					= @echo "Bonus compilation complete"

# Compiles with cc + flags
$(NAME):		$(OBJS)
				@$(AR) $(NAME) $(OBJS)
				$(MSG1)

# Default all command to compile
all:                    $(NAME)

# Bonus part
bonus:			$(OBJS) $(OBJS_BONUS)
				@$(AR) $(NAME) $(OBJS_BONUS) $(OBJS)
				$(MSG4)

# Cleans all generated .o files
clean:
				@$(RM) $(OBJS) $(OBJS_BONUS) 
				$(MSG2)

# Cleans all generated .o and .a files
fclean:			clean
				@$(RM) $(NAME)
				$(MSG2)

# Cleans all generated .o and .a files + recompiles
re:			fclean all
				$(MSG3)

# this is used to the test
#so:
#	$(CC) -fPIC $(CFLAGS) $(SRCS)
#	gcc -shared -o libft.so $(OBJS) $(OBJS_BONUS)

# Phony is a target that will explicitly tell Make to run the function even if you have a file in your directory with the same name
.PHONY:			all clean fclean re bonus
