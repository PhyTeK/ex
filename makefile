CC=gcc
CFLAGS=-lm -I.
SRC=$(wildcard *.c)
OBJS=$(SRCS:.c)

all: $(SRC)
	$(CC) -o $@ $^ $(CFLAGS)

upp1: upp1_2810.c
	$(CC) -o upp1 upp1_2810.c $(CFLAGS)
upp2: upp2_2810.c
	$(CC) -o upp2 upp2_2810.c $(CFLAGS)
upp3: upp3_2810.c
	$(CC) -o upp3 upp3_2810.c $(CFLAGS)
upp4: upp4_2810.c
	$(CC) -o upp4 upp4_2810.c $(CFLAGS)
upp5: upp5_2810.c
	$(CC) -o upp5 upp5_2810.c $(CFLAGS)
fibo: fibonacci.c
	$(CC) -O3 -o fibo fibonacci.c $(CFLAGS)

.PHONY: clean
clean:
	rm -rf *.o
