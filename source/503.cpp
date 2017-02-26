//
//  503.cpp
//  LeetCode
//
//  Created by Narikbi on 19.02.17.
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

vector<int> nextGreaterElements(vector<int>& nums) {
    
    vector<int> res (nums.size(), -1);
    stack <int> s;
    int n = nums.size();
    
    for (int i = 0; i < n * 2; i++) {
        int num = nums[i%n];
        while (!s.empty() && nums[s.top()] < num) {
            res[s.top()] = num;
            s.pop();
        }
        
        if (i < n) {
            s.push(i);
        }
    }
    
    return res;
}

//int main(int argc, const char * argv[]) {
//    
//    
//    vector<int> v= {1,2,1};
//    //    vector<int> v= {1};
//    vector<int> r = nextGreaterElements(v);
//    
//    for (int x : r) {
//        cout << x << endl;
//    }
//    
//    return 0;
//}
