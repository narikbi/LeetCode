//
//  36.cpp
//  LeetCode
//
//  Created by Narikbi on 30.03.17.
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
#include <cmath>
#include <numeric>
#include <unordered_map>
#include <sstream>

using namespace std;

bool isValidSudoku(vector<vector<char>>& board) {
    
    const int cnt = 9;
    bool rowMask[cnt][cnt] = {false};
    bool colMask[cnt][cnt] = {false};
    bool areaMask[cnt][cnt] = {false};
    
    for (int r = 0; r < board.size(); r++) {
        for (int c = 0; c < board[r].size(); c++) {
            if (!isdigit(board[r][c])) {
                continue;
            }
            
            int idx = board[r][c] - '0' - 1;
            
            if (rowMask[r][idx] == true) {
                return false;
            }
            rowMask[r][idx] = true;
            
            if (colMask[c][idx] == true) {
                return false;
            }
            colMask[c][idx] = true;
            
            int area = (r/3) * 3 + (c / 3);
            if (areaMask[area][idx] == true) {
                return false;
            }
            areaMask[area][idx] = true;
        }
    }
    
    return true;
}


