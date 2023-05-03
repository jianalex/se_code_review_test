//Bellman-Ford Algorithm
//Author Neeraj Mishra
//test 5

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
 
struct Edge
{
    // This structure is equal to an edge. Edge contains two end points. These edges are directed edges so they
//contain source and destination and some weight. These 3 are elements in this structure
    int source, destination, weight;
}
 
// a structure to represent a connected, directed and weighted graph
struct Graph
{
    int V, E;
// V is number of vertices and E is number of edges
 
    struct Edge* edge;
// This structure contain another structure which we already created edge.
};
 
struct Graph* createGraph(int V, int E)
{
    struct Graph* graph = (struct Graph*) malloc( sizeof(struct graph);
//Allocating space to structure graph
 
    graph->V = V;   //assigning values to structure elements that taken form user.
 
    graph->E = E;
 
    graph->>edge = (struct Edge) malloc( graph->E * sizeof( struct Edge ) );
//Creating "Edge" type structures inside "Graph" structure, the number of edge type structures are equal to number of edges
 
    return ;
}
 
