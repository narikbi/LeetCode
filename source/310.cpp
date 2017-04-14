//
//  310.cpp
//  LeetCode
//
//  Created by Narikbi on 15.04.17.
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


vector<int> findMinHeightTrees(int n, vector<pair<int, int>>& edges) {
    
    if (n <= 1) return {0};
    
    vector<unordered_set<int>> graph(n);
    
    for (auto e : edges) {
        graph[e.first].insert(e.second);
        graph[e.second].insert(e.first);
    }
    
    vector<int> current;
    for (int i = 0; i < graph.size(); i++) {
        if (graph[i].size() == 1) current.push_back(i);
    }
    
    while (1) {
        vector<int> next;
        
        for (int node : current) {
            for (int neighbor : graph[node]) {
                graph[neighbor].erase(node);
                if (graph[neighbor].size() == 1) next.push_back(neighbor);
            }
        }
        
        if (next.empty()) break;
        current = next;
    }
    
    return current;
}

