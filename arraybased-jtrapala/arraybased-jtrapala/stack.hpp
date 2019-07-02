#pragma once
#include <iostream>
/** Stack
 * A container class that stores data using a LIFO
 * (last in, first out) scheme.
 */
class Stack {
 private:
    int n = 14; //max_length
    int *arr; //At most 10 slots in queue
    unsigned int len=0;
    int tp;
 public:
  Stack(){
      arr = new int[n];
      tp=-1;
      len=0;
  }
  ~Stack(){
      delete[] arr;
  }

  /** size()
   * Returns the size of the stack.
   */
  unsigned int size(){
      if(tp < 0) return 0;
      else return len;
  }

  /** push(int data)
   * Pushes a node containing the given data to the top of the stack.
   */
  void push(int data){
    if(tp >= (n-1)) throw "Top will be out of bounds of stack array";
    else{
        arr[++tp]=data;
        len++;
    } 

  }

  /** pop()
   * Removes and returns the data at the top of the stack.
   */
  int pop(){
      if(tp < 0) throw "Can't pop anything, stack is empty";
      else {
          return arr[tp--];
          len--;
      } 

  }

  /** top()
   * Returns the data at the top of the stack without changing the stack.
   */
  int top(){
       if(tp < 0) throw "Can't pop anything, stack is empty";
       else return arr[tp];
  }

  /** empty()
   * Returns whether or not the stack is empty.
   */
  bool empty(){
    return (tp == -1 )?true:false;
  }

  /** clear()
   * Clears the entire stack.
   */
  void clear(){
      while(tp >-1) {
          tp--;
          len--;
      }
  }
  
  void prt(){
      for(int i=0;i<=tp;++i) std::cout << arr[i] << ", ";
      std::cout << std::endl;
  }
};