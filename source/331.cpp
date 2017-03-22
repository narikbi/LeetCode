//
//  331.cpp
//  LeetCode
//
//  Created by Narikbi on 22.03.17.
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


vector<string> split (string s) {
    
    stringstream ss (s);
    
    vector<string> res;
    string item;
    while (getline(ss, item, ',')) {
        res.push_back(item);
    }
    return res;
}


bool isValidSerialization(string preorder) {
    
    vector <string> list = split(preorder);
    
    int nodeExpected = 1;
    for (string node : list) {
        if (nodeExpected == 0) return false;
        if (node == "#") nodeExpected--;
        else nodeExpected++;
    }
    
    return nodeExpected == 0;
    
}

