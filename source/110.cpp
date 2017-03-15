//
//  110.cpp
//  LeetCode
//
//  Created by Narikbi on 16.03.17.
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

int treeDepth(TreeNode *root) {
    
    if (root == NULL) {
        return 0;
    }
    
    int left = 1;
    int right = 1;
    
    left += treeDepth(root->left);
    right += treeDepth(root->right);
    
    return max(left, right);
}

bool isBalanced(TreeNode* root) {
    
    if (root == NULL) return true;
    
    int left = treeDepth(root->left);
    int right = treeDepth(root->right);
    
    
    if (abs(left-right) > 1) {
        return false;
    }
    
    return isBalanced(root->left) && isBalanced(root->right);
}

