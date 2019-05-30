#include <iostream>
#include <unordered_set>
#include <string>
using namespace std;

//This is fine
int first_pos(int n){
    int res=1;
    if(n==1) return res;
    else{

        while(n>1){

            res+=n;
            n--;
        }
        return res;
    }

}
//This is fine
int first_odd(int n){
    int res=0;

    if(n<2) return 1;
    else {
        for(int i=1;i<=2*n;i++) {
            if(i%2==1) res+=i;
            else res+=0;
        }
        return res;
    }
}


int first_ev(int n){
    int res=0;

    if(n<2) return 2;
    else {
        for(int i=1;i<=(2*n+1);i++) {
            if(i%2==0) res+=i;
            else res+=0;
        }
        return res;
    }
}


int main(int argc, char *argv[]){

    //Num data sets
    int p, n, k;
 
    //Get number of sets
    cin >> p;

    //For number of sets, get k and n, then give result
    for(int i=0;i<p;i++){

        cin >> k >> n;

        cout << k <<' '<< first_pos(n)<<' '<< first_odd(n)<<' '<< first_ev(n)<< "\n";  
    }
    return 0;

}//end of main 