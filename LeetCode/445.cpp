//
//  445.cpp
//  LeetCode
//
//  Created by Narikbi on 22.02.17.
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

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    
    stack<int> s1;
    stack<int> s2;
    
    while (l1 != NULL) {
        s1.push(l1->val);
        l1 = l1->next;
    }
    
    while (l2 != NULL) {
        s2.push(l2->val);
        l2 = l2->next;
    }
    
    int sum = 0;
    ListNode *list = new ListNode(0);
    while (!s1.empty() || !s2.empty()) {
        if (!s1.empty()) {
            sum += s1.top();
            s1.pop();
        }
        if (!s2.empty()) {
            sum += s2.top();
            s2.pop();
        }
        
        list->val = sum%10;
        ListNode *head = new ListNode(sum / 10);
        head->next = list;
        
        list = head;
        sum /= 10;
    }
    
    return list->val == 0 ? list->next : list;
}

//int main(int argc, const char * argv[]) {
//    
//    ListNode *a1 = new ListNode(7);
//    ListNode *a2 = new ListNode(2);
//    ListNode *a3 = new ListNode(4);
//    ListNode *a4 = new ListNode(3);
//    a1->next = a2;
//    a2->next = a3;
//    a3->next = a4;
//    
//    
//    ListNode *b1 = new ListNode(5);
//    ListNode *b2 = new ListNode(6);
//    ListNode *b3 = new ListNode(4);
//    b1->next = b2;
//    b2->next = b3;
//    
//    ListNode *res = addTwoNumbers(a1, a2);
//    while (res != NULL) {
//        cout << res->val << " ";
//        res = res->next;
//    }
//    
//    return 0;
//}


