//
//  111.cpp
//  LeetCode
//
//  Created by Narikbi on 06.04.17.
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

int minHeight = INT_MAX;

void rec(TreeNode* node, int height) {
    
    if (node == NULL) return;
    
    if (node->left == NULL && node->right == NULL) {
        minHeight = min(minHeight, height);
    }
    
    rec(node->left, height+1);
    rec(node->right, height+1);
    
}

int minDepth(TreeNode* root) {
    
    if (root == NULL) return 0;
    rec(root, 1);
    
    return minHeight;
}


