CC = gcc
OUT = calculadora
SRCS = calculadora.c
CFLAGS = -Wall
LDFLAGS = -lm

all: compilar

compilar: $(SRCS)
	$(CC) $(CFLAGS) $(SRCS) -o $(OUT) $(LDFLAGS)

.PHONY: clean

clean:
	rm $(OUT)
