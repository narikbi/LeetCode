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
    
    bool wordBreak(string s, vector<string>& wordDict) {
        
        vector<bool> dp(s.size(), false);
        
        dp[0] = true;
        
        for (int i = 1; i <= s.size(); i++) {
            
            for (int j = 0; j < i; j++) {
                string str = s.substr(j, i-j);
                if (dp[j] && find(wordDict.begin(), wordDict.end(), str) != wordDict.end()) {
                    dp[i] = true;
                    break;
                }
            }
        }
        
        return dp[s.size()];
    }

//    bool wordBreak(string s, vector<string>& wordDict) {
//
//        vector<bool> visited (s.size(), false);
//
//        queue<int> q;
//
//        q.push(0);
//        while (!q.empty()) {
//            int start = q.front();
//            q.pop();
//
//            if (!visited[start]) {
//                for (int end = start+1; end <= s.length(); end++) {
//                    string str = s.substr(start, end-start);
//
//                    if (find(wordDict.begin(), wordDict.end(), str) != wordDict.end()) {
//                        q.push(end);
//
//                        if (end == s.length()) {
//                            return true;
//                        }
//                    }
//                }
//                visited[start] = true;
//            }
//        }
//
//        return false;
//    }
    
    
};