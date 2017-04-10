//
//  396.cpp
//  LeetCode
//
//  Created by Narikbi on 11.04.17.
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

int maxRotateFunction(vector<int>& A) {
    
    int sum = 0;
    int F = 0;
    
    for (int i = 0; i < A.size(); i++) {
        sum += A[i];
        F += (i * A[i]);
    }
    
    int maxF = F;
    int len = A.size();
    
    for (int i = 1; i < len; i++) {
        F = F - sum + len * A[i-1];
        maxF = max(maxF, F);
    }
    
    return maxF;
}



