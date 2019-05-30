#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;


int main() {
    int n;
    string stat, name;

    //Take in number of entries in log
    cin >> n;

    //Create unordered map with entry and status
    //Status=0/1, 0=outside, 1=inside
    unordered_map<string, int> rec;

    for(int i=0;i<n;++i){

        //Take in the entry to be processed
        cin >> stat >> name;

        //Add if not in records
        if(rec.count(name) == 0) rec.insert({name, 0});

        //Do regardless if in records or not
        if(stat == "entry"){ //If entered
            if((rec[name] && 1) == 1) cout<<name<<' '<<"entered (ANOMALY)"<<endl;
            else {
                rec[name] = 1;
                cout<<name<<' '<<"entered"<<endl;
            }
        }
        else{ //If exited
               if((rec[name] || 0) == 0) cout<<name<<' '<<"exited (ANOMALY)"<<endl;
            else {
                rec[name] = 0;
                cout<<name<<' '<<"exited"<<endl;
            }
        }

    } //End of for loop
return 0;
}//End of main loop