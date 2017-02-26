//
//  447.cpp
//  LeetCode
//
//  Created by Narikbi on 26.02.17.
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

double distance(pair<int, int> p1, pair<int, int> p2) {
    int dx = p1.first - p2.first;
    int dy = p1.second - p2.second;
    
    return dx * dx + dy * dy;
}

int numberOfBoomerangs(vector<pair<int, int>>& points) {
    int count = 0;
    
    for (int i = 0; i < points.size(); i++) {
        map <int, int> m;
        
        for (int j = 0; j < points.size(); j++) {
            if (i == j) continue;
            
            int d = distance(points[i], points[j]);
            m[d]++;
        }
        
        for (auto& x : m) {
            if (x.second > 1) {
                count += x.second * (x.second-1);
            }
        }
    }
    
    return count;
}


