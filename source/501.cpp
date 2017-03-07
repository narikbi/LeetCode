//
//  501.cpp
//  LeetCode
//
//  Created by Narikbi on 07.03.17.
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


map <int, int> m;
int mx = 0;

void rec(TreeNode *root) {
    
    if (root == NULL) return;
    
    m[root->val]++;
    
    mx = max(mx, m[root->val]);
    
    rec(root->left);
    rec(root->right);
    
}

vector<int> findMode(TreeNode* root) {
    
    rec(root);
    vector<int> res;
    for (auto it : m) {
        if (it.second == mx) {
            res.push_back(it.first);
        }
    }
    
    return res;
}


