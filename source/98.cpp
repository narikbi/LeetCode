//
//  98.cpp
//  LeetCode
//
//  Created by Narikbi on 25.04.17.
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

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

bool rec(TreeNode *node, long long minVal, long long maxVal) {
    if (node == NULL) return true;
    if (node->val >= maxVal || node->val <= minVal) return false;
    return rec(node->left, minVal, node->val) && rec(node->right, node->val, maxVal);
}

bool isValidBST(TreeNode* root) {
    
    if (root == NULL) return false;
    
    return rec(root, LONG_MIN, LONG_MAX);
    
}

