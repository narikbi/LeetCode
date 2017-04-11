//
//  92.cpp
//  LeetCode
//
//  Created by Narikbi on 12.04.17.
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

ListNode *reverseBetween(ListNode *head, int m, int n) {
    
    if (head==NULL || m>=n) return head;
    
    ListNode fake(0);
    fake.next = head;
    ListNode *pBegin=&fake, *pEnd=&fake;
    
    int distance = n - m ;
    while(pEnd && distance>0){
        pEnd = pEnd->next;
        distance--;
    }
    while(pBegin && pEnd && m-1>0) {
        pBegin = pBegin->next;
        pEnd = pEnd->next;
        m--;
    }
    if (pBegin==NULL || pEnd==NULL || pEnd->next == NULL){
        return head;
    }
    
    ListNode *p = pBegin->next;
    ListNode *q = pEnd->next->next;
    
    ListNode *pHead = q;
    while(p != q){
        ListNode* node = p->next;
        p->next = pHead;
        pHead = p;
        p = node;
    }
    pBegin->next = pHead;
    
    return fake.next;
    
}


