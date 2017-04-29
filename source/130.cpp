//
//  130.cpp
//  LeetCode
//
//  Created by Narikbi on 30.04.17.
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
#include <unordered_set>

using namespace std;

int rows;
int cols;

void rec(vector<vector<char>>& board, int i, int j) {
    
    if (board[i][j] == 'O') {
        board[i][j] = '1';
        
        if (i > 1) rec(board, i-1, j);
        if (j > 1) rec(board, i, j-1);
        if (i+1 < rows) rec(board, i+1, j);
        if (j+1 < cols) rec(board, i, j+1);
    }
    
}

void solve(vector<vector<char>>& board) {
    
    rows = board.size();
    
    if (!rows) return;
    
    cols = board[0].size();
    
    for (int i = 0; i < rows; i++) {
        rec(board, i, 0);
        if (cols > 1) rec(board, i, cols-1);
    }
    
    for (int j = 1; j+1 < cols; j++) {
        rec(board, 0, j);
        if (rows > 1) rec(board, rows-1, j);
    }
    
    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (board[i][j] == 'O') {
                board[i][j] = 'X';
            }
        }
    }
    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (board[i][j] == '1') {
                board[i][j] = 'O';
            }
        }
    }
    
}

