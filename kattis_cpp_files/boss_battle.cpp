#include <iostream>
using namespace std;

int max(int n, int x){
    return n ^ ((n ^ x) & -(n < x));
}


int main() {
    int n;
    //for input
    cin >> n;

    n -= 2;
    n = max(n, 1);

    cout << n << endl;
}