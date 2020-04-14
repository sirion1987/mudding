NAME = mudding
VER = 0.0.1

CC = gcc
CC_OPTIONS = -Wall
SOURCEDIR = src
C_FILES = $(wildcard $(SOURCEDIR)/*.c)

compile:
	$(CC) $(CC_OPTIONS) $(C_FILES) -o $(NAME)
