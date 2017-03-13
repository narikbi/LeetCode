//
//  24.cpp
//  LeetCode
//
//  Created by Narikbi on 14.03.17.
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

ListNode* swapPairs(ListNode* head) {
    
    ListNode *dummyHead = new ListNode(0);
    dummyHead->next = head;
    ListNode *p = dummyHead;
    
    while (p->next != NULL && p->next->next != NULL) {
        
        ListNode *first = p->next;
        ListNode *second = p->next->next;
        
        first->next = second->next;
        p->next = second;
        p->next->next = first;
        
        p = p->next->next;
        
    }
    
    return dummyHead->next;
}

