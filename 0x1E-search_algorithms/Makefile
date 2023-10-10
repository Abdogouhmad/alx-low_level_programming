#colors

RED = \033[0;31m
GREEN = \033[0;32m
NC = \033[0m
YELLOW = \033[0;33m
MAGENTA = \033[0;35m

#program variables

PROG = search_algo
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)

#compiler variables

CC = gcc
CFLAGS = -Wall -pedantic -Werror -Wextra -std=gnu89

#rules

build: $(PROG)

$(PROG): $(OBJ)
	@echo -e "$(YELLOW)In process... to compile the $(MAGENTA)$(PROG)$(NC)"
	@$(CC) $(CFLAGS) -o $@ $^
	@echo -e "$(GREEN) $(PROG) compiled$(NC) \n"

%.o: %.c
	@$(CC) $(CFLAGS) -c -o  $@ $^

run: build
	@./$(PROG)

clear: run
	@if [ -n "$(OBJ)" ]; then \
		for obj_file in $(OBJ); do \
			if [ -e "$$obj_file" ]; then \
				rm -f "$$obj_file"; \
				echo -e "$(GREEN)files are deleted$(NC)"; \
			else \
				echo -e "$(YELLOW)files are not found$(NC)"; \
			fi \
		done; \
	else \
		echo -e "$(YELLOW)No object files to delete$(NC)"; \
	fi
	@if [ -f "$(PROG)" ]; then \
		rm -f $(PROG); \
		echo -e "$(GREEN)$(PROG) deleted$(NC)"; \
	else \
		echo -e "$(YELLOW)$(PROG) not found$(NC)"; \
	fi



.PHONY: build run clear