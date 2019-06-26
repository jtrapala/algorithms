#pragma once

/** Queue
 * A container class that stores data using a FIFO
 * (first in, first out) scheme.
 */
class Queue {
 private:
    int n=15;
    int *arr;
    unsigned int len;
    int f, b;
    
 public:
  Queue(){
    arr = new int[n];
    f=0; b=-1; len = 0;
    
  }
  ~Queue(){
    delete[] arr;
  }

  /** size()
   * Returns the size of the queue.
   */
  unsigned int size(){
    return len;
  }

  /** push(int data)
   * Pushes a node containing the given data to the back of the queue.
   */
  void push(int data){
    if(b == n) throw "Over capacity, can't push to back";
    else{
        arr[++b] = data;
        len++;
    }
  }

  /** pop()
   * Removes and returns the data at the front of the queue.
   */
  int pop(){
    if(f == n) throw "Over capacity, can't pop anymore";
    else{
        return arr[++b];
        len--;
    }
  }

  /** front()
   * Returns the data at the front of the queue without changing the queue.
   */
  int front(){
    return (len==0)? throw "No data in queue":arr[f];
  }

  /** back()
   * Returns the data at the back of the queue without changing the queue.
   */
  int back(){
    return (len==0)?throw "No data in queue":arr[b];
  }

  /** empty()
   * Returns whether or not the queue is empty.
   */
  bool empty(){
    if(len == 0) return true;
    else return false;
  }

  /** clear()
   * Clears the entire stack.
   */
  void clear(){
     while(b >-1) {
          b--;
          len--;
      }
  }

  void print(){
    
  }
};