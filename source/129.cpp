//
//  129.cpp
//  LeetCode
//
//  Created by Narikbi on 22.03.17.
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

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

int rec(TreeNode *node, int sum) {
    
    if (node == NULL) {
        return 0;
    }
    
    int val = sum * 10 + node->val;
    if (node->left == NULL && node->right == NULL) {
        return val;
    }
    
    return rec(node->left, val) + rec(node->right, val);
}

int sumNumbers(TreeNode* root) {
    
    if (root == NULL) return 0;
    
    return rec(root, 0);
    
}


