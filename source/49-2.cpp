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
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        unordered_map <string, vector<string> > m;
        
        for (string s : strs) {
            string t = s;
            sort(t.begin(), t.end());
            m[t].push_back(s);
        }
        
        vector<vector<string>> res;
        for (auto it : m) {
            vector<string> row;
            for (string s : it.second)
                row.push_back(s);
            res.push_back(row);
        }
        
        return res;
    }
};