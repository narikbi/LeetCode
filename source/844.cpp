//
//  844.cpp
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

bool backspaceCompare(string S, string T) {
    
    int i = S.size()-1;
    int j = T.size()-1;
    
    int skipS = 0, skipT = 0;
    
    while (i >= 0 || j >= 0) {
        
        while (i >= 0) {
            if (S[i] == '#') {
                skipS++;
                i--;
            } else if (skipS > 0) {
                skipS--;
                i--;
            } else {
                break;
            }
        }
        
        while (j >= 0) {
            if (T[j] == '#') {
                skipT++;
                j--;
            } else if (skipT > 0) {
                skipT--;
                j--;
            } else {
                break;
            }
        }
        
        if (i >= 0 && j >= 0 && S[i] != T[j]) {
            return false;
        }
        
        if ((i >= 0) != (j >= 0)) {
            return false;
        }
        
        i--;
        j--;
    }
    
    return true;
}
