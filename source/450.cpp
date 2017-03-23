//
//  450.cpp
//  LeetCode
//
//  Created by Narikbi on 23.03.17.
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


TreeNode* findMin(TreeNode *node) {
    
    while (node->left != NULL) {
        node = node->left;
    }
    
    return node;
}

TreeNode* deleteNode(TreeNode* root, int key) {
    
    if (root == NULL) {
        return NULL;
    }
    
    if (key < root->val) {
        root->left = deleteNode(root->left, key);
    } else if (key > root->val) {
        root->right = deleteNode(root->right, key);
    } else {
        
        if (root->left == NULL) {
            return root->right;
        } else if (root->right == NULL) {
            return root->left;
        }
        
        TreeNode *minNode = findMin(root->right);
        root->val = minNode->val;
        root->right = deleteNode(root->right, root->val);
        
    }
    
    return root;
}
