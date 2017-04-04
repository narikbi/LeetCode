//
//  109.cpp
//  LeetCode
//
//  Created by Narikbi on 05.04.17.
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

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};


TreeNode* sortedListToBST(int low, int high, ListNode*& head) {
    
    if (low > high || head == NULL) {
        return NULL;
    }
    
    int mid = low + (high - low) / 2;
    
    TreeNode *leftNode = sortedListToBST(low, mid-1, head);
    
    TreeNode *node = new TreeNode(head->val);
    node->left = leftNode;
    head = head->next;
    
    TreeNode *rightNode = sortedListToBST(mid+1, high, head);
    node->right = rightNode;
    
    return node;
}

TreeNode* sortedListToBST(ListNode* head) {
    
    int len = 0;
    for (ListNode *p = head; p != NULL; p = p->next) len++;
    
    return sortedListToBST(0, len-1, head);
}



