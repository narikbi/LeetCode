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

bool comp(Interval a, Interval b) {
    return a.start < b.start || (a.start == b.start && a.end < b.end);
}

class Solution {
public:
    int minMeetingRooms(vector<Interval>& intervals) {
        
        if (intervals.size() == 0) return 0;
        
        priority_queue<int, vector<int>, greater<int>> q;

        sort(intervals.begin(), intervals.end(), comp);
        q.push(intervals[0].end);
        
        for (int i = 1; i < intervals.size(); i++) {
            if (q.top() < intervals[i].start) {
                q.pop();
            }
            
            q.push(intervals[i].end);
        }
        
        return q.size();
    }
};