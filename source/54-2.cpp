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
private:
    int dx[4] = {0, 1, 0, -1};
    int dy[4] = {1, 0, -1, 0};
public:
    
    
    
    vector<int> spiralOrder(vector<vector<int>>& a) {
        
        if (a.size() == 0) return {};
        
        int x = 0;
        int y = 0;
        
        int n = a.size();
        int m = a[0].size();
        int cur = 0;
        
        vector< vector<bool>> visited (a.size(), vector<bool>(m, false));
        
        vector<int> ans;
        for (int i = 0; i < n * m; i++) {
            ans.push_back(a[x][y]);
            visited[x][y] = true;
            
            int tx = x + dx[cur];
            int ty = y + dy[cur];
            
            if (0 <= tx && tx < n && 0 <= ty && ty < m && !visited[tx][ty]) {
                x = tx;
                y = ty;
            } else {
                cur = (cur + 1) % 4;
                x += dx[cur];
                y += dy[cur];
            }
        }
        
        return ans;
    }
};