/*
 * Max-heap data structure
 */
#ifndef HEAP_H
#define HEAP_H
#include <vector>
#include <stdexcept>
using namespace std;

template<typename T>
class Heap
{
public:
  Heap();
  Heap(bool isMinHeap);
  Heap(const T elements[], int arraySize);
  void add(const T& element);
  T remove();
  int getSize() const; 
  
private:
  vector<T> v;
  bool isMax = true;
  void _swap(int idx1, int idx2);
};

// Empty max-heap
template<typename T>
Heap<T>::Heap() { }

// Empty min-heap is boolean is true
template<typename T>
Heap<T>::Heap(bool isMinSort) : isMax(!isMinSort) { } 

// Initializes max-heap with elements in an array
template<typename T>
Heap<T>::Heap(const T elements[], int arraySize)
{
  // Sequentially add elements to the heap vector
}

// Insert element into the heap and maintain the heap property
template<typename T>
void Heap<T>::add(const T& element)
{
  // Append element to the end of the vector
  // Set the currentIndex the last element in the vector
  
  //Pseudocode: Maintain the heap property by up-heapify
  //   // Feel free to reorganize this pseudocode's function
  //   while currentIndex > 0
  //      set parent index (use a formula for a node's parent)
  //      if a max-heap
  //          if current priority is greater than its parent's priority, 
  //             swap these vector elements
  //          else
  //             break because the tree is a heap now
  //
  //      else it's a min heap
  //          if current priority is less than its parent's priority, 
  //             swap these vector elements
  //          else
  //             break because the tree is a heap now
  //      currentIndex = parentIndex;
}

// Exchange the elements in the vector at the given indexes
template<typename T>
void Heap<T>::_swap(int idx1, int idx2)
{
  T temp = v[idx1];
  v[idx1] = v[idx2];
  v[idx2] = temp;
}

// Remove the root from the heap
template<typename T>
T Heap<T>::remove()
{
  // if heap is empty, 
  //    throw runtime_error("Heap is empty");
		
  // Save (removed) element at top of the heap
  T element = v[0];
  // Put last element at the top of the heap
	
  // Maintain the heap property by down-heapify
  // Set currentIndex = 0;
  // 
  // while currentIndex is less than vector size
  //   get left and right child indexes (use a formula)
		
  //   if left child index is >= vector size, the tree is a heap
  //   if this is a max-heap, 
  //     Find the maximum between two children (keep in mind
  //     a complete tree's right index might be out of range) 
		
  //     Swap if the current node is less than or equal to the maximum
  //     else break because the tree is a heap
  //     update currentIndex to maxIndex
  //   else this is a min-heap,
  //     repeat the above but for a min-heap
  //
  //  return the saved (removed) element	
  return element;
}

// Get the number of elements in the heap
template<typename T>
int Heap<T>::getSize() const
{
   return v.size();
}

#endif
