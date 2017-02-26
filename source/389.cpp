//
//  389.cpp
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

using namespace std;

char findTheDifference(string s, string t) {
    
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    
    int index = 0;
    while (index < s.size()) {
        
        if (s[index] != t[index]) {
            return t[index];
        }
        
        index++;
    }
    
    return t[index];
}
