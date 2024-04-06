# Heap programs
# CS 210 Spring 2024
# Usage:  
#   make p3
#   make pq3

CC=g++
CFLAGS=-g -Wall -std=c++11

pq3: HeapPQ.cpp PriorityItem.o HeapSort.h Heap.h
	$(CC) $(CFLAGS) -o pq3 HeapPQ.cpp PriorityItem.o 

PriorityItem.o: PriorityItem.cpp PriorityItem.h
	$(CC) $(CFLAGS) -c PriorityItem.cpp

heap: Heap.h
	$(CC) $(CFLAGS) Heap.h

hs: HeapSort.h
	$(CC) $(CFLAGS) HeapSort.h

clean:
	rm *.o *.gch pq3


