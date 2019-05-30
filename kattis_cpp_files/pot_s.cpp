#include <iostream>
#include <math.h>
using namespace std;


int main() {
    int n, res=0;
    long long entry=0, base=0, exp=0;
    //Take in number of entries
    cin >> n;
    
    for(int i=0;i<n;++i){

        //Take in the number to be processed
        cin >> entry;

        //Process entry to get base number and exponent number
        base=(entry)/10;
        exp=(entry)%10;

        if(base==0) res+=0;
        else if (base==1) res+=1;
        else if (base == 2) res+= (1 << exp); //Left shift= num*2
        else res+=pow(base, exp);

    }
    //Spit out result
    cout << res << endl;
}