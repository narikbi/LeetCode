//
//  326.cpp
//  LeetCode
//
//  Created by Narikbi on 06.03.17.
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

bool isPowerOfThree(int n) {
    
    while (n > 0) {
        n /= 3;
        if (n == 1) return true;
    }
    return false;
}

//
//int main(int argc, const char * argv[]) {
//    
//    cout << isPowerOfThree(18) << endl;
//    
//    return 0;
//}



