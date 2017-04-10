//
//  142.cpp
//  LeetCode
//
//  Created by Narikbi on 11.04.17.
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

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode *detectCycle(ListNode *head) {
    
    if (head == NULL) return NULL;
    
    vector<ListNode *> v;
    
    while (head->next != NULL) {
        
        if (find(v.begin(), v.end(), head) != v.end()) {
            return head;
        } else {
            v.push_back(head);
        }
        
        head = head->next;
    }
    
    return NULL;
}

