//
//  257.cpp
//  LeetCode
//
//  Created by Narikbi on 18.03.17.
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

vector<string> res;

void rec(TreeNode *node, string path) {
    
    if (node->left == NULL && node->right == NULL) {
        res.push_back(path + to_string(node->val));
    }
    
    if (node->left != NULL) rec(node->left, path + to_string(node->val) + "->");
    if (node->right != NULL) rec(node->right, path + to_string(node->val) + "->");
    
}

vector<string> binaryTreePaths(TreeNode* root) {
    
    if (root != NULL) rec(root, {});
    
    return res;
}



