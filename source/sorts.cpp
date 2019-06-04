#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "sorts.hpp"

void bubble_sort(int *arr, int n){

    bool sort = false;

    while(sort){
        for(int i=0;i<n-1;++i){
            for(int j=1;j<n;++j){
                if(arr[i] < arr[j]) continue;
                else swap(&arr[i], &arr[j]);
            }
            
        }
    }

}

void swap(int *a, int *b){
   // a=a^b
    //b=a^b
    //a=a^b
}