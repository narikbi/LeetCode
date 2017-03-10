//
//  107.cpp
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


vector<vector<int>> ans;

void rec(TreeNode *node, int level) {
    
    if (node == NULL) return;
    
    if (ans.size() == level) {
        ans.push_back({});
    }
    
    ans[level].push_back(node->val);
    rec(node->left, level+1);
    rec(node->right, level+1);
    
}

vector<vector<int>> levelOrderBottom(TreeNode* root) {
    
    rec(root, 0);
    reverse(ans.rbegin(), ans.rend());
    
    return ans;
}
