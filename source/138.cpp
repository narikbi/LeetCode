//
//  138.cpp
//  LeetCode
//
//  Created by Narikbi on 20.04.17.
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

struct RandomListNode {
    int label;
    RandomListNode *next, *random;
    RandomListNode(int x) : label(x), next(NULL), random(NULL) {}
};

RandomListNode *copyRandomList(RandomListNode *head) {
    
    RandomListNode *p = NULL, *h = NULL, *t = NULL;
    
    if (head == NULL) return NULL;
    
    p = head;
    while (p != NULL) {
        RandomListNode *node = new RandomListNode(p->label);
        node->next = p->next;
        p->next = node;
        p = node->next;
    }
    
    p = head;
    while (p != NULL) {
        if (p->random != NULL) {
            p->next->random = p->random->next;
        }
        
        p = p->next->next;
    }
    
    p = head;
    h = t = head->next;
    
    while (p != NULL) {
        p->next = p->next->next;
        if (t->next != NULL) {
            t->next = t->next->next;
        }
        
        p = p->next;
        t = t->next;
    }
    
    return h;
}


