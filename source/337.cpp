//
//  337.cpp
//  LeetCode
//
//  Created by Narikbi on 28.02.17.
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

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};


int rob(TreeNode* root) {
    
    if (root == NULL) {
        return 0;
    }
    
    int valOdd = root->val;
    if (root->left) {
        valOdd += rob(root->left->left) + rob(root->left->right);
    }
    if (root->right) {
        valOdd += rob(root->right->left) + rob(root->right->right);
    }
    
    return max(valOdd, rob(root->left) + rob(root->right));
    
}

