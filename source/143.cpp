//
//  143.cpp
//  LeetCode
//
//  Created by Narikbi on 23.04.17.
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


void reorderList(ListNode* head) {
    
    if (head == NULL) return;
    
    ListNode fakeHead(0);
    fakeHead.next = head;
    
    ListNode *p1 = head;
    ListNode *p2 = head->next;
    
    while (p2 && p2->next) {
        p1 = p1->next;
        p2 = p2->next->next;
    }
    
    
    ListNode *head2 = p1->next;
    p1->next = NULL;
    
    p2 = head2->next;
    head2->next = NULL;
    while (p2) {
        p1 = p2->next;
        p2->next = head2;
        head2 = p2;
        p2 = p1;
    }
    
    for (p1 = head, p2 = head2; p1;) {
        auto t = p1->next;
        p1 = p1->next = p2;
        p2 = t;
    }
}

