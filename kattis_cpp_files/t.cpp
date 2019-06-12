#include <iostream>
using namespace std;


int quad(int x, int y){
    int a=0, b=0;
    if ((1000-x) > 1000) a=1; //x is pos
    else a=0; //x is neg

    if((1000-y)> 1000) b=1; //y is pos
    else b=0; //y is neg

    if (a ^ b == 0){
        if (a && b == 1) return 3;
        else return 1;
    }
    else{
        if(a == 0) return 4;
        else return 2;
    }

}






int main(int argc, char *argv[]){
    int x=10, y=-4;
    //cin << x <<'\n'y <<endl;

    int q=quad(x,y);
    cout<<q<<'\n';
}