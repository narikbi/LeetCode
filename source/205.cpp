//
//  205.cpp
//  LeetCode
//
//  Created by Narikbi on 05.04.17.
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

bool isIsomorphic(string s, string t) {
    if (s.size()!=t.size()) return false;
    
    const int MAXCHAR = 256;
    char maps[MAXCHAR]={0}, mapt[MAXCHAR]={0};
    
    for(int i=0; i<s.size(); i++){
        if(maps[s[i]] == 0 && mapt[t[i]] == 0){
            maps[s[i]] = t[i];
            mapt[t[i]] = s[i];
            continue;
        }
        if(maps[s[i]] == t[i] && mapt[t[i]] == s[i]) {
            continue;
        }
        return false;
    }
    return true;
}
