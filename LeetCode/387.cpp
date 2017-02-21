//
//  387.cpp
//  LeetCode
//
//  Created by Narikbi on 19.02.17.
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

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

int firstUniqChar(string s) {
    map <char, char> m;
    for (char c : s) {
        m[c]++;
    }
    for (int i = 0; i < s.size(); i++) {
        if (m[s[i]] == 1) {
            return i;
        }
    }
    
    return -1;
}

