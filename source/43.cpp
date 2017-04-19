//
//  43.cpp
//  LeetCode
//
//  Created by Narikbi on 20.04.17.
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

string multiply(string num1, string num2) {
    
    string sum(num1.size() + num2.size(), '0');
    
    for (int i = num1.size()-1; i >= 0; i--) {
        int carry = 0;
        for (int j = num2.size()-1; j >= 0; j--) {
            int tmp = (sum[i+j+1] - '0') + (num1[i]-'0') * (num2[j]-'0') + carry;
            sum[i+j + 1] = tmp%10 + '0';
            carry = tmp/10;
        }
        sum[i] += carry;
    }
    
    size_t startpos = sum.find_first_not_of("0");
    if (startpos != string::npos) {
        return sum.substr(startpos);
    }
    
    return "0";
}


