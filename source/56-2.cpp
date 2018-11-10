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

bool cmp(const Interval l, const Interval r) {
    return l.start < r.start;
}

class Solution {
    
public:
    vector<Interval> merge(vector<Interval>& intervals) {
        
        sort(intervals.begin(), intervals.end(), cmp);
        
        vector<Interval> res;
        
        for (int i = 0; i < intervals.size(); i++) {
            
            if (res.size() > 0 && res.back().end >= intervals[i].start) {
                res.back().end = max(res.back().end, intervals[i].end);
            } else {
                res.push_back(intervals[i]);
            }
        }
        
        return res;
    }
};