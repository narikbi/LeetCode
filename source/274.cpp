//
//  274.cpp
//  LeetCode
//
//  Created by Narikbi on 06.04.17.
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

int hIndex(vector<int>& citations) {
    
    sort(citations.begin(), citations.end());
    
    int n = citations.size();
    
    for (int i = 0; i < n; i++) {
        if(citations[i] >= n-i) {
            return n-i;
        }
    }
    
    return 0;
}
