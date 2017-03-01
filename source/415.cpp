//
//  415.cpp
//  LeetCode
//
//  Created by Narikbi on 02.03.17.
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

string addStrings(string num1, string num2) {
    
    int i = num1.length() - 1;
    int j = num2.length() - 1;
    int carry = 0;
    
    string res = "";
    while (i >= 0 || j >= 0 || carry) {
        int sum = 0;
        
        if (i >= 0) {
            sum += (num1[i] - '0');
            i--;
        }
        if (j >= 0) {
            sum += (num2[j] - '0');
            j--;
        }
        
        sum += carry;
        carry = sum / 10;
        sum %= 10;
        res += to_string(sum);
        
    }
    
    reverse(res.begin(), res.end());
    
    return res;
}

//int main(int argc, const char * argv[]) {
//    
//    cout << addStrings("123123", "123123");
//
//    return 0;
//}


