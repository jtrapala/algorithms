#include "MinHeap.hpp"
#include "MinHeap.hpp"
/** swim()
   * Restores the heap order property after element pushion. Assumes the new
   * element has been pushed at the end of the heap array (right-most node in
   * the bottom level of the tree), and swaps it up the tree until it's greater
   * than its parent.
   */
 
void MinHeap::swim(){
    int temp = size;
    while(array[temp] < array [temp/2]){
        int swap = array[temp];
        array[temp] = array[temp/2];
        array[temp/2] = swap;
        temp /=2;
    }
}

  /** sink(int i)
   * Restores the heap order property after element removal. Assumes the element
   * at the end of the heap array has been swapped with the root, and the size
   * has been decremented (effectively removing the last element in the heap
   * array). It then swaps the element at the root down the tree until both
   * children are greater than it.
   */
  void MinHeap::sink(int i){

  }

  /** search(int i, int data)
   * Recursively searches for data in the MinHeap's subtree rooted at i,
   * returning true if the data is found and false if i is greater than or
   * equal to size or data is less than the MinHeap's value at i.
   */
  bool MinHeap::search(int i, int data){
      return true;
  }

  /** erase(int i, int data)
   * Recursively searches for data in the MinHeap's subtree rooted at i,
   * calling remove on i if data is found in the tree.
   * Does nothing if data is not found in the subtree.
   */
  void MinHeap::erase(int i, int data){}


  MinHeap::MinHeap(unsigned int cap){
  array = new int [cap + 1];
  capacity = cap;
  size = 0 ;  
  }
  MinHeap::~MinHeap(){
      delete[] array;
  }

  /** push(int data)
   * Inserts data into the MinHeap such that the heap order property is
   * preserved.
   * Assumes duplicate elements will not be pushed.
   * Throws an error if the heap is full.
   */
  void MinHeap::push(int data){
      if(capacity < size){
          throw "full";
      }
      else{
          array[size + 1] = data;
          size++;
          swim();
      }

  }

  /** count()
   * Returns the number of elements in the MinHeap.
   */
  int MinHeap::count(){
      return size;
  }

  /** pop()
   * Removes and returns the minimum element in the MinHeap, preserving the
   * heap order property.
   * Throws an error if the heap is empty.
   */
  int MinHeap::pop(){

      if(size == 0) throw "Empty";


      return 0;
  }

  /** peek()
   * Returns the minimum element in the MinHeap without modifying its contents.
   * Throws an error if the heap is empty.
   */
  int MinHeap::peek(){
      return (size == 0)? throw"no good": array[1];
  }

  /** search(int data)
   * Searches the MinHeap for the given data, returning true if the data is
   * found and false otherwise.
   */
  bool MinHeap::search(int data){
      return true;
  }

  /** remove(int i)
   * Removes the element at index i in the MinHeap tree (indexed left-to-right,
   * top-to-bottom) and returns its value.
   * Throws an error if the heap is empty or the index is out of bounds.
   */
  int MinHeap::remove(int i){
      if(size == 0 || i > capacity) throw "Empty";
      int min=this->peek();


      return 0;
  }

  /** erase(int data)
   * Searches the MinHeap for the given data, and deletes it if it's found,
   * preserving the heap order property.
   * Does nothing if data is not found.
   */
  void MinHeap::erase(int data){}

  /** print()
   * Prints the contents of the MinHeap tree to the ostream from left-to-right,
   * top-to-bottom.
   */
  void MinHeap::print(std::ostream& oss){
      for(int i = 1; i <= size; i++){
          oss << array[i] << ", ";
      }
      oss<< "\n";
  }