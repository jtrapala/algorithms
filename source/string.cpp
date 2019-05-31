#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "string.hpp"

//Constructor
String::String(){
    
}

//Constructor with char array
String::String(char *s){
    
}

//Constructor with char
String::String(char c){
    
}

//Destructor
String::~String(){

}

char String::at(int n) const{

}

bool String::empty() const{

}

unsigned int String::size()const{

}

unsigned int String::capacity()const{
    
}

void String::reserve(unsigned int un){

}


void String::insert(char c, int n){

}


  void String::erase(char c){

  }

  /** remove(int index)
   * Removes the character at the given index.
   * O(?)
   */
  void String::remove(int n){

  }

  /** append(char)
   * Appends the given character to the string.
   * O(?)
   */
  void String::append(char c){

  }

  /** prepend(char)
   * Prepends the given character to the string.
   * O(?)
   */
  void String::prepend(char c){

  }

  /** compare(char* or String)
   * Returns whether or not the string is equal with the one given.
   * O(?)
   */
  bool String::compare(char *c) const{

  }
  bool String::compare(String s) const{

  }

  /** concate(char* or String)
   * Concatenates the string with the given character array, or string.
   * O(?)
   */
  void String::concatenate(char *c){

  }
  void String::concatenate(String s){

  }

  /** find(char* or char or String)
   * Returns the index of the first occurrence of the character array, char, or
   * string given. Should return length if not found.
   * O(?)
   */
  unsigned int String::find(char *c, int start = 0) const{

  }
  unsigned int String::find(char c, int start = 0) const{

  }
  unsigned int String::find(String s, int start = 0) const{

  }

  /** reverse()
   * Reverses the string in-place.
   * O(?)
   */
  void String::reverse(){

  }

  /** shift(int)
   * Shifts all characters ASCII values in the array upwards or downwards by the
   * amount given. This method should also prevent characters from becoming
   * null, or exceeding the ASCII range.
   * O(?)
   */
  void String::shift(int){

  }

  /** toInt()
   * Returns the string as an integer, if it can be represented as one.
   * Otherwise throws an exception
   * O(?)
   */
  int String::toInt() const{
      
  }

  /** substr(start, end)
   * Returns the string contained between [start, end).
   * O(?)
   */
  String String::substr(int, int) const{

  }