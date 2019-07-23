#include "djikstra.hpp"
#include "source/Functions/functions.hpp"
Graph djikstras(Graph& G, int vertex){
    //Default weight is 1
    bool kwn[G.node_count()]={0};
    int cst[G.node_count()], pth[G.node_count()];



    for(int i=0; i<G.node_count();++i){
        cst[i] = INT_MAX;
        pth[i] = -1;
    }

    

    while(!all(kwn,G.node_count())){
        std::vector<int> neigh;
        neigh = G.neighbors(vertex); //Start at 0

        vertex = min(cst, G.node_count());
    }
    
    
    



}