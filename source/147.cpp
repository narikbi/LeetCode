//
//  147.cpp
//  LeetCode
//
//  Created by Narikbi on 09.05.17.
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

ListNode* insertionSortList(ListNode* head) {
    
    ListNode *fakeHead = new ListNode(0);
    fakeHead->next = head;
    
    ListNode *pre = fakeHead;
    ListNode *cur = head;
    
    while (cur != NULL) {
        if (cur->next && cur->val > cur->next->val) {
            while (pre->next && cur->next->val > pre->next->val) {
                pre = pre->next;
            }
            ListNode *temp = pre->next;
            pre->next = cur->next;
            cur->next = cur->next->next;
            pre->next->next = temp;
            
            pre = fakeHead;
        } else {
            cur = cur->next;
        }
    }
    
    
    return fakeHead->next;
}


