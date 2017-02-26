//
//  506.cpp
//  LeetCode
//
//  Created by Narikbi on 18.02.17.
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

using namespace std;

vector<string> findRelativeRanks(vector<int>& nums) {
    
    vector<int> v = nums;
    sort(v.begin(), v.end(), [&](int a, int b) {
        return a >= b;
    });
    
    map<int, string> m;
    for (int i = 0; i < v.size(); i++) {
        if (i == 0) {
            m[v[i]] = "Gold Medal";
        } else if (i == 1) {
            m[v[i]] = "Silver Medal";
        } else if (i == 2) {
            m[v[i]] = "Bronze Medal";
        } else {
            m[v[i]] = to_string(i+1);
        }
    }
    
    vector<string> res;
    for (int x : nums) {
        res.push_back(m[x]);
    }
    
    return res;
}

//
//int main(int argc, const char * argv[]) {
//    
//    vector<int> v = {10,3,8,9,4};
//    vector<string> r = findRelativeRanks(v);
//    
//    for (string s : r) {
//        cout << s << " ";
//    }
//    
//    return 0;
//}


