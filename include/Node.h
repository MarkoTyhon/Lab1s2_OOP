#pragma once

#include <vector>;

class Node {
    
    int val;
    vector<int> next;

    Node();
    Node(int , vector<Node>);
    ~Node();
};