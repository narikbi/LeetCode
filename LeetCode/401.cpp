//
//  401.cpp
//  LeetCode
//
//  Created by Narikbi on 24.02.17.
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

int bitAmount(int x) {
    int count = 0;
    while (x > 0) {
        count += x % 2;
        x /= 2;
    }
    return count;
}

vector<string> readBinaryWatch(int num) {
    
    vector<string> v;
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 60; j++) {
            if (bitAmount(i * 64 + j) == num) {
                string hour = to_string(i);
                string mins = to_string(j);
                if (j < 10) mins = "0" + mins;
                string s = hour + ":" + mins;
                v.push_back(s);
            }
        }
    }
    
    return v;
}


