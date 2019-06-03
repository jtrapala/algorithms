#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "string.hpp"

//Constructor
String::String(){

    //Create new array
    array=new char[1];

    //Set contents to null terminators
    array[0]='\0';

    //Set initial length to zero
    len=0;
	//Set capacity
	cap=len;
}

//Constructor with char array
String::String(char *c){
    
    //Get length of string, true length with \0
    len = String::length(c);
	//Capacity will be equal to length
	cap=len;
    //Create new string array
    array= new char [len+1];

    //Copy over contents to new string
    for(unsigned int i=0;i<=len;++i) array[i] = c[i];

    //Then set last character to null
    array[len] = '\0';

}

//Constructor with char
String::String(char c){
    //Set length = 1 (c & \0)
    len=1;
	//Set capacity
	cap=len;
	//Create new array
	array = new char[2];
    //Set first character to char c
    array[0]= c;
	//Set end of array to null
	array[1]='\0';

	//Array will hold |'c'|'\0'|'\0'|
    
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
    return cap;
}

void String::reserve(unsigned int extra){

}


void String::insert(char c, int index){

}


void String::erase(char *end, char c){
	//Contents of the address end is pointing to

	//If contents == c, then erase them (how?)
}



void String::erase(char c){
	char *end;
	end = &(array[len-1]);

	//Check for end of iteration
	if(end < &(array[0])) return;
	else erase(end--, c);
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

    //New pointer to new array that will hold end result
    char *app = new char [len+1]; //Holds 1 more spot for the appended char c

    //Copy the original string array to the new
    for(int i=0;array[i];++i) app[i] = array[i];

    //Set 1 new space for the appended char c
    app[len] = c;

    //Set null
    app[len+1] = '\0';

    //Delete the original
    delete[] array;

    //Set newly appended as the string array
    array = app;
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
	  //Create 2 pointers to the string
	  char *a, *b;

	//a goes to the start of the string and...
	a=&(array[0]);

	b=&(array[len-1]);

	  //Case, if mem adress is same, stop switching
	  if(a==b) return;
  }

  /** shift(int)
   * Shifts all characters ASCII values in the array upwards or downwards by the
   * amount given. This method should also prevent characters from becoming
   * null, or exceeding the ASCII range.
   * O(?)
   */
  void String::shift(int n){

	  //Check if end reaches 0
	  if(n<=0) return;
	  //Check for ASCII range and if char will be null
	  if((array[n] < 'a')&& (array[n] > 'a')&& (array[n] != '\0') && n >=0) array[n]++;
	  else shift(n--); //If valid, k
	  
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