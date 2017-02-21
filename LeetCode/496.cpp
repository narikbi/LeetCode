//
//  496.cpp
//  LeetCode
//
//  Created by Narikbi on 15.02.17.
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

vector<int> nextGreaterElement(vector<int>& findNums, vector<int>& nums) {
    
    map<int, int> m;
    stack <int> s;
    
    for (int i = 0; i < nums.size(); i++) {
        
        while (s.size() && s.top() < nums[i]) {
            m[s.top()] = nums[i];
            s.pop();
        }
        
        s.push(nums[i]);
    }
    
    vector<int> res;
    for (int i = 0; i < findNums.size(); i++) {
        if (m.count(findNums[i])) {
            res.push_back(m[findNums[i]]);
        } else {
            res.push_back(-1);
        }
    }
    
    return res;
}

//int main(int argc, const char * argv[]) {
//    
//    //    vector <int>v1 = {4,1,2};
//    //    vector <int>v2 = {1,3,4,2};
//    
//    vector <int>v1 = {2, 4};
//    vector <int>v2 = {1,2,3,4};
//    
//    vector<int> r = nextGreaterElement(v1, v2);
//    
//    for (int i = 0; i < r.size(); i++) {
//        cout << r[i] << ' ';
//    }
//    
//    
//    
//    return 0;
//}


