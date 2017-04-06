//
//  223.cpp
//  LeetCode
//
//  Created by Narikbi on 07.04.17.
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

using namespace std;

int computeArea(int A, int B, int C, int D, int E, int F, int G, int H) {
    
    int areaA = (C-A) * (D-B);
    int areaB = (G-E) * (H-F);
    
    int left = max(A, E);
    int right = min(C, G);
    int top = min(D, H);
    int bottom = max(B, F);
    
    int overlap = 0;
    if (right > left && top > bottom) {
        overlap = (right-left) * (top-bottom);
    }
    
    return areaA + areaB - overlap;
}
