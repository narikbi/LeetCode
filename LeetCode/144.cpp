//
//  144.cpp
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

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

vector<int> v;

void rec(TreeNode *root) {
    
    if (root == NULL) {
        return;
    }
    
    v.push_back(root->val);
    rec(root->left);
    rec(root->right);
    
}

vector<int> preorderTraversal(TreeNode* root) {
    rec(root);
    return v;
}

