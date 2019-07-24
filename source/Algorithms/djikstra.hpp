/** Djikstra's Shortest Path
 * Finding the shortest path through a graph.
 *
 * The function takes the initial graph, and starting vertex.
 * It then constructs the minimum spanning tree to all vertices in the graph.
 * Return the resulting minimum spanning tree.
 */

#include "../Graphs/Graph.hpp"
#include "../String/String.hpp"
#include "../Functions/functions.hpp"

Graph djikstras(Graph& G, int vertex){
    //Default weight is 1
    bool kwn[G.node_count()]={0};
    int cst[G.node_count()], pth[G.node_count()];


    
    for(int i=0; i<G.node_count();++i){
        cst[i] = INT_MAX;
        pth[i] = -1;
    }

    cst[vertex] = 0;
    

    while(!all(kwn,G.node_count())){
        kwn[vertex]=1;
        std::vector<int> neigh;
        neigh = G.neighbors(vertex); //Start at 0

        for(int j=0;j<neigh.size();++j){
            if(!kwn[neigh.at(j)] && cst[vertex] + G.weight(vertex,neigh.at(j)) < cst[neigh.at(j)]){
                //std::cout<<G.weight(vertex,neigh.at(j));
                cst[neigh.at(j)] = cst[vertex] + G.weight(vertex, neigh.at(j));
                pth[neigh.at(j)] = vertex;
            }
            
        }

        int tmp=INT_MAX;

        for(int x=0;x<G.node_count();++x){

            if(!kwn[x] && cst[x] < tmp){
                tmp = x;
            }     
        }
        //Update vertex
        vertex = tmp;  
        
    }
    

    Graph tmp(G.node_count());
    std::cout<<"Node ct:"<<G.node_count()<<std::endl;
    for(int i=1;i<G.node_count();++i){
        if(!tmp.has_edge(pth[i],i)){
            std::cout<< "Current path: " << pth[i] <<std::endl;
            std::cout<< "Weight at 0,1: "<<G.weight(0,1)<<std::endl;
            std::cout<< "Weight at 2,0: "<<G.weight(2,0)<<std::endl;
            tmp.add_edge(pth[i],i, G.weight(pth[i],i)); //1, 0, 
        }
    }
    
    return tmp;
};
