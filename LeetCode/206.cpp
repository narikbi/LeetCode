//
//  206.cpp
//  LeetCode
//
//  Created by Narikbi on 25.02.17.
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

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode* reverseList1(ListNode* head) {
    
    ListNode *newHead = NULL;
    while (head != NULL) {
        ListNode *next = head->next;
        head->next = newHead;
        newHead = head;
        head = next;
    }
    
    return newHead;
}

ListNode *reverseNodes(ListNode *head, ListNode *newHead) {
    if (head == NULL) return newHead;
    
    ListNode *next = head->next;
    head->next = newHead;
    
    return reverseNodes(next, head);
}

ListNode* reverseList(ListNode* head) {
    
    return reverseNodes(head, NULL);
}


//int main(int argc, const char * argv[]) {
//    
//    ListNode *n = new ListNode(1);
//    reverseList(n);
//    
//    return 0;
//}
//

