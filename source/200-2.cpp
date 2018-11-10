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
    int count = 0;
    vector<vector<char>> grid;
public:
    
    bool valid(int x, int y) {
        return 0 <= x && x < grid.size() && 0 <= y && y < grid[x].size();
    }
    
    void dfs(int x, int y) {
        grid[x][y] = '0';
        
        if (valid(x+1, y) && grid[x+1][y] == '1') dfs(x+1, y);
        if (valid(x-1, y) && grid[x-1][y] == '1') dfs(x-1, y);
        if (valid(x, y+1) && grid[x][y+1] == '1') dfs(x, y+1);
        if (valid(x, y-1) && grid[x][y-1] == '1') dfs(x, y-1);

    }
    
    int numIslands(vector<vector<char>>& grid) {
        this->grid = grid;
        
        for (int i = 0; i < this->grid.size(); i++) {
            for (int j = 0; j < this->grid[i].size(); j++) {
                if (this->grid[i][j] == '1') {
                    dfs(i, j);
                    count++;
                }
            }
        }
        
        return count;
    }
};