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

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& a, int k) {
        
        int n = a.size();
        deque<int> q;
        
        // precalc first k elements
        int i = 0;
        for (; i < k; i++) {
            while (!q.empty() && a[i] >= a[q.back()])
                q.pop_back();
            
            q.push_back(i);
        }
        
        // rest of array
        vector<int> res;
        for (; i < n; i++) {
            res.push_back(a[q.front()]);
            
            while (!q.empty() && q.front() <= i-k)
                q.pop_front();
            
            while (!q.empty() && a[i] >= a[q.back()])
                q.pop_back();
            
            q.push_back(i);
        }
        
        res.push_back(a[q.front()]);
        
        return res;
    }
};