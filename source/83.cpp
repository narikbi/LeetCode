//
//  83.cpp
//  LeetCode
//
//  Created by Narikbi on 09.03.17.
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

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};


ListNode* deleteDuplicates(ListNode* head) {
    
    if (head == NULL) return NULL;
    
    set <int> s;
    s.insert(head->val);
    
    ListNode *p = head;
    while (p->next != NULL) {
        int data = p->next->val;
        if (s.find(data) != s.end()) {
            ListNode *temp = p->next;
            p->next = p->next->next;
            delete temp;
        } else {
            s.insert(data);
            p = p->next;
        }
    }
    
    
    return head;
}


