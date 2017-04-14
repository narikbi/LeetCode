//
//  148.cpp
//  LeetCode
//
//  Created by Narikbi on 15.04.17.
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

ListNode *mergeLists(ListNode *head1, ListNode *head2) {
    
    ListNode *p1 = head1;
    ListNode *p2 = head2;
    
    static ListNode dummy(0);
    
    ListNode *tail = &dummy;
    
    while (p1 && p2) {
        if (p1->val < p2->val) {
            tail->next = p1;
            p1 = p1->next;
        } else {
            tail->next = p2;
            p2 = p2->next;
        }
        tail = tail->next;
    }
    
    if (p1) tail->next = p1;
    if (p2) tail->next = p2;
    
    return dummy.next;
}

ListNode *sortList(ListNode *head) {
    
    if (head == NULL || head->next == NULL) return head;
    
    ListNode *p1 = head;
    ListNode *p2 = head->next;
    
    while (p2 && p2->next) {
        p1 = p1->next;
        p2 = p2->next->next;
    }
    
    p2 = p1->next;
    p1->next = NULL;
    
    return mergeLists(sortList(head), sortList(p2));
}

