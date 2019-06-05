#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "sorts.hpp"

/** Bubble Sort
 *  O(n^2), Omega(n)
 */
void bubble_sort(int* arr, int n) {
  for (int i = 0; i < (n - 1); i++) {
    if (arr[i] > arr[i + 1]) {
      arr[i] = arr[i] xor arr[i + 1];
      arr[i + 1] = arr[i] xor arr[i + 1];
      arr[i] = arr[i] xor arr[i + 1];
    }
  }
  if (n != 1) {
    bubble_sort(arr, n - 1);
  }
}

/** Selection Sort
 * O(?), Omega(?), Theta(?)
 */

void selection_sort(int *arr, int n){
  int min;

  //Case for n ==0
  if(n==0 || n==1) return;

  //Case for n==1
  else if(n==2){
    if(arr[0]>arr[1]) {
      //Swap the elements at arr[i] and the current minimum
      arr[0] = arr[0] xor arr[1];
      arr[1] = arr[0] xor arr[1];
      arr[0] = arr[0] xor arr[1];
    }
    else return;
  }

  else{
    
    for(int i=0;i<n;i++){
    
      //Set the min value as i index
      min = i;
      
      for(int j=i+1;j<n;j++){
      
        //If arr[j] is less than min, set the new min as arr[j]
        if(arr[j] < arr[min]){
          min = j;
        }
      }
      //Swap the elements at arr[i] and the current minimum
      arr[i] = arr[i] xor arr[min];
      arr[min] = arr[i] xor arr[min];
      arr[i] = arr[i] xor arr[min];

    }
  }
  
}

/** Insertion Sort
 * O(?), Omega(?), Theta(?)
 */
void insertion_sort(int *arr, int n){
  
  //Case for n ==0
  if(n==0 || n==1) return;

  //Case for n==1
  else if(n==2){
    if(arr[0]>arr[1]) {
      //Swap the elements at arr[i] and the current minimum
      arr[0] = arr[0] xor arr[1];
      arr[1] = arr[0] xor arr[1];
      arr[0] = arr[0] xor arr[1];
    }
    else return;
  }


  for(int i=0; i<n;i++){
    for(int j=i;j>0;j--){
      if(arr[j-1] > arr[j]){
        //Swap 
        arr[j] = arr[j] xor arr[j-1];
        arr[j-1] = arr[j] xor arr[j-1];
        arr[j] = arr[j] xor arr[j-1];
      }
      else{
        break;
      }
    }
  }

}