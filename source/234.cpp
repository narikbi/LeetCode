//
//  234.cpp
//  LeetCode
//
//  Created by Narikbi on 08.04.17.
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

ListNode *findMiddle(ListNode *head) {
    
    ListNode *p1 = head;
    ListNode *p2 = head;
    
    while (p2 && p2->next) {
        p1 = p1->next;
        p2 = p2->next->next;
    }
    
    return p1;
}

ListNode *reverse(ListNode *head) {
    
    ListNode *prev = NULL;
    
    while (head != NULL) {
        ListNode *next = head->next;
        head->next = prev;
        prev = head;
        head = next;
    }
    return prev;
}

bool isPalindrome(ListNode* head) {
    
    if (head == NULL) return false;
    
    ListNode *p = findMiddle(head);
    ListNode *q = reverse(p);
    
    for (; head != p; q = q->next, head = head->next) {
        if (q->val != head->val) {
            return false;
        }
    }
    return true;
}
