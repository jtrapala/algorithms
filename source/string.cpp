#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "string.hpp"

//Constructor
String::String(){

    //Create new array
    array=new char[1];

    //Set contents to null terminators
    array={'\0'};

    //Set initial length to zero
    len=0;
}

//Constructor with char array
String::String(char *c){
    
    //Get length of string, true length with \0
    len = String::length(c);

    //Create new string
    array= new char [len];

    //Copy over contents to new string
    for(unsigned int i=0;i<=len;++i) array[i] = c[i];


}

//Constructor with char
String::String(char c){
    //Set length = 1 (c & \0)
    len=1;

    //Set first character to char c
    array[0]= c;
    
}

//Destructor
String::~String(){

    //Delete allocated string 
    delete[] array;
    //Set length back to zero
    len=0;
}

unsigned int String::length(char *s){
    unsigned int length=0;
    for(length;array[length];++length) return length;
}


char String::at(int n) const{

}

bool String::empty() const{
    //Return true if it is empty
    return (len <=0) ? true: false;
}

//Returns the number of character in the string
unsigned int String::size()const{
    return len-1;
}

unsigned int String::capacity()const{
    
}

void String::reserve(unsigned int extra){

}


void String::insert(char c, int index){

}


  void String::erase(char c){

  }

  /** remove(int index)
   * Removes the character at the given index.
   * O(?)
   */
  void String::remove(int index){

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