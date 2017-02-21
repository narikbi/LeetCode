//
//  498.cpp
//  LeetCode
//
//  Created by Narikbi on 22.02.17.
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

using namespace std;

vector<int> findDiagonalOrder1(vector<vector<int>>& matrix) {
    
    vector<int> res;
    if (matrix.size() == 0) {
        return res;
    }
    
    bool up = true;
    
    int r = 0;
    int c = 0;
    
    int n = matrix.size();
    int m = matrix[0].size();
    
    
    while (r != n && c != m) {
        //        cout << r << " " << c << endl;
        res.push_back(matrix[r][c]);
        if (up) {
            if (r == 0) {
                up = false;
                if (c != matrix[r].size()-1) c++;
                else {
                    r++;
                }
                
            } else {
                c++;
                r--;
            }
        } else {
            if (c == 0) {
                up = true;
                if (r != matrix.size()-1) r++;
                else {
                    c++;
                }
            } else {
                c--;
                r++;
            }
        }
    }
    
    res.push_back(matrix[n-1][m-1]);
    
    return res;
}

vector<int> findDiagonalOrder2(vector<vector<int>>& matrix) {
    if (matrix.size() == 0) return {};
    int m = matrix.size(), n = matrix[0].size();
    
    vector<int> result;
    int row = 0, col = 0, d = 0;
    vector<vector<int>> dirs = {{-1, 1}, {1, -1}};
    
    for (int i = 0; i < m * n; i++) {
        result.push_back(matrix[row][col]);
        row += dirs[d][0];
        col += dirs[d][1];
        
        if (row >= m) { row = m - 1; col += 2; d = 1 - d;}
        if (col >= n) { col = n - 1; row += 2; d = 1 - d;}
        if (row < 0)  { row = 0; d = 1 - d;}
        if (col < 0)  { col = 0; d = 1 - d;}
    }
    
    return result;
}

//int main(int argc, const char * argv[]) {
//    
//    //    vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};
//    //    vector<vector<int>> matrix {{3},{2}};
//    vector<vector<int>> matrix {{3,2,1}};
//    vector<int> res = findDiagonalOrder1(matrix);
//    
//    for (int x : res) {
//        cout << x << " ";
//    }
//    
//    
//    return 0;
//}
