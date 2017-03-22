//
//  141.cpp
//  LeetCode
//
//  Created by Narikbi on 22.03.17.
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

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

bool hasCycle(ListNode *head) {
    
    if (head == NULL) return false;
    
    vector<ListNode *> v;
    
    while (head->next != NULL) {
        
        if (find(v.begin(), v.end(), head) != v.end()) {
            return true;
        } else {
            v.push_back(head);
        }
        
        head = head->next;
    }
    
    return false;
}

