//
//  18.cpp
//  LeetCode
//
//  Created by Narikbi on 20.04.17.
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


vector<vector<int>> fourSum(vector<int>& nums, int target) {
    
    unordered_map <int, vector<pair <int, int>>> m;
    
    for (int i = 0; i < nums.size(); i++) {
        for (int j = i+1; j < nums.size(); j++) {
            m[nums[i] + nums[j]].push_back(make_pair(i, j));
        }
    }
    
    vector<vector<int>> ans;
    
    for(auto it = m.begin(); it != m.end(); it++){
        int pairSum = it->first;
        int s = target - pairSum;
        
        if (m.find(s) != m.end()) {
            vector<pair <int, int>> v1 = (*it).second;
            vector<pair <int, int>> v2 = m[s];
            
            for (pair <int, int> p1 : v1) {
                for (pair <int, int> p2 : v2) {
                    set <int> ss;
                    ss.insert(p1.first);
                    ss.insert(p1.second);
                    ss.insert(p2.first);
                    ss.insert(p2.second);
                    
                    if (ss.size() == 4) {
                        vector<int> q;
                        q.push_back(nums[p1.first]);
                        q.push_back(nums[p2.first]);
                        q.push_back(nums[p1.second]);
                        q.push_back(nums[p2.second]);
                        sort(q.begin(), q.end());
                        
                        if (find(ans.begin(), ans.end(), q) == ans.end()) {
                            ans.push_back(q);
                        }
                    }
                }
            }
        }
    }
    
    
    return ans;
}


