#include <iostream>

using namespace std;

int main(int argc, char *argv[]){
    int n;
	long long ans = 2;
    cin >> n;	

	while(n>0){
	//2^n
	ans*=2;
	ans--;
	//subtract 1 from n
	n--;
}
	//final n taken care of
	cout<<ans*ans;
return 0;
   
}



