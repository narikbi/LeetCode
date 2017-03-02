//
//  435.cpp
//  LeetCode
//
//  Created by Narikbi on 03.03.17.
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
struct Interval {
    int start;
    int end;
    Interval() : start(0), end(0) {}
    Interval(int s, int e) : start(s), end(e) {}
};

int eraseOverlapIntervals(vector<Interval>& intervals) {
    
    auto comp = [](const Interval& i1, const Interval& i2) {
        return i1.start < i2.start;
    };
    sort(intervals.begin(), intervals.end(), comp);
    
    int pre = 0, res = 0;
    for (int i = 1; i < intervals.size(); i++) {
        if (intervals[i].start < intervals[pre].end) {
            res++;
            if (intervals[i].end < intervals[pre].end) pre = i;
        } else {
            pre = i;
        }
    }
    
    return res;
}


