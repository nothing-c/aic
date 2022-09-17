CC=gcc
ARGS=-Wall -Werror -Wextra -Wpedantic -O2 -std=c99 -fstack-protector

aic: aic.c
	$(CC) $(ARGS) aic.c -o aic
