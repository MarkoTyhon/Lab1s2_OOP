#pragma once

#include "Node.h";
#include "Edge.h";

#include <vector>; 

class Graph
{
private:
    /* data */
public:
    Graph();
    Graph(vector<Node>);
    ~Graph();

    vector<int> DFS();
    vector<int> BFS();
    vector<int> algPrim();
    vector<int> algDeiks();
    vector<int> algAStar();




};

