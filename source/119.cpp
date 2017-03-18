//
//  119.cpp
//  LeetCode
//
//  Created by Narikbi on 19.03.17.
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

using namespace std;

vector<int> getRow(int rowIndex) {
    
    vector<vector<int>> v (rowIndex+1);
    
    for (int i = 0; i <= rowIndex+1; i++) {
        v[i].resize(i + 1);
        v[i][0] = 1;
        v[i][i] = 1;
        
        for (int j = 1; j < i; j++) {
            v[i][j] = v[i-1][j] + v[i-1][j-1];
        }
    }
    
    return v[rowIndex];
}


//int main(int argc, const char * argv[]) {
//    
//    vector<int> v= getRow(3);
//    
//    for (auto x : v) {
//        cout << x << " ";
//    }
//    
//    return 0;
//}
//
//
//







