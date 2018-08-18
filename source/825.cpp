//
//  825.cpp
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


int numFriendRequests(vector<int>& ages) {
    
    vector <int> count(2000, 0);
    
    for (int i = 0; i < ages.size(); i++) {
        count[ages[i]] ++;
    }
    
    int ans = 0;
    for (int ageA = 1; ageA <= 120; ageA++) {
        int countA = count[ageA];
        
        for (int ageB = 1; ageB <= 120; ageB++) {
            int countB = count[ageB];
            
            if (ageA * 0.5 + 7 >= ageB) continue;
            if (ageA < ageB) continue;
            if (ageA < 100 && ageB > 100) continue;
            
            ans += countA * countB;
            if (ageA == ageB) {
                ans -= countA;
            }
        }
    }
    
    return ans;
}
