//
//  61.cpp
//  LeetCode
//
//  Created by Narikbi on 24.04.17.
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

ListNode* rotateRight(ListNode* head, int k) {
    
    if (!head || k <= 0) return head;
    
    int len = 0;
    ListNode *p = head;
    while (p->next != NULL) {
        p = p->next;
        len++;
    }
    
    p->next = head;
    
    if (k > len) {
        k = len - k%len;
    }
    for (int i = 0; i < k; i++) {
        p = p->next;
    }
    
    head = p->next;
    p->next = NULL;
    
    return head;
    
}

