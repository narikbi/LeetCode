//
//  412.cpp
//  LeetCode
//
//  Created by Narikbi on 15.02.17.
//  Copyright © 2017 app.leetcode.kz. All rights reserved.
//

#include <stdio.h>
#include <vector>
#include <string>
#include <algorithm>
#include <deque>
#include <queue>
#include <set>
#include <map>
#include <stack>

using namespace std;


vector<string> fizzBuzz(int n) {
    vector <string> res;
    for (int i = 1; i <= n; i++) {
        if (i%3 == 0 && i%5 == 0) {
            res.push_back("FizzBuzz");
        } else if (i%5 == 0) {
            res.push_back("Buzz");
        } else if (i%3 == 0) {
            res.push_back("Fizz");
        } else {
            res.push_back(to_string(i));
        }
    }
    
    return res;
}
