//
//  468.cpp
//  LeetCode
//
//  Created by Narikbi on 28.04.17.
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

bool isValidIPv4Block(string& block) {
    
    int num = 0;
    if (block.size() > 0 && block.size() <= 3) {
        
        for (int i = 0; i < block.size(); i++) {
            char c = block[i];
            if (!isalnum(c) || (i == 0 && c == '0' && block.size() > 1)) {
                return false;
            } else {
                num *= 10;
                num += c - '0';
            }
        }
        return num <= 255;
    }
    
    return false;
}

const string validIPv6Chars = "0123456789abcdefABCDEF";

bool isValidIPv6Block(string& block) {
    
    if (block.size() > 0 && block.size() <= 4) {
        
        for (int i = 0; i < block.size(); i++) {
            char c = block[i];
            if (validIPv6Chars.find(c) == string::npos) {
                return false;
            }
        }
        return true;
    }
    
    return false;
}



string validIPAddress(string IP) {
    
    vector<string> ans = {"IPv4", "IPv6", "Neither"};
    stringstream ss(IP);
    string block;
    
    if (IP.substr(0, 4).find('.') != string::npos) {
        for (int i = 0; i < 4; i++) {
            if (!getline(ss, block, '.') || !isValidIPv4Block(block)) {
                return ans[2];
            }
        }
        return ss.eof() ? ans[0] : ans[2];
        
    } if (IP.substr(0, 5).find(':') != string::npos) {
        
        for (int i = 0; i < 8; i++) {
            if (!getline(ss, block, ':') || !isValidIPv6Block(block)) {
                return ans[2];
            }
        }
        
        return ss.eof() ? ans[1] : ans[2];
    }
    
    return ans[2];
}


