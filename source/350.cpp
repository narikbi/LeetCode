//
//  350.cpp
//  LeetCode
//
//  Created by Narikbi on 25.02.17.
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


vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
    map <int, int> m;
    for (int x : nums1) {
        m[x]++;
    }
    
    vector <int> res;
    for (int x : nums2) {
        if (m.count(x) > 0 && m[x] > 0) {
            res.push_back(x);
            m[x]--;
        }
    }
    return res;
}


//int main(int argc, const char * argv[]) {
//    
//    vector<int> v1 = {1, 2, 2, 1};
//    vector<int> v2 = {2, 2};
//    
//    vector<int> v = intersect(v1, v2);
//    for (int x : v) {
//        cout << x << " ";
//    }
//    
//    return 0;
//}
