//
//  95.cpp
//  LeetCode
//
//  Created by Narikbi on 11.04.17.
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

vector<TreeNode*> generateTrees(int low, int high) {
    vector<TreeNode *> v;
    
    if (low > high || low <= 0 || high <= 0) {
        v.push_back(NULL);
    }
    
    if (low == high) {
        TreeNode *node = new TreeNode(low);
        v.push_back(node);
        return v;
    }
    
    for (int i = low; i <= high; i++) {
        vector<TreeNode *> vleft = generateTrees(low, i-1);
        vector<TreeNode *> vright = generateTrees(i+1, high);
        
        for (int l=0; l < vleft.size(); l++) {
            for (int r = 0; r < vright.size(); r++) {
                TreeNode *root = new TreeNode(i);
                root->left = vleft[l];
                root->right= vright[r];
                v.push_back(root);
            }
        }
    }
    return v;
}


vector<TreeNode*> generateTrees(int n) {
    
    vector<TreeNode *> v;
    if (n == 0) return v;
    
    v = generateTrees(1, n);
    
    return v;
}


