//
//  199.cpp
//  LeetCode
//
//  Created by Narikbi on 08.03.17.
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

vector<int> res;

void rec(TreeNode *root, int level) {
    
    if (root == NULL) return;
    
    if (level > res.size()) res.push_back(root->val);
    
    rec(root->right, level+1);
    rec(root->left, level+1);
    
}

vector<int> rightSideView(TreeNode* root) {
    if (root == NULL) return {};
    rec(root, 1);
    return res;
}



