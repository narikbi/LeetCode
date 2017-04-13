//
//  82.cpp
//  LeetCode
//
//  Created by Narikbi on 14.04.17.
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

ListNode* deleteDuplicates(ListNode* head) {
    
    ListNode fakeNode(0);
    fakeNode.next = head;
    
    head = &fakeNode;
    
    ListNode *tail = head;
    
    bool dups = false;
    for (ListNode *p = head->next; p && p->next; p = p->next) {
        if (dups == false && p->val == p->next->val) {
            dups = true;
            continue;
        }
        
        if (dups == true && p->val != p->next->val) {
            dups = false;
            tail->next = p->next;
            continue;
        }
        
        if (!dups) {
            tail = p;
        }
    }
    
    if (dups == true){
        tail->next = NULL;
    }
    
    return head->next;
}


