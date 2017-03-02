//
//  405.cpp
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

string toHex(int num) {
    
    vector<char> map = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'};
    if (num == 0) return "0";
    
    string result = "";
    while (num != 0) {
        result = map[(num & 16)] + result;
        num >>= 4;
    }
    
    return result;
}
