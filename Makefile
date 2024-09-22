# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: grannou <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/05 12:37:20 by grannou           #+#    #+#              #
#    Updated: 2021/08/30 15:37:23 by grannou          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Makefile automatic variables:
# $@ = filename representing the target
# $% = filename element of an archive member specification
# $< = filename of the first prerequisite
# $? = names of all prerequisites that are newer than the target, separated by spaces
# $+ = as $^ plus includes duplicates
# $* = stem (filename without its suffix) of the target filename

CC = gcc
CFLAGS = -Wall -Wextra -Werror -g
NORME = norminette .
RM = rm -f
HEADER = libft.h

NAME = libft.a

SRCS = ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c \
	ft_memchr.c ft_memcmp.c ft_strlen.c ft_isalpha.c ft_isdigit.c \
	ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c \
	ft_strchr.c ft_strrchr.c ft_strncmp.c ft_strlcpy.c ft_strlcat.c \
	ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c \
	ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c \
	ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

SRCS_BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
	 ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c \
	 ft_lstmap.c

OBJS = $(SRCS:.c=.o)

OBJS_BONUS = $(SRCS_BONUS:.c=.o)

%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $< -I $(HEADER)

.PHONY: all
all: $(NAME)

$(NAME): $(OBJS)

	@echo "\n"
	@echo "$(shell tput setaf 207)██╗     ██╗██████╗ ███████╗████████╗$(shell tput sgr0)"
	@echo "$(shell tput setaf 206)██║     ██║██╔══██╗██╔════╝╚══██╔══╝$(shell tput sgr0)"
	@echo "$(shell tput setaf 205)██║     ██║██████╔╝█████╗     ██║$(shell tput sgr0)"
	@echo "$(shell tput setaf 204)██║     ██║██╔══██╗██╔══╝     ██║$(shell tput sgr0)"
	@echo "$(shell tput setaf 203)███████╗██║██████╔╝██║        ██║$(shell tput sgr0)"
	@echo "$(shell tput setaf 202)╚══════╝╚═╝╚═════╝ ╚═╝        ╚═╝$(shell tput sgr0)"
	@echo "\n"

	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)
# ar rc means create an archive containing all .o files
# r replace/add files, create if does not exist. c deete archive creation message

.PHONY: bonus
bonus: $(OBJS_BONUS)
	ar rc $(NAME) $(OBJS_BONUS)
	ranlib $(NAME)

.PHONY: norme
norme:

	@echo "\n"
	@echo "$(shell tput setaf 201)███╗   ██╗ ██████╗ ██████╗ ███╗   ███╗██╗███╗   ██╗███████╗████████╗████████╗███████╗$(shell tput sgr0)"
	@echo "$(shell tput setaf 200)████╗  ██║██╔═══██╗██╔══██╗████╗ ████║██║████╗  ██║██╔════╝╚══██╔══╝╚══██╔══╝██╔════╝$(shell tput sgr0)"
	@echo "$(shell tput setaf 199)██╔██╗ ██║██║   ██║██████╔╝██╔████╔██║██║██╔██╗ ██║█████╗     ██║      ██║   █████╗$(shell tput sgr0)"
	@echo "$(shell tput setaf 198)██║╚██╗██║██║   ██║██╔══██╗██║╚██╔╝██║██║██║╚██╗██║██╔══╝     ██║      ██║   ██╔══$(shell tput sgr0)"
	@echo "$(shell tput setaf 197)██║ ╚████║╚██████╔╝██║  ██║██║ ╚═╝ ██║██║██║ ╚████║███████╗   ██║      ██║   ███████╗$(shell tput sgr0)"
	@echo "$(shell tput setaf 196)╚═╝  ╚═══╝ ╚═════╝ ╚═╝  ╚═╝╚═╝     ╚═╝╚═╝╚═╝  ╚═══╝╚══════╝   ╚═╝      ╚═╝   ╚══════╝$(shell tput sgr0)"
	@echo "\n"
	@$(NORME)

