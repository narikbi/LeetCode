//
//  406.cpp
//  LeetCode
//
//  Created by Narikbi on 16.02.17.
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

using namespace std;

vector<pair<int, int>> reconstructQueue(vector<pair<int, int>>& people) {
    
    sort(people.begin(), people.end(), [] (const pair<int, int>p1, const pair<int, int>p2){
        return p1.first == p2.first ? p1.second < p2.second : p1.first > p2.first;
    });
    
    vector<pair<int, int>> v;
    for (auto& p : people) {
        v.insert(v.begin() + p.second, p);
    }
    
    return v;
}

