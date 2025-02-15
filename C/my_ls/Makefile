CC = gcc
FLAGS = -Wall -Wextra -Werror # -g3 -fsanitize=address
TARGET = my_ls
SRC = my_ls.c* my_string.c linked_list.c


$(TARGET): $(SRC)
	@$(CC) $(FLAGS) -o $(TARGET) $(SRC)

.PHONY: fclean

fclean:
	@rm -r $(TARGET)