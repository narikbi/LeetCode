//
//  791.cpp
//  LeetCode
//
//  Created by Narikbi on 18.08.2018.
//  Copyright © 2018 app.leetcode.kz. All rights reserved.
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


string customSortString(string S, string T) {
    
    vector <int> count(26, 0);
    
    for (char x : T) {
        count[x - 'a']++;
    }
    
    string ans = "";
    for (char x : S) {
        
        for (int j = 0; j < count[x - 'a']; j++) {
            ans += x;
        }
        
        count[x - 'a'] = 0;
    }
    
    for (char x = 'a'; x <= 'z'; x++) {
        for (int j = 0; j < count[x - 'a']; j++) {
            ans += x;
        }
    }
    
    return ans;
}


