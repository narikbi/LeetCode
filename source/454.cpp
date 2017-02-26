//
//  454.cpp
//  LeetCode
//
//  Created by Narikbi on 23.02.17.
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


map <int, int> fillMap(vector<int> A, vector<int> B) {
    
    map <int, int> m;
    for (int x : A) {
        for (int y : B) {
            m[x+y]++;
        }
    }
    
    return m;
}

int fourSumCount(vector<int>& A, vector<int>& B, vector<int>& C, vector<int>& D) {
    
    int ans = 0;
    
    map <int, int> m1 = fillMap(A, B);
    map <int, int> m2 = fillMap(C, D);
    
    for (auto &it1 : m1) {
        auto it2 = m2.find(-it1.first);
        if (it2 != m2.end()) {
            ans += it1.second * it2->second;
        }
    }
    
    return ans;
}

