#include <iostream>

using namespace std;

int main(int argc, char *argv[]){
    int n, pts=0;
    char suit;
	//int dom_flag = 0;

    cin >> n >> suit;	

	char *entry;

	for(int i=0;i<(4*n);++i){
			
		cin >> entry; 

		if(entry[1]==suit && entry[0]=='J') pts=pts+20;
		else if(entry[1]==suit && entry[0]=='9') pts=pts+14;
		else if(entry[0]=='A') pts=pts+11;
		else if(entry[0]=='K') pts=pts+4;
		else if(entry[0]=='Q') pts=pts+3;
		else if(entry[0]=='J') pts=pts+2;
		else if(entry[0]=='T') pts=pts+10;
		else pts=pts+0;
	}

	cout<<pts<<"\n";


return 0;
   
}



