//
//  319.cpp
//  LeetCode
//
//  Created by Narikbi on 28.02.17.
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

using namespace std;

int bulbSwitch(int n) {
    
    int cnt = 0;
    for (int i = 1; i*i <= n; i++) {
        cnt++;
    }
    return cnt;
    
}

//int main(int argc, const char * argv[]) {
//    cout << bulbSwitch(20) << endl;
//    return 0;
//}


