//
//  275.cpp
//  LeetCode
//
//  Created by Narikbi on 09.05.17.
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

int hIndex(vector<int>& citations) {
        
    int n = citations.size();
    
    for (int i = 0; i < n; i++) {
        if(citations[i] >= n-i) {
            return n-i;
        }
    }
    
    return 0;
}
