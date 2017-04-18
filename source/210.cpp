//
//  210.cpp
//  LeetCode
//
//  Created by Narikbi on 19.04.17.
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


bool topologicalSort(int n, vector<bool> &explored,
                     vector<bool> &path,
                     unordered_map<int, vector<int>> &graph,
                     vector<int> &res) {
    
    for (int i = 0; i < graph[n].size(); i++) {
        int prereq = graph[n][i];
        
        if (path[prereq]) {
            res.clear();
            return false;
        }
        
        path[prereq] = true;
        
        if (!topologicalSort(prereq, explored, path, graph, res)) {
            res.clear();
            return false;
        }
        path[prereq] = false;
    }
    
    if (!explored[n]) {
        res.push_back(n);
    }
    
    explored[n] = true;
    
    return true;
}

vector<int> findOrder(int numCourses, vector<pair<int, int>>& prerequisites) {
    
    vector <int> result;
    vector <int> entrance (numCourses, true);
    
    unordered_map<int, vector<int>> graph;
    for (int i = 0; i < prerequisites.size(); i++) {
        graph[prerequisites[i].first].push_back(prerequisites[i].second);
        entrance[prerequisites[i].second] = false;
    }
    
    vector <bool> explored (numCourses, false);
    vector <bool> path(numCourses, false);
    
    for (int i = 0; i < numCourses; i++) {
        if (!entrance[i] || explored[i]) continue;
        if (!topologicalSort(i, explored, path, graph, result)) return result;
    }
    
    for (int i = 0; i < numCourses; i++) {
        if (!explored[i]) return vector<int>();
    }
    
    return result;
    
}


