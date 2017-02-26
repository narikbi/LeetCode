//
//  526.cpp
//  LeetCode
//
//  Created by Narikbi on 23.02.17.
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

int ans = 0;

void calcArrangement(int N, int n, vector<bool> used) {
    
    if (n > N) {
        ans++;
        return;
    }
    
    for (int i = 1; i <= N; i++) {
        if (used[i] == false && (i % n == 0 || n % i == 0)) {
            used[i] = true;
            calcArrangement(N, n+1, used);
            used[i] = false;
        }
    }
}

int countArrangement(int N) {
    if (N == 0) return 0;
    
    vector<bool> used (N+1, false);
    calcArrangement(N, 1, used);
    return ans;
    
}

//int main(int argc, const char * argv[]) {
//    
//    cout << countArrangement(2);
//    
//    return 0;
//}



