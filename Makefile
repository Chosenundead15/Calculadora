CC = g++

CFLAGS = -lfltk -lX11 -lm -g

SRC = main.cpp calculadora.cpp number.cpp

HEADEARS = calculadora.h number.h

calculadora: $(SRC) $(HEADEARS)
	$(CC) $(SRC) $(CFLAGS) -o $@