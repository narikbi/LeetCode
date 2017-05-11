//
//  93.cpp
//  LeetCode
//
//  Created by Narikbi on 09.05.17.
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

void restoreIpAddresses(string &s, int start, int partNum, string ip, vector<string> &result) {
    
    int len = s.size();
    if (len - start < 4-partNum || len - start > (4-partNum) * 3) {
        return;
    }
    
    if (partNum == 4 && start == len) {
        ip.erase(ip.end()-1, ip.end());
        result.push_back(ip);
        return;
    }
    
    int num = 0;
    for (int i = start; i < start+3; i++) {
        num = num*10 + s[i]-'0';
        
        if (num < 256) {
            ip += s[i];
            restoreIpAddresses(s, i+1, partNum+1, ip+'.', result);
        }
        if (num == 0) {
            break;
        }
    }
    
}


vector<string> restoreIpAddresses(string s) {
    
    vector<string> result;
    string ip;
    restoreIpAddresses(s, 0, 0, ip, result);
    return result;
    
}


