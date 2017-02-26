//
//  404.cpp
//  LeetCode
//
//  Created by Narikbi on 19.02.17.
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

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

int sumOfLeftLeaves(TreeNode* root) {
    if(root == NULL || (root->left == NULL && root->right == NULL)) return 0;
    
    queue <TreeNode *> q;
    q.push(root);
    
    int sum = 0;
    while (!q.empty()) {
        TreeNode *node = q.front();
        q.pop();
        
        if (node->left != NULL && node->left->left == NULL && node->left->right == NULL) {
            sum += node->left->val;
        }
        if (node->left != NULL) q.push(node->left);
        if (node->right != NULL) q.push(node->right);
    }
    
    return sum;
}

//int main(int argc, const char * argv[]) {
//    
//    return 0;
//}
//