.PHONY: clean
clean:
	@echo "\n"
	@echo "$(shell tput setaf 51) ██████╗██╗     ███████╗ █████╗ ███╗   ██╗$(shell tput sgr0)"
	@echo "$(shell tput setaf 50)██╔════╝██║     ██╔════╝██╔══██╗████╗  ██║$(shell tput sgr0)"
	@echo "$(shell tput setaf 49)██║     ██║     █████╗  ███████║██╔██╗ ██║$(shell tput sgr0)"
	@echo "$(shell tput setaf 48)██║     ██║     ██╔══╝  ██╔══██║██║╚██╗██║$(shell tput sgr0)"
	@echo "$(shell tput setaf 47)╚██████╗███████╗███████╗██║  ██║██║ ╚████║$(shell tput sgr0)"
	@echo "$(shell tput setaf 46) ╚═════╝╚══════╝╚══════╝╚═╝  ╚═╝╚═╝  ╚═══╝$(shell tput sgr0)"
	@echo "\n"

	$(RM) $(OBJS) $(OBJS_BONUS)

.PHONY: clean
fclean: clean

	@echo "\n"
	@echo "$(shell tput setaf 45)███████╗ ██████╗██╗     ███████╗ █████╗ ███╗   ██╗$(shell tput sgr0)"
	@echo "$(shell tput setaf 44)██╔════╝██╔════╝██║     ██╔════╝██╔══██╗████╗  ██║$(shell tput sgr0)"
	@echo "$(shell tput setaf 43)█████╗  ██║     ██║     █████╗  ███████║██╔██╗ ██║$(shell tput sgr0)"
	@echo "$(shell tput setaf 42)██╔══╝  ██║     ██║     ██╔══╝  ██╔══██║██║╚██╗██║$(shell tput sgr0)"
	@echo "$(shell tput setaf 41)██║     ╚██████╗███████╗███████╗██║  ██║██║ ╚████║$(shell tput sgr0)"
	@echo "$(shell tput setaf 40)╚═╝      ╚═════╝╚══════╝╚══════╝╚═╝  ╚═╝╚═╝  ╚═══╝$(shell tput sgr0)"
	@echo "\n"

	$(RM) $(NAME)

.PHONY: re
re: fclean all

