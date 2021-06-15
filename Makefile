# simple Makefile
# Daniel Alemu  and 00884794>
# # CS 262, Lab Section 207
# # Lab 1
CFLAGS=-g -Wall
all: lab2_dalemu2_207.c
	gcc $(CFLAGS) -o lab2_dalemu2_207 lab2_dalemu2_207.c
clean:
	rm lab2_dalemu2_207
