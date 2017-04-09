//
//  86.cpp
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

ListNode* partition(ListNode* head, int x) {
    
    ListNode node1(0);
    ListNode node2(0);
    
    ListNode *p1 = &node1;
    ListNode *p2 = &node2;
    
    while (head) {
        if (head->val < x) {
            p1 = p1->next = head;
        } else {
            p2 = p2->next = head;
        }
        head = head->next;
    }
    
    p2->next = NULL;
    p1->next = node2.next;
    
    return node1.next;
}

