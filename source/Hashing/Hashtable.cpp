#include "Hashtable.hpp"
#include "Linkedlist.hpp"
#include "../Stack/Stack.hpp"
#include "../String/String.hpp"
//#include <string>


int HashTable::hash(const String& key){

}


HashTable::HashTable(){

}
HashTable::~HashTable(){
    
}

        
        /** Size()
         * Returns the value of the data member size, the number of indices in the table
         */
unsigned int HashTable::Size(){

}


        /** insert(String key, int data)
         * Insert the value of data into the chain at index hash(key) 
         */
void HashTable::insert(const String& key, int data){

}


        /** remove(String key)
         * Removes the first instance of the given key from the chain located at hash(key) 
         */
void HashTable::remove(String& key){

}


        /** search(String key)
         * Returns true if it found an instance of the key at index hash(key) false otherwise
         */
bool HashTable::search(String& key){

}


        /** get(String key)
         * Returns the integer value associated with the given key from the key/value pair
         */
int HashTable::get(String& key){

}


        /** is_empty()
         * Returns true if all chains are of length 0 indicating them being empty, returns false otherwise
         */
bool HashTable::is_empty(){

}


        /** print()
         * Calls the Linked List print() method on each of its chains
         */
void HashTable::print(){

}
