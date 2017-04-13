//
//  134.cpp
//  LeetCode
//
//  Created by Narikbi on 14.04.17.
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


int canCompleteCircuit(vector<int> &gas, vector<int> &cost) {
    int current = 0;
    int start = gas.size(); //start from the end to beginning
    int total = 0;
    
    do {
        if (total + gas[current] - cost[current] >= 0) {
            total += (gas[current] - cost[current]);
            current++; // can go from current to current+1
        }else{
            start--; //not enough gas, try to start the one before origin start point.
            total += (gas[start] - cost[start]);
        }
    } while(current != start);
    
    return total>=0 ? start % gas.size() : -1;
}

