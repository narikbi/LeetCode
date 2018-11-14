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
    bool isMatch(string s, string p) {
        
        if (p.length() == 0) return s.length() == 0;
        
        bool firstMatch = (s[0] == p[0] || p[0] == '.');
        
        if (p.size() >= 2 && p[1] == '*') {
            return isMatch(s, p.substr(2)) || (firstMatch && isMatch(s.substr(1), p));
        } else {
            return firstMatch && isMatch(s.substr(1), p.substr(1));
        }
    }
};