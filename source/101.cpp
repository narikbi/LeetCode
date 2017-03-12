//
//  101.cpp
//  LeetCode
//
//  Created by Narikbi on 12.03.17.
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

bool isSymmetric(TreeNode* root) {
    
    queue <TreeNode *> q1;
    queue <TreeNode *> q2;
    
    q1.push(root->left);
    q2.push(root->right);
    
    while (!q1.empty() && !q2.empty()) {
        
        TreeNode *p1 = q1.front();
        q1.pop();
        
        TreeNode *p2 = q2.front();
        q2.pop();
        
        if (p1 == NULL && p2 == NULL) continue;
        if (p1 == NULL || p2 == NULL) return false;
        
        if (p1->val != p2->val) return false;
        
        q1.push(p1->left);
        q2.push(p2->right);
        
        q1.push(p1->right);
        q2.push(p2->left);
        
    }
    
    return true;
    
}

