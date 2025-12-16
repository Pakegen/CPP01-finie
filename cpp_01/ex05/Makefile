NAME= Harl

CC= c++

CFLAGS= -Wall -Werror -Wextra -std=c++98 -I inc

SRCS= src/Harl.cpp\
	   src/main.cpp

INC= inc/Harl.hpp

OBJDIR= obj

OBJS= $(SRCS:src/%.cpp=$(OBJDIR)/%.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

$(OBJDIR)/%.o: src/%.cpp $(INC) | $(OBJDIR)
	$(CC) -c $(CFLAGS) $< -o $@

$(OBJDIR):
	mkdir -p $(OBJDIR)

clean:
	rm -f $(OBJS)
	rm -rf $(OBJDIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re
