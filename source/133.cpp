//
//  133.cpp
//  LeetCode
//
//  Created by Narikbi on 23.04.17.
//  Copyright © 2017 app.leetcode.kz. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <deque>
#include <queue>
#include <set>
#include <map>
#include <stack>
#include <cmath>
#include <numeric>
#include <unordered_map>
#include <sstream>
#include <unordered_set>

using namespace std;

struct UndirectedGraphNode {
    int label;
    vector<UndirectedGraphNode *> neighbors;
    UndirectedGraphNode(int x) : label(x) {};
};

UndirectedGraphNode *cloneGraph(UndirectedGraphNode *node) {
    
    if (node == NULL) return NULL;
    
    map <UndirectedGraphNode*, UndirectedGraphNode*> nodeMap;
    
    queue <UndirectedGraphNode *> q;
    q.push(node);
    
    UndirectedGraphNode *tmp = new UndirectedGraphNode(node->label);
    nodeMap[node] = tmp;
    
    
    while (!q.empty()) {
        UndirectedGraphNode *n = q.front();
        q.pop();
        
        for (UndirectedGraphNode *neighbor : n->neighbors) {
            if (nodeMap.find(neighbor) == nodeMap.end()) {
                UndirectedGraphNode *cloneNode = new UndirectedGraphNode(neighbor->label);
                nodeMap[n]->neighbors.push_back(cloneNode);
                nodeMap[neighbor] = cloneNode;
                
                q.push(neighbor);
            } else {
                nodeMap[n]->neighbors.push_back(nodeMap[neighbor]);
            }
        }
    }
    
    return tmp;
}

