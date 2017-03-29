//
//  374.cpp
//  LeetCode
//
//  Created by Narikbi on 30.03.17.
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

int guess(int num);

int guessNumber(int n) {
    
    int low = 0;
    int high = n;
    while (low < high) {
        int mid = (high - low) / 2 + low;
        if (guess(mid) == 0) {
            return 0;
        } else if (guess(mid) == 1) {
            low = mid + 1;
        } else {
            high = mid;
        }
    }
    return low;
}
