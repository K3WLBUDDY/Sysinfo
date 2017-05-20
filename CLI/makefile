OBJS = sysCPU.o main.o
CC = g++

run : $(OBJS)
	$(CC) -o run $(OBJS)

sysCPU.o : sysCPU.h sysCPU.cpp
	$(CC) -c sysCPU.cpp