#include <iostream>
using namespace std;

int main(int argc, char *argv[]){
    int n, num=0;
    
	//printf("%d",num);
	//get num of temps
    cin >> n ;
	
	if (n == 0) cout<<num;
	else if (n == 1){	
		int tmps[0];
		cin >> tmps[0];
			if(tmps[0] < 0) cout<<1;
			else cout<<num;
	}	
	else{
		int tmps[n];
		//get temps
    	for(int i=0;i<n;++i) {
			cin >> tmps[i];
			if(tmps[i] < 0) num++;
			else num=num+0;
		}

   	 	cout<<num<<'\n';
	}
	return 0;
}



