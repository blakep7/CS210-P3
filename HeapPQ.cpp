#include "Heap.h"
#include "HeapSort.h"
#include "PriorityItem.h"
#include <iostream>
#include <string>
using namespace std;

typedef int INT;
typedef double DBL;
typedef PriorityItem PI;

int main()
{
   // INT type testing
   Heap<INT> iheap;
   std::cout << "Size:" << iheap.getSize() << std::endl;
   // tests here to add INT values to the heap,
   // check size, and remove operations

   // DBL type testing for min-heap
   Heap<DBL> dheap(true);
   // tests here

   // PriorityItem type testing
   // create key-value items 
   // tests here

   // Test sort   
   const int SIZE = 9;
   int list[] = {1, 7, 3, 4, 9, 3, 3, 1, 2};
   Heap<int> unsortedHeap(list, SIZE);
   vector<int> descending(heapSort(unsortedHeap, false));
   // print resulting vector
   vector<int> ascending(heapSort(unsortedHeap, true));
   // print resulting vector
   
}
