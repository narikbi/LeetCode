//
//  222.cpp
//  LeetCode
//
//  Created by Narikbi on 19.04.17.
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
#include <unordered_set>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

int countHelper(TreeNode *root) {
    
    if (!root) return 0;
    
    TreeNode *left = root;
    TreeNode *right = root;
    
    int cnt = 1;
    
    for (; left && right; left = left->left, right = right->right) {
        cnt *= 2;
    }
    
    if (left || right) {
        return -1;
    }
    
    return cnt-1;
}


int countNodes(TreeNode* root) {
    
    if (!root) return 0;
    
    int cnt = countHelper(root);
    if (cnt != -1) return cnt;
    
    int left = countNodes(root->left);
    int right = countNodes(root->right);
    
    return left + right + 1;
}

