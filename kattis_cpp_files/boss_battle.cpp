#include <iostream>
using namespace std;

int max(int n, int x){
    return n ^ ((n ^ x) & -(n < x));
}


int main() {
    //For input
    int n;
    cin >> n;
    //For the bombs
    n -= 2;
    n = max(n, 1);
    //For output
    cout << n << endl;
}
