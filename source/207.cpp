//
//  207.cpp
//  LeetCode
//
//  Created by Narikbi on 11.04.17.
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

bool hasCycle(int n, vector<int> &explored, vector<int> &path, map <int, vector<int>> &graph) {
    
    for (int i = 0; i < graph[n].size(); i++) {
        
        //detect cycle
        if (path[graph[n][i]]) return true;
        
        path[graph[n][i]] = true;
        
        if (hasCycle(graph[n][i], explored, path, graph)) {
            return true;
        }
        
        path[graph[n][i]] = false;
    }
    
    explored[n] = true;
    
    return false;
}

bool canFinish(int numCourses, vector<pair<int, int>>& prerequisites) {
    
    map <int, vector<int> > graph;
    for (int i = 0; i < prerequisites.size(); i++) {
        pair<int, int> p = prerequisites[i];
        graph[p.first].push_back(p.second);
    }
    
    vector<int> explored(numCourses, false);
    vector<int> path(numCourses, false);
    
    
    for (int i = 0; i < numCourses; i++) {
        if (explored[i]) continue;
        if (hasCycle(i, explored, path, graph)) return false;
    }
    
    return true;
}


