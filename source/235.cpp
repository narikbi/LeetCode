//
//  235.cpp
//  LeetCode
//
//  Created by Narikbi on 11.03.17.
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

TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
    
    while (root != NULL) {
        if (p->val > root->val && q->val > root->val) {
            root = root->right;
            continue;
        }
        if (p->val < root->val && q->val < root->val) {
            root = root->left;
            continue;
        }
        
        return root;
        
    }
    
    return NULL;
}

