//
//  67.cpp
//  LeetCode
//
//  Created by Narikbi on 10.04.17.
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

string addBinary(string a, string b) {
    
    string s = "";
    int c = 0;
    int i = a.size()-1;
    int j = b.size()-1;
    
    while (i >= 0 || j >= 0 || c == 1) {
        if (i >= 0) {
            c += a[i]-'0';
            i--;
        }
        
        if (j >= 0) {
            c += a[j]-'0';
            j--;
        }
        
        s = char(c % 2 + '0') + s;
        c /= 2;
        
    }
    
    return s;
}


