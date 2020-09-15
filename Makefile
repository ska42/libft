# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lmartin <lmartin@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/08 15:46:17 by lmartin           #+#    #+#              #
#    Updated: 2020/09/15 19:08:56 by lmartin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

## PIMPED MAKEFILE ##

# COLORS #

# This is a minimal set of ANSI/VT100 color codes
_END		=	\e[0m
_BOLD		=	\e[1m
_UNDER		=	\e[4m
_REV		=	\e[7m

# Colors
_GREY		=	\e[30m
_RED		=	\e[31m
_GREEN		=	\e[32m
_YELLOW		=	\e[33m
_BLUE		=	\e[34m
_PURPLE		=	\e[35m
_CYAN		=	\e[36m
_WHITE		=	\e[37m

# Inverted, i.e. colored backgrounds
_IGREY		=	\e[40m
_IRED		=	\e[41m
_IGREEN		=	\e[42m
_IYELLOW	=	\e[43m
_IBLUE		=	\e[44m
_IPURPLE	=	\e[45m
_ICYAN		=	\e[46m
_IWHITE		=	\e[47m

# **************************************************************************** #

## VARIABLES ##

# COMPILATION #

CC			=	gcc

CC_FLAGS	=	-Wall -Wextra -Werror


# DELETE #

RM			=	rm -rf


# DIRECTORIES #

DIR_HEADERS		=	./includes/

DIR_SRCS		=	./srcs/

DIR_OBJS		=	./compiled_srcs/

SUB_DIRS		=	. \
					char \
					print \
					str \
					num \
					mem \
					list \
					util

SUB_DIR_OBJS	=	$(SUB_DIRS:%=$(DIR_OBJS)%)

# FILES #

SRCS			=	char/ft_isalnum.c \
					char/ft_isalpha.c \
					char/ft_isascii.c \
					char/ft_isdigit.c \
					char/ft_isprint.c \
					char/ft_iswhitespace.c \
					char/ft_tolower.c \
					char/ft_toupper.c \
					print/ft_putchar_fd.c \
					print/ft_putendl_fd.c \
					print/ft_putnbr_fd.c \
					print/ft_putstr_fd.c \
					str/ft_split.c \
					str/ft_strchr.c \
					str/ft_strdup.c \
					str/ft_strjoin.c \
					str/ft_strlcat.c \
					str/ft_strlcpy.c \
					str/ft_strlen.c \
					str/ft_strmapi.c \
					str/ft_strncmp.c \
					str/ft_strnstr.c \
					str/ft_strrchr.c \
					str/ft_strtrim.c \
					str/ft_substr.c \
					num/ft_atoi.c \
					num/ft_itoa.c \
					mem/ft_bzero.c \
					mem/ft_calloc.c \
					mem/ft_memccpy.c \
					mem/ft_memchr.c \
					mem/ft_memcmp.c \
					mem/ft_memcpy.c \
					mem/ft_memccpy.c \
					mem/ft_memmove.c \
					mem/ft_memset.c \
					list/ft_lstadd_back.c \
					list/ft_lstadd_front.c \
					list/ft_lstclear.c \
					list/ft_lstdelone.c \
					list/ft_lstiter.c \
					list/ft_lstlast.c \
					list/ft_lstmap.c \
					list/ft_lstnew.c \
					list/ft_lstsize.c \
					util/get_next_line.c

# COMPILED_SOURCES #

OBJS		=	$(SRCS:%.c=$(DIR_OBJS)%.o)

NAME		=	libft.a

# **************************************************************************** #

## RULES ##

all:			$(NAME)

# VARIABLES RULES #

$(NAME):		$(OBJS)
				@printf "\033[2K\r$(_GREEN) All files compiled into '$(DIR_OBJS)'. $(_END)✅\n"
				@ar rc $(NAME) $(OBJS)
				@ranlib $(NAME)
				@printf "$(_GREEN) Library '$(NAME)' created. $(_END)✅\n"

# COMPILED_SOURCES RULES #

$(OBJS):		| $(DIR_OBJS)

$(DIR_OBJS)%.o: $(DIR_SRCS)%.c
				@printf "\033[2K\r $(_YELLOW)Compiling $< $(_END)⌛"
				@$(CC) $(CC_FLAGS) -I $(DIR_HEADERS) -c $< -o $@

$(DIR_OBJS):	$(SUB_DIR_OBJS)

$(SUB_DIR_OBJS):
				@mkdir -p $(SUB_DIR_OBJS)

# OBLIGATORY PART #

clean:
				@$(RM) $(DIR_OBJS)
				@printf "$(_RED) '"$(DIR_OBJS)"' has been deleted. $(_END)🗑️\n"

fclean:			clean
				@$(RM) $(NAME)
				@printf "$(_RED) '"$(NAME)"' has been deleted. $(_END)🗑️\n"

norm:
				@${HOME}/.norminette/norminette.rb $(DIR_SRCS)
				@${HOME}/.norminette/norminette.rb $(DIR_HEADERS)

re:				fclean all

# PHONY #

.PHONY:			all clean fclean re norm
