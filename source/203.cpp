//
//  203.cpp
//  LeetCode
//
//  Created by Narikbi on 10.04.17.
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

ListNode* removeElements(ListNode* head, int val) {
    static ListNode dummy(-1);
    dummy.next = head;
    ListNode *p = &dummy;
    
    while( p->next) {
        if (p->next->val == val) {
            p->next = p->next->next;
        }else{
            p = p->next;
        }
    }
    
    return dummy.next;
}

