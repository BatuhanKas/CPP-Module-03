# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/10 16:55:08 by bkas              #+#    #+#              #
#    Updated: 2024/07/03 17:06:12 by bkas             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME        = scavTrap

PROJECTNAME = ScavTrap

SRC         = main.cpp ClapTrap.cpp ScavTrap.cpp

SRCDIR      = ./src/

OBJDIR      = ./obj

WHITE		= \033[1;37m

GREEN		= \033[0;32m

RED			= \033[0;7;31m

BLUE		= \033[0;34m

MAGENTA		= \033[0;35m

RESET		= \033[0m

OBJ         = $(addprefix $(OBJDIR)/, $(addsuffix .o, $(BASE)))

BASE        = $(basename $(notdir $(SRC)))

CC          = c++ -Wall -Wextra -Werror -std=c++98

CFLAGS      = -g

RM          = rm -rf

ECHO        = echo

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
	@$(ECHO) "$(GREEN)> $(PROJECTNAME) Project Compiled $(RESET)"

$(OBJDIR):
	@test -d $(OBJDIR) || mkdir $(OBJDIR)

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp | $(OBJDIR)
	@$(CC) $(CFLAGS) -c -o $@ $< \
	&& $(ECHO) "$(WHITE)[C++] : Compiled $(notdir $<) [$(GREEN)OK$(RESET)]$(RESET)" \
	|| $(ECHO) "$(WHITE)[C++] : Compiled $(notdir $<) [$(RED)Error$(RESET)]$(RESET)"

clean:
	@$(RM) $(OBJDIR)
	@$(ECHO) "$(BLUE)> $(PROJECTNAME) Directory cleaned $(RESET)"

fclean: clean
	@$(RM) $(NAME)
	@$(ECHO) "$(MAGENTA)> $(PROJECTNAME) Binaries removed $(RESET)"

re: fclean all

.PHONY: all clean fclean re