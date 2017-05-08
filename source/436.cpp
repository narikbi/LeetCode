//
//  436.cpp
//  LeetCode
//
//  Created by Narikbi on 02.05.17.
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


int binarySearch(vector<int> list, int x) {
    
    int left = 0;
    int right = list.size()-1;
    
    while (left < right) {
        int mid = left + (right - left) / 2;
        if (list[mid] < x) {
            left = mid+1;
        } else {
            right = mid;
        }
    }
    return list[left];
}

vector<int> findRightInterval(vector<Interval>& intervals) {
    
    vector<int> starts;
    unordered_map <int, int> m;
    
    for (int i = 0; i < intervals.size(); i++) {
        Interval t = intervals[i];
        m[t.start] = i;
        starts.push_back(t.start);
    }
    
    sort(starts.begin(), starts.end());
    vector<int> res (intervals.size(), 0);
    for (int i = 0; i < intervals.size(); i++) {
        int end = intervals[i].end;
        int start = binarySearch(starts, end);
        
        if (start < end) {
            res[i] = -1;
        } else {
            res[i] = m[start];
        }
    }
    
    return res;
}

