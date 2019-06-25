#pragma once
#include "LinkedList.hpp"
/** Queue
 * A container class that stores data using a FIFO
 * (first in, first out) scheme.
 */
class Queue {
 private:
  LinkedList *list;
 
 public:
  Queue(){
    list = new LinkedList();
  }
  ~Queue(){
    this->clear();
  }

  /** size()
   * Returns the size of the queue.
   */
  unsigned int size(){
    list->length();
  }

  /** push(int data)
   * Pushes a node containing the given data to the back of the queue.
   */
  void push(int data){
    list->push_back(data);
  }

  /** pop()
   * Removes and returns the data at the front of the queue.
   */
  int pop(){
    list->pop_front();
  }

  /** front()
   * Returns the data at the front of the queue without changing the queue.
   */
  int front(){
    return list->at(0);
  }

  /** back()
   * Returns the data at the back of the queue without changing the queue.
   */
  int back(){
    return list->at((list->length()-1));
  }

  /** empty()
   * Returns whether or not the queue is empty.
   */
  bool empty(){
    if(list->length() == 0) return true;
    else return false;
  }

  /** clear()
   * Clears the entire stack.
   */
  void clear(){
    list->clear();
  }

  void print(){
    list->print();
  }
};