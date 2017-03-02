//
//  386.cpp
//  LeetCode
//
//  Created by Narikbi on 03.03.17.
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

using namespace std;

void helper(int curr, int n, vector<int> &res) {
    
    for (int i = 0; i <= 9; i++) {
        int tmp = curr * 10 + i;
        if (tmp > n) {
            break;
        }
        res.push_back(tmp);
        
        helper(tmp, n, res);
    }
    
}

//vector<int> lexicalOrder(int n) {
//    
//    vector <int> res;
//    for (int i = 1; i <= n && i <= 9; i++) {
//        res.push_back(i);
//        helper(i, n, res);
//    }
//    
//    return res;
//}


