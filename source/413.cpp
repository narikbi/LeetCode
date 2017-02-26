//
//  413.cpp
//  LeetCode
//
//  Created by Narikbi on 16.02.17.
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

int numberOfArithmeticSlices(vector<int>& a) {
    
    int count = 0;
    int sum = 0;
    
    for (int i = 2; i < a.size(); i++) {
        if (a[i]-a[i-1] == a[i-1]-a[i-2]) {
            count ++;
        } else {
            count = 0;
        }
        
        sum += count;
    }
    
    return sum;
}

