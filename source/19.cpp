//
//  19.cpp
//  LeetCode
//
//  Created by Narikbi on 06.04.17.
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

ListNode* removeNthFromEnd(ListNode* head, int n) {
    
    if (head == NULL || n <= 0) return NULL;
    
    ListNode fakeHead(0);
    fakeHead.next = head;
    head = &fakeHead;
    
    ListNode *p1, *p2;
    p1 = p2 = head;
    for (int i = 0; i < n; i++) {
        if (p2 == NULL) return NULL;
        p2 = p2->next;
    }
    
    while (p2->next != NULL) {
        p2 = p2->next;
        p1 = p1->next;
    }
    
    p1->next = p1->next->next;
    
    return head->next;
}
