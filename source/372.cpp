//
//  372.cpp
//  LeetCode
//
//  Created by Narikbi on 31.03.17.
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

const int base = 1337;

int powmod(int a, int k) {
    
    a %= base;
    
    int res = 1;
    for (int i = 0; i < k; i++) {
        res = (res * a) % base;
    }
    
    return res;
}

int superPow(int a, vector<int>& b) {
    
    if (b.empty()) {
        return 1;
    }
    
    int lastDigit = b.back();
    b.pop_back();
    
    return (powmod(superPow(a, b), 10) * powmod(a, lastDigit)) % base;
    
}

int main(int argc, const char * argv[]) {
    
    return 0;
}

