#include <iostream>

using namespace std;


int main(int argc, char *argv[]){
    int t, n;
	
    cin >> t;
	int ans[t-1];
	for(int i=0;i<t;++i) ans[i]=0;
	for(int j=0;j<t;++j){
		cin >> n;		
		if(n==0 || n==1) ans[j]=1;
		else if(n==2)ans[j]=2;
		else if (n==3)ans[j]=6;
		else if(n==4)ans[j]=4;
		else ans[j]=0;	
	}

	for(int i=0;i<t;++i) cout<<ans[i]<<endl;


	return 0;
   
}



