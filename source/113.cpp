//
//  113.cpp
//  LeetCode
//
//  Created by Narikbi on 07.04.17.
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

vector<vector<int>> res;

void rec(TreeNode *root, int sum, int current, vector<int> ans) {
    
    if (root == NULL) {
        return;
    }
    
    ans.push_back(root->val);
    if (root->left == NULL && root->right == NULL && sum == current + root->val) {
        res.push_back(ans);
    }
    
    rec(root->left, sum, root->val + current, ans);
    rec(root->right, sum, root->val + current, ans);
    
}

vector<vector<int>> pathSum(TreeNode* root, int sum) {
    
    if (root == NULL) return {};
    
    rec(root, sum, 0, {});
    
    return res;
}


