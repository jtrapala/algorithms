#pragma once

/** Stack
 * A container class that stores data using a LIFO
 * (last in, first out) scheme.
 */
class Stack {
 private:
    int n = 10; //max_length
    int *arr; //At most 10 slots in queue
    int tp;
 public:
  Stack(){
      arr = new int[n];
      tp=-1;
  }
  ~Stack(){
      delete[] arr;
  }

  /** size()
   * Returns the size of the stack.
   */
  unsigned int size(){
      return ((unsigned int)n-(unsigned int)tp);
  }

  /** push(int data)
   * Pushes a node containing the given data to the top of the stack.
   */
  void push(int data){
    (tp >= (n-1))? throw "Top will be out of bounds of stack array": arr[++tp]=data;
  }

  /** pop()
   * Removes and returns the data at the top of the stack.
   */
  int pop(){
      if(tp < 0) throw "Can't pop anything, stack is empty";
      else {
          return arr[tp];
          tp--;
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
    return(tp < 0);
  }

  /** clear()
   * Clears the entire stack.
   */
  void clear(){
      while(tp >-1) tp--;
  }
};