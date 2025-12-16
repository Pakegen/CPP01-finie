NAME= brainz

CC= c++

CFLAGS= -Wall -Werror -Wextra -std=c++98 -I inc

SRCS= src/Zombie.cpp\
      src/main.cpp\
      src/newZombie.cpp\
      src/randomChump.cpp

INC= inc/Zombie.hpp

OBJDIR= obj

OBJS= $(SRCS:src/%.cpp=$(OBJDIR)/%.o)

all: $(NAME)

$(NAME): $(OBJS)
	@echo -e "\033[1;32m[OK]\033[0m Linking $(NAME)"
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

$(OBJDIR)/%.o: src/%.cpp $(INC) | $(OBJDIR)
	@echo -e "\033[1;34m[CC]\033[0m $<"
	$(CC) -c $(CFLAGS) $< -o $@

$(OBJDIR):
	mkdir -p $(OBJDIR)

clean:
	@echo -e "\033[1;33m[RM]\033[0m Removing objects"
	rm -f $(OBJS)
	rm -rf $(OBJDIR)

fclean: clean
	@echo -e "\033[1;31m[RM]\033[0m Removing Binary"
	rm -f $(NAME)

re: fclean all


.PHONY: clean fclean re
