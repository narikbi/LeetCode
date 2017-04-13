//
//  56.cpp
//  LeetCode
//
//  Created by Narikbi on 14.04.17.
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

struct Interval {
    int start;
    int end;
    Interval() : start(0), end(0) {}
    Interval(int s, int e) : start(s), end(e) {}
};

vector<Interval> merge(vector<Interval>& intervals) {
    
    vector<Interval> result;
    if (intervals.size() <= 0) return result;
    
    sort(intervals.begin(), intervals.end(), [](Interval a, Interval b){return a.start < b.start;});
    
    for (int i = 0; i < intervals.size(); i++) {
        int size = result.size();
        if (size > 0 && result.back().end >= intervals[i].start) {
            result.back().end = max(result.back().end, intervals[i].end);
        } else {
            result.push_back(intervals[i]);
        }
    }
    
    return result;
}

