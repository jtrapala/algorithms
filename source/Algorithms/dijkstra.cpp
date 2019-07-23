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

        for(int j=0;j<neigh.size();++j){
            if(cst[vertex] + G.weight(vertex,neigh.at(j)) < cst[neigh.at(j)]){
                cst[neigh.at(j)] = cst[vertex] + G.weight(vertex, neigh.at(j));
                pth[neigh.at(j)] = vertex;
            }
            
        }




        vertex = min(cst, G.node_count());
    }
    
    
    



}