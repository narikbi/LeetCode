//
//  112.cpp
//  LeetCode
//
//  Created by Narikbi on 01.04.17.
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

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

bool rec(TreeNode *root, int sum, int current) {
    
    if (root == NULL) {
        return false;
    }
    
    if (root->left == NULL && root->right == NULL && sum == current + root->val) {
        return true;
    }
    
    return rec(root->left, sum, root->val + current) || rec(root->right, sum, root->val + current);
    
}

bool hasPathSum(TreeNode* root, int sum) {
    
    if (root == NULL) return false;
    
    return rec(root, sum, 0);
    
}


