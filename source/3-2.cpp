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
    
    bool find(map <char, int> m, char ch) {
        return m.find(ch) != m.end();
    }
    
    int lengthOfLongestSubstring(string s) {
        
        map <char, int> m;
        
        int maxLen = 0;
        int lastPos = -1;
        
        for (int i = 0; i < s.size(); i++) {
            
            if (find(m, s[i]) && lastPos < m[s[i]]) {
                lastPos = m[s[i]];
            }
            
            if (i - lastPos > maxLen) {
                maxLen = i-lastPos;
            }
            
            m[s[i]] = i;
        }
        
        return maxLen;
    }
};