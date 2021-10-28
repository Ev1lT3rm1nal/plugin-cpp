CC = g++
CFLAGS = -shared -O3
ifeq ($(OS),Windows_NT)
	end=.dll
else
  	end=.so
endif

all:
	$(CC) $(CFLAGS) plugin.h plugin.cpp -o plugin$(end)
