//
//  492.cpp
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

vector<int> constructRectangle(int area) {
    
    int w = (int)sqrt(area);
    while (area%w != 0) w--;
    
    return {area/w, w};
}

