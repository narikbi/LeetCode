//
//  437.cpp
//  LeetCode
//
//  Created by Narikbi on 10.03.17.
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


int rec(TreeNode* root, int sum) {
    int res = 0;
    
    if (root == NULL) return res;
    
    if (sum == root->val) {
        res++;
    }
    
    res += rec(root->left, sum - root->val);
    res += rec(root->right, sum - root->val);
    
    return res;
}

int pathSum(TreeNode* root, int sum) {
    if (root == NULL) return 0;
    
    return rec(root, sum) + pathSum(root->left, sum) + pathSum(root->right, sum);
}


