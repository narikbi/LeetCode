//
//  463.cpp
//  LeetCode
//
//  Created by Narikbi on 16.02.17.
//  Copyright © 2017 app.leetcode.kz. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <deque>
#include <queue>
#include <set>
#include <map>
#include <stack>

using namespace std;

int islandPerimeter(vector<vector<int>>& grid) {
    
    if (grid.size() == 1 && grid[0].size() == 1 && grid[0][0]) {
        return 4;
    }
    
    int islands = 0;
    int neighbours = 0;
    
    for (int i = 0; i < grid.size(); i++) {
        for (int j = 0; j < grid[i].size(); j++) {
            if (grid[i][j] == 1) {
                islands++;
                if (i < grid.size()-1 && grid[i+1][j] == 1) neighbours++;
                if (j < grid[i].size()-1 && grid[i][j+1] == 1) neighbours++;
                
            }
            
        }
    }
    
    return islands * 4 - 2 * neighbours;
    
}

//int main(int argc, const char * argv[]) {
//    
//    vector<vector<int>> grid = {{0,1,0,0},
//        {1,1,1,0},
//        {0,1,0,0},
//        {1,1,0,0}};
//    
//    vector<vector<int>> grid2 =
//    {{1,1,1,1},
//        {1,1,1,0},
//        {1,1,1,1},
//        {1,1,1,1}};
//    
//    cout << islandPerimeter(grid) << endl;
//    cout << islandPerimeter(grid2) << endl;
//    
//    
//    return 0;
//}
