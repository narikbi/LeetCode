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
    string longestPalindrome(string s) {
        
        vector< vector <int> > dp(s.size(), vector<int>(s.size(), 0));

        for (int i = 0; i < s.size(); i++) {
            dp[i][i] = 1;
        }
        
        for (int i = 1; i < s.size(); i++) {
            if (s[i-1] == s[i]) dp[i-1][i] = 2;
        }
        
        for (int len = 2; len < s.size(); len++) {
            int i = 0, j = len;
            
            while (i < s.size() && j < s.size()) {
                if (s[i] == s[j] && dp[i+1][j-1] != 0) {
                    dp[i][j] = dp[i+1][j-1] + 1;
                }
                i++;
                j++;
            }
        }
        
        int ans = 0;
        string res = "";
        for (int i = 0; i < dp.size(); i++) {
            for (int j = 0; j < dp[0].size(); j++) {
                if (ans < dp[i][j]) {
                    ans = dp[i][j];
                    res = s.substr(i, j-i+1);
                }
            }
        }
        
        return res;
    }
};