//
//  513.cpp
//  LeetCode
//
//  Created by Narikbi on 17.02.17.
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

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};


int findBottomLeftValue(TreeNode* root) {
    
    queue <TreeNode *> q;
    q.push(root);
    
    while (!q.empty()) {
        root = q.front();
        q.pop();
        
        if (root->right) {
            q.push(root->right);
        }
        
        if (root->left) {
            q.push(root->left);
        }
    }
    
    return root->val;
}


