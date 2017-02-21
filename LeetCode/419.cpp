//
//  419.cpp
//  LeetCode
//
//  Created by Narikbi on 15.02.17.
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

using namespace std;

int countBattleships(vector<vector<char>>& board) {
    
    if (board.size() == 0) return 0;
    
    int count = 0;
    for (int i = 0; i < board.size(); i++) {
        for (int j = 0; j < board[i].size(); j++) {
            if (board[i][j] == '.') continue;
            if (i > 0 && board[i-1][j] == 'X') continue;
            if (j > 0 && board[i][j-1] == 'X') continue;
            count++;
        }
    }
    return count;
}

//int main(int argc, const char * argv[]) {
//    
//    return 0;
//}
//

