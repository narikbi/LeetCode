//
//  399.cpp
//  LeetCode
//
//  Created by Narikbi on 04.03.17.
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

using namespace std;

bool dfs(map <string, map<string, double> > &m, map <string, bool> &visited, string &start, string &end, double &res) {
    
    if (m.find(start) == m.end() || m.find(end) == m.end()) return false;
    if (start == end) return true;
    
    for (auto it = m[start].begin(); it != m[start].end(); it++) {
        auto key = it->first;
        auto value = it->second;
        
        if (visited.find(key) != visited.end() || visited[key] == true) {
            continue;
        }
        
        visited[key] = true;
        double old = res;
        res *= value;
        
        if (dfs(m, visited, key, end, res)) {
            return true;
        }
        
        res = old;
        visited[key] = false;
        visited.erase(key);
        
    }
    
    return false;
    
}


vector<double> calcEquation(vector<pair<string, string>> equations, vector<double>& values, vector<pair<string, string>> queries) {
    
    map <string, map<string, double> > m;
    for (int i = 0; i < equations.size(); i++) {
        auto first = equations[i].first;
        auto second = equations[i].second;
        m[first][second] = values[i];
        m[second][first] = 1.0 / values[i];
    }
    
    vector<double> result;
    for (auto q : queries) {
        string start = q.first;
        string end = q.second;
        
        map <string, bool> visited;
        visited[start] = true;
        double res = 1.0;
        
        if (dfs(m, visited, start, end, res)) {
            result.push_back(res);
        } else {
            result.push_back(-1);
        }
    }
    
    return result;
    
}



