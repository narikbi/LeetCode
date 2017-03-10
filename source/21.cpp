//
//  21.cpp
//  LeetCode
//
//  Created by Narikbi on 11.03.17.
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

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};


ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
    
    ListNode *p1 = l1;
    ListNode *p2 = l2;
    
    static ListNode dummy(0);
    dummy.next = p1;
    
    ListNode *prev = &dummy;
    
    while (p1 && p2) {
        if (p1->val < p2->val) {
            prev = p1;
            p1 = p1->next;
        } else {
            prev->next = p2;
            p2 = p2->next;
            
            prev = prev->next;
            prev->next = p1;
            
        }
    }
    
    if (p2) {
        prev->next = p2;
    }
    
    return dummy.next;
}






