//
//  482.cpp
//  LeetCode
//
//  Created by Narikbi on 01.03.17.
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

char formatCase(char c) {
    if ('a' <= c && c <= 'z') {
        return char('A' + (c - 'a'));
    }
    return c;
}

string licenseKeyFormatting(string S, int K) {
    
    string str = "";
    for (char c : S) {
        c = formatCase(c);
        if (c != '-') str += c;
    }
    
    if (str.size() <= K) return str;
    
    string res = "";
    int index = str.size()%K;
    if (index > 0) {
        res += str.substr(0, index);
        res += "-";
    }
    
    while (index < str.size()) {
        res += str.substr(index, K);
        if (index + K != str.size()) {
            res += "-";
        }
        
        index += K;
        
    }
    
    return res;
}


//int main(int argc, const char * argv[]) {
//    
//    
//    cout << licenseKeyFormatting("2-4A0r7-4k", 4) << endl;
//    //    cout << licenseKeyFormatting("2-4A0r7-4k", 3) << endl;
//    
//    return 0;
//}


