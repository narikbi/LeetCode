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
    bool isOneEditDistance(string s, string t) {
        
        for (int i = 0; i < min(s.size(), t.size()); i++) {
            
            if (s[i] != t[i]) {
                if (s.length() == t.length()) {
                    return s.substr(i+1) == t.substr(i+1);
                } else if (s.length() < t.length()) {
                    return s.substr(i) == t.substr(i+1);
                } else {
                    return s.substr(i+1) == t.substr(i);
                }
            }
        }
        
        int diff = abs((int)s.length() - (int)t.length());
        return diff == 1 || diff == -1;
    }
};