.PHONY: fox
fox:

	@echo "$(shell tput setaf 0)≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈$(shell tput sgr0)"
	@echo "$(shell tput setaf 0)≈≈≈≈≈≈≈$(shell tput sgr0)        $(shell tput setaf 0)≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈$(shell tput sgr0)        $(shell tput setaf 0)≈≈≈≈≈≈≈$(shell tput sgr0)"
	@echo "$(shell tput setaf 0)≈≈≈≈≈≈≈$(shell tput sgr0) $(shell tput setaf 94)∂∂∂∂$(shell tput setaf 202)ΩΩΩ$(tput sgr0)     $(shell tput setaf 0)≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈$(shell tput sgr0)      $(shell tput setaf 202)ΩΩ$(shell tput setaf 94)∂∂∂$(shell tput sgr0)  $(shell tput setaf 0)≈≈≈≈≈≈≈$(shell tput sgr0)"
	@echo "$(shell tput setaf 0)≈≈≈≈≈≈≈$(shell tput sgr0) $(shell tput setaf 94)∂∂∂$(shell tput setaf 202)ΩΩΩΩΩΩΩΩΩ$(tput sgr0)     $(shell tput setaf 0)≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈$(shell tput sgr0)     $(shell tput setaf 202)ΩΩΩΩΩΩ$(shell tput setaf 94)∂∂∂$(shell tput sgr0)  $(shell tput setaf 0)≈≈≈≈≈≈≈$(shell tput sgr0)"
	@echo "$(shell tput setaf 0)≈≈≈≈≈≈≈$(shell tput sgr0)  $(shell tput setaf 94)∂∂$(shell tput setaf 202)ΩΩΩΩΩΩΩΩΩΩΩΩΩ$(shell tput sgr0)  $(shell tput setaf 94)∂$(shell tput setaf 0)≈≈≈≈≈≈$(shell tput setaf 94)∂∂∂∂∂∂∂∂∂∂∂∂∂$(shell tput setaf 0)≈≈≈≈≈$(shell tput setaf 94)∂$(shell tput sgr0)   $(shell tput setaf 202)ΩΩΩΩΩΩΩΩΩΩΩΩΩ$(shell tput setaf 94)∂∂$(shell tput sgr0)  $(shell tput setaf 0)≈≈≈≈≈≈≈$(shell tput sgr0)"
	@echo "$(shell tput setaf 0)≈≈≈≈≈≈≈≈$(shell tput sgr0)  $(shell tput setaf 94)∂$(shell tput setaf 202)ΩΩΩΩΩΩΩΩΩΩΩ$(shell tput sgr0)  $(shell tput setaf 202)ΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩ$(shell tput sgr0)  $(shell tput setaf 202)ΩΩΩΩΩΩΩΩΩΩΩΩ$(shell tput setaf 94)∂$(shell tput sgr0)  $(shell tput setaf 0)≈≈≈≈≈≈≈$(shell tput sgr0)"
	@echo "$(shell tput setaf 0)≈≈≈≈≈≈≈≈$(shell tput sgr0)  $(shell tput setaf 94)∂$(shell tput setaf 202)ΩΩΩΩΩΩΩΩ$(shell tput sgr0)  $(shell tput setaf 202)ΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩ$(shell tput sgr0)  $(shell tput setaf 202)ΩΩΩΩΩΩΩΩΩ$(shell tput setaf 94)∂$(shell tput sgr0)  $(shell tput setaf 0)≈≈≈≈≈≈≈$(shell tput sgr0)"
	@echo "$(shell tput setaf 0)≈≈≈≈≈≈≈≈$(shell tput sgr0)  $(shell tput setaf 94)∂$(shell tput setaf 202)ΩΩΩΩΩΩ$(shell tput sgr0) $(shell tput setaf 202)ΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩ$(shell tput sgr0) $(shell tput setaf 202)ΩΩΩΩΩΩΩ$(shell tput setaf 94)∂$(shell tput sgr0)  $(shell tput setaf 0)≈≈≈≈≈≈≈≈$(shell tput sgr0)"
	@echo "$(shell tput setaf 0)≈≈≈≈≈≈≈≈$(shell tput sgr0)  $(shell tput setaf 94)∂$(shell tput setaf 202)ΩΩΩΩΩ$(shell tput sgr0) $(shell tput setaf 202)ΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩ$(shell tput sgr0) $(shell tput setaf 202)ΩΩΩΩΩΩ$(shell tput setaf 94)∂$(shell tput sgr0)  $(shell tput setaf 0)≈≈≈≈≈≈≈≈$(shell tput sgr0)"
	@echo "$(shell tput setaf 0)≈≈≈≈≈≈≈≈$(shell tput sgr0)  $(shell tput setaf 202)ΩΩΩΩΩ$(shell tput sgr0) $(shell tput setaf 202)ΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩ$(shell tput setaf 208)ππππππ$(shell tput setaf 202)ΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩ$(shell tput sgr0) $(shell tput setaf 202)ΩΩΩΩΩΩ  $(shell tput setaf 0)≈≈≈≈≈≈≈≈$(shell tput sgr0)"
	@echo "$(shell tput setaf 0)≈≈≈≈≈≈≈≈≈$(shell tput sgr0)  $(shell tput setaf 202)ΩΩ$(shell tput sgr0)  $(shell tput setaf 202)ΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩ$(shell tput setaf 208)πππππππππ$(shell tput setaf 202)ΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩ$(shell tput sgr0)  $(shell tput setaf 202)ΩΩΩΩ$(shell tput sgr0)  $(shell tput setaf 0)≈≈≈≈≈≈≈≈$(shell tput sgr0)"
	@echo "$(shell tput setaf 0)≈≈≈≈≈≈≈≈≈$(shell tput setaf 94)∂∂$(shell tput setaf 202)ΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩ$(shell tput setaf 208)πππππππππππππ$(shell tput setaf 202)ΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩ$(shell tput setaf 94)∂∂$(shell tput setaf 0)≈≈≈≈≈≈≈≈≈$(shell tput sgr0)"
	@echo "$(shell tput setaf 0)≈≈≈≈≈≈≈≈≈$(shell tput setaf 94)∂∂$(shell tput setaf 202)ΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩ$(shell tput setaf 208)πππππππππππππππππ$(shell tput setaf 202)ΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩ$(shell tput setaf 94)∂∂$(shell tput setaf 0)≈≈≈≈≈≈≈≈≈$(shell tput sgr0)"
	@echo "$(shell tput setaf 0)≈≈≈≈≈≈≈≈≈≈$(shell tput setaf 94)∂∂$(shell tput setaf 202)ΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩ$(shell tput setaf 208)πππππππππππππππππππππ$(shell tput setaf 202)ΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩ$(shell tput setaf 94)∂∂$(shell tput setaf 0)≈≈≈≈≈≈≈≈≈$(shell tput sgr0)"
	@echo "$(shell tput setaf 0)≈≈≈≈≈≈≈≈≈≈$(shell tput setaf 94)∂∂$(shell tput setaf 202)ΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩ$(shell tput setaf 208)πππππππππππππππππππππππππ$(shell tput setaf 202)ΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩ$(shell tput setaf 94)∂∂$(shell tput setaf 0)≈≈≈≈≈≈≈≈≈≈$(shell tput sgr0)"
	@echo "$(shell tput setaf 0)≈≈≈≈≈≈≈≈≈≈≈$(shell tput setaf 94)∂∂$(shell tput setaf 202)ΩΩΩΩΩΩΩΩΩΩΩΩΩΩ$(shell tput setaf 208)ππππππππππππππππππππππππππππ$(shell tput setaf 202)ΩΩΩΩΩΩΩΩΩΩΩΩΩ$(shell tput setaf 94)∂∂$(shell tput setaf 0)≈≈≈≈≈≈≈≈≈≈$(shell tput sgr0)"
	@echo "$(shell tput setaf 0)≈≈≈≈≈≈≈≈≈≈≈$(shell tput setaf 94)∂∂$(shell tput setaf 202)ΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩ$(shell tput setaf 208)ππππππππππππππππππππππππ$(shell tput setaf 202)ΩΩΩΩΩΩΩΩΩΩΩΩΩΩ$(shell tput setaf 94)∂∂$(shell tput setaf 0)≈≈≈≈≈≈≈≈≈≈≈$(shell tput sgr0)"
	@echo "$(shell tput setaf 0)≈≈≈≈≈≈≈≈≈≈≈$(shell tput setaf 94)∂∂$(shell tput setaf 202)ΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩ$(shell tput setaf 208)ππππππππππππππππππππππ$(shell tput setaf 202)ΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩ$(shell tput setaf 94)∂∂$(shell tput setaf 0)≈≈≈≈≈≈≈≈≈≈$(shell tput sgr0)"
	@echo "$(shell tput setaf 0)≈≈≈≈≈≈≈≈≈≈$(shell tput setaf 94)∂∂$(shell tput setaf 202)ΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩ$(shell tput setaf 94)∂$(shell tput setaf 208)ππππππππππππππππ$(shell tput setaf 94)∂$(shell tput setaf 202)ΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩ$(shell tput setaf 94)∂∂$(shell tput setaf 0)≈≈≈≈≈≈≈≈≈≈$(shell tput sgr0)"
	@echo "$(shell tput setaf 0)≈≈≈≈≈≈≈≈≈≈$(shell tput setaf 94)∂∂$(shell tput setaf 202)ΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩ$(shell tput setaf 94)∂$(shell tput setaf 208)ππππππππππππππ$(shell tput setaf 94)∂$(shell tput setaf 202)ΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩ$(shell tput setaf 94)∂∂$(shell tput setaf 0)≈≈≈≈≈≈≈≈≈$(shell tput sgr0)"
	@echo "$(shell tput setaf 0)≈≈≈≈≈≈≈≈≈$(shell tput setaf 94)∂∂$(shell tput setaf 202)ΩΩΩΩΩΩΩΩΩΩΩΩΩΩ$(shell tput sgr0) $(shell tput setaf 40)@@@$(shell tput sgr0) $(shell tput setaf 202)ΩΩΩΩ$(shell tput setaf 94)∂∂$(shell tput setaf 208)ππππππππππ$(shell tput setaf 94)∂$(shell tput setaf 202)ΩΩΩ$(shell tput sgr0) $(shell tput setaf 40)@@@$(shell tput sgr0) $(shell tput setaf 202)ΩΩΩΩΩΩΩΩΩΩΩΩΩΩ$(shell tput setaf 94)∂∂$(shell tput setaf 0)≈≈≈≈≈≈≈≈≈$(shell tput sgr0)"
	@echo "$(shell tput setaf 0)≈≈≈≈≈≈≈≈$(shell tput setaf 94)∂∂$(shell tput setaf 202)ΩΩΩΩΩΩΩΩΩΩΩΩΩΩ$(shell tput sgr0) $(shell tput setaf 40)@@@@$(shell tput setaf 40)@$(shell tput sgr0) $(shell tput setaf 202)ΩΩΩΩΩ$(shell tput setaf 94)∂$(shell tput setaf 208)ππππππππ$(shell tput setaf 94)∂$(shell tput setaf 202)ΩΩΩ$(shell tput sgr0) $(shell tput setaf 40)@@@@@@$(shell tput setaf 202)ΩΩΩΩΩΩΩΩΩΩΩΩΩΩ$(shell tput setaf 94)∂∂$(shell tput setaf 0)≈≈≈≈≈≈≈≈$(shell tput sgr0)"
	@echo "$(shell tput setaf 0)≈≈≈≈≈≈≈$(shell tput setaf 94)∂∂$(shell tput setaf 202)ΩΩΩΩΩΩΩΩΩΩΩΩΩΩ$(shell tput sgr0) $(shell tput setaf 40)@@@@@@$(shell tput setaf 40)@$(shell tput sgr0) $(shell tput setaf 202)ΩΩΩ$(shell tput setaf 94)∂∂$(shell tput setaf 208)ππππππππ$(shell tput setaf 94)∂$(shell tput setaf 202)ΩΩ$(shell tput sgr0) $(shell tput setaf 40)@@@@@$(shell tput setaf 40)@@$(shell tput sgr0) $(shell tput setaf 202)ΩΩΩΩΩΩΩΩΩΩΩΩΩΩ$(shell tput setaf 94)∂∂$(shell tput setaf 0)≈≈≈≈≈≈≈$(shell tput sgr0)"
	@echo "$(shell tput setaf 0)≈≈≈≈≈≈$(shell tput setaf 94)∂∂$(shell tput setaf 202)ΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩ$(shell tput sgr0) $(shell tput setaf 40)@@@@@@@$(shell tput sgr0) $(shell tput setaf 202)ΩΩ$(shell tput setaf 94)∂∂$(shell tput setaf 208)πππππππππ$(shell tput setaf 94)∂$(shell tput setaf 202)ΩΩ$(shell tput sgr0) $(shell tput setaf 40)@@@@@@@$(shell tput sgr0) $(shell tput setaf 202)ΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩ$(shell tput setaf 94)∂∂$(shell tput setaf 0)≈≈≈≈≈≈$(shell tput sgr0)"
	@echo "$(shell tput setaf 0)≈≈≈≈$(shell tput setaf 94)∂∂$(shell tput setaf 202)ΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩ$(shell tput sgr0) $(shell tput setaf 40)@@@@@$(shell tput sgr0) $(shell tput setaf 202)ΩΩ$(shell tput setaf 94)∂∂$(shell tput setaf 208)πππππππππππ$(shell tput setaf 94)∂$(shell tput setaf 202)ΩΩ$(shell tput sgr0) $(shell tput setaf 40)@@@@@$(shell tput sgr0) $(shell tput setaf 202)ΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩ$(shell tput setaf 94)∂∂$(shell tput setaf 0)≈≈≈≈$(shell tput sgr0)"
	@echo "$(shell tput setaf 0)≈≈≈$(shell tput setaf 94)∂∂$(shell tput setaf 202)ΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩ$(shell tput sgr0) $(shell tput setaf 40)@@@$(shell tput sgr0) $(shell tput setaf 202)ΩΩ$(shell tput setaf 94)∂∂$(shell tput setaf 208)πππππππππππππ$(shell tput setaf 94)∂$(shell tput setaf 202)ΩΩ$(shell tput sgr0) $(shell tput setaf 40)@@@$(shell tput sgr0) $(shell tput setaf 202)ΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩ$(shell tput setaf 94)∂∂$(shell tput setaf 0)≈≈≈$(shell tput sgr0)"
	@echo "$(shell tput setaf 0)≈≈$(shell tput setaf 94)∂∂∂∂∂$(shell tput setaf 202)ΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩ$(shell tput setaf 94)∂∂$(shell tput setaf 208)ππππππππππππππ$(shell tput setaf 94)∂∂$(shell tput setaf 202)ΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩ∂∂$(shell tput setaf 0)≈≈$(shell tput sgr0)"
	@echo "$(shell tput setaf 0)≈$(shell tput setaf 94)∂∂$(shell tput setaf 0)≈≈$(shell tput setaf 94)∂∂$(shell tput setaf 202)ΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩ$(shell tput setaf 94)∂∂∂$(shell tput setaf 208)ππππππππππ$(shell tput setaf 94)∂∂∂$(shell tput setaf 202)ΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩ$(shell tput setaf 94)∂∂$(shell tput setaf 0)≈≈$(shell tput setaf 94)∂∂$(shell tput setaf 0)≈$(shell tput sgr0)"
	@echo "$(shell tput setaf 0)≈≈≈$(shell tput setaf 94)∂∂$(shell tput setaf 202)ΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩ$(shell tput setaf 94)∂∂∂$(shell tput setaf 208)ππππππππ$(shell tput setaf 94)∂∂∂$(shell tput setaf 202)ΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩ∂∂$(shell tput setaf 0)≈≈≈$(shell tput sgr0)"
	@echo "$(shell tput setaf 94)∂$(shell tput sgr0)ΩΩ$(shell tput setaf 94)∂∂∂∂∂∂∂∂∂∂∂∂∂∂∂∂∂$(shell tput sgr0)ΩΩΩΩΩΩ:::$(shell tput sgr0)ΩΩΩΩΩΩΩ$(shell tput setaf 202)ΩΩΩΩΩΩΩΩΩ$(shell tput sgr0)ΩΩΩΩΩΩ:::$(shell tput sgr0)ΩΩΩΩΩΩΩΩ$(shell tput setaf 94)∂∂∂∂∂∂∂∂∂∂∂∂∂∂∂$(shell tput sgr0)ΩΩ$(shell tput setaf 94)∂$(shell tput sgr0)"
	@echo "$(shell tput setaf 94)∂∂$(shell tput sgr0)ΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩ:$(shell tput sgr0)ΩΩΩΩΩΩΩΩ$(shell tput sgr0)     :::::$(shell tput sgr0)     $(shell tput sgr0)ΩΩΩΩΩΩ:$(shell tput sgr0)ΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩ$(shell tput setaf 94)∂∂$(shell tput sgr0)"
	@echo "$(shell tput setaf 0)≈≈≈$(shell tput sgr0)ΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩ:$(shell tput sgr0)ΩΩΩΩΩΩΩΩΩΩ$(shell tput sgr0)             $(shell tput sgr0)ΩΩΩΩΩΩΩΩ:$(shell tput sgr0)ΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩ$(shell tput setaf 0)≈≈≈$(shell tput sgr0)"
	@echo "$(shell tput setaf 0)≈≈$(shell tput setaf 94)∂∂$(shell tput setaf 0)≈≈$(shell tput sgr0)ΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩ:$(shell tput sgr0)ΩΩΩΩΩΩΩΩΩΩΩΩ$(shell tput sgr0)           $(shell tput sgr0)ΩΩΩΩΩΩΩΩΩΩ:$(shell tput sgr0)ΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩ$(shell tput setaf 0)≈≈∂∂$(shell tput setaf 0)≈≈$(shell tput sgr0)"
	@echo "$(shell tput setaf 0)≈≈≈$(shell tput setaf 94)∂∂∂∂$(shell tput sgr0)ΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩ:ΩΩΩΩΩΩΩΩΩΩΩΩ$(shell tput sgr0)         ΩΩΩΩΩΩΩΩΩΩ:ΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩ$(shell tput setaf 94)∂∂∂∂$(shell tput setaf 0)≈≈≈≈$(shell tput sgr0)"
	@echo "$(shell tput setaf 0)≈≈≈≈≈≈≈≈≈$(shell tput setaf 94)∂∂∂∂∂∂$(shell tput sgr0)ΩΩΩΩΩΩΩΩΩ:$(shell tput sgr0)ΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩ:$(shell tput sgr0)ΩΩΩΩΩΩΩΩΩΩΩΩΩ:$(shell tput sgr0)ΩΩΩΩΩΩΩΩΩΩΩΩΩ$(shell tput setaf 94)∂∂∂$(shell tput setaf 0)≈≈≈≈≈≈≈≈≈$(shell tput sgr0)"
	@echo "$(shell tput setaf 0)≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈$(shell tput setaf 94)∂∂∂∂$(shell tput sgr0)ΩΩΩ:$(shell tput sgr0)ΩΩΩΩΩΩΩΩΩΩΩΩΩΩ:$(shell tput sgr0)ΩΩΩΩΩΩΩΩΩΩΩΩ:$(shell tput sgr0)ΩΩΩΩ$(shell tput setaf 94)∂∂∂∂$(shell tput setaf 0)≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈$(shell tput sgr0)"
	@echo "$(shell tput setaf 0)≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈$(shell tput setaf 94)∂∂∂$(shell tput sgr0)ΩΩΩΩΩΩΩΩΩΩ::$(shell tput sgr0)$(shell tput setaf 196)ΩΩΩ$(shell tput sgr0)::ΩΩΩΩΩΩΩΩ$(shell tput setaf 94)∂∂∂$(shell tput setaf 0)≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈$(shell tput sgr0)"
	@echo "$(shell tput setaf 0)≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈$(shell tput setaf 94)∂∂$(shell tput sgr0):::$(shell tput sgr0)ΩΩΩΩ$(shell tput setaf 196)ΩΩΩ$(shell tput sgr0)ΩΩΩΩ:::$(shell tput setaf 94)∂∂$(shell tput setaf 0)≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈$(shell tput sgr0)"
	@echo "$(shell tput setaf 0)≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈$(shell tput setaf 94)∂∂$(shell tput sgr0)ΩΩΩ$(shell tput setaf 196)Ω$(shell tput sgr0)ΩΩΩΩ$(shell tput setaf 94)∂∂$(shell tput setaf 0)≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈$(shell tput sgr0)"
	@echo "$(shell tput setaf 0)≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈$(shell tput setaf 94)∂∂∂∂∂∂$(shell tput setaf 0)≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈≈$(shell tput sgr0)"

