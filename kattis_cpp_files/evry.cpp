#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;


int main() {
    int n, m, i, j, rep;
    string place;

    //Take in number of trip sets
    cin >> n;

   

    for(i=0;i<n;++i){
        rep=0;
        cin >> m;

         //Create unordered map with names and trips count
         unordered_map<string, int> trips;

        for(j=0;j<m;++j){
            //Take in the entry to be processed
            cin >> place;

            //Add if not in records
            if(trips.count(place) == 0){
                trips.insert({place, 0});
                rep++;
            }

            //trips[place]++;
           

        }//End of inner for loop
      
        //for(auto k=trips.begin();k!=trips.end();++k) if((k->second) > 1) rep++;
       
        //Ouput the number of repeated places per set
        cout << rep <<endl;
        

    } //End of outer for loop
return 0;
}//End of main loop