Heap.h

This template heap class can construct a min-heap or a max-heap
data structure. The header consists of the class definition and
its implementation.

Compile command: g++ -g -Wall -std=c++11 Heap.h
Result: Heap.h.gch

---------------------------------------------------------------

HeapSort.h

This template heapsort function can perform an ascending or a
descending sort of heap structure. It returns a vector sorted
in ascending or descending order.

Compile command: g++ -g -Wall -std=c++11 HeapSort.h
Result: HeapSort.h.gch

---------------------------------------------------------------

PriorityItem.h, PriorityItem.cpp

The class, defined in the header file and implemented in the
.cpp file, combines a data element with a priority value. The
item may be used as a key->value pair. Its limited function
overloads relational operators for the priority.

Compile command: g++ -g -Wall -std=c++11 -c PriorityItem.cpp
Result: PriorityItem.o

---------------------------------------------------------------

HeapPQ.cpp

The application tests the Heap and HeapSort features.

Compile command: g++ -g -Wall -std=c++11 -o pq3 HeapPQ.cpp PriorityItem.o 

---------------------------------------------------------------
