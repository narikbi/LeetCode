//
//  116.cpp
//  LeetCode
//
//  Created by Narikbi on 15.03.17.
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

using namespace std;

struct TreeLinkNode {
    int val;
    TreeLinkNode *left, *right, *next;
    TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
};

void connect(TreeLinkNode *root) {
    
    if (root == NULL) return;
    
    if (root->left && root->right) {
        root->left->next = root->right;
    }
    
    if (root->next && root->right) {
        root->right->next = root->next->left;
    }
    
    connect(root->left);
    connect(root->right);
    
}

