//
//  230.cpp
//  LeetCode
//
//  Created by Narikbi on 28.02.17.
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

int number = 0;
int cnt = 0;

void rec(TreeNode* root) {
    if (root->left) rec(root->left);
    cnt--;
    
    if (cnt == 0) {
        number = root->val;
    }
    if (root->right) rec(root->right);
}

int kthSmallest(TreeNode* root, int k) {
    cnt = k;
    rec(root);
    return number;
}


