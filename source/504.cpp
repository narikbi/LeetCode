//
//  504.cpp
//  LeetCode
//
//  Created by Narikbi on 18.02.17.
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

string convertToBase7(int num) {
    
    if (num == 0) return "0";
    
    string s = "";
    
    bool negative = num < 0;
    if (negative) num = -num;
    
    while (num > 0) {
        s = to_string(num%7) + s;
        num /= 7;
    }
    
    if (negative) {
        s = "-" + s;
    }
    
    return s;
    
}
