//
//  103.cpp
//  LeetCode
//
//  Created by Narikbi on 05.04.17.
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

vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
    
    vector<vector<int>> res;
    if (root != NULL) {
        
        deque<TreeNode *> q;
        q.push_back(root);
        bool order = true;
        int size = 1;
        
        while (!q.empty()) {
            vector<int> v;
            
            for (int i = 0; i < size; i++) {
                TreeNode *top = q.front();
                q.pop_front();
                
                if (order) {
                    v.push_back(top->val);
                } else {
                    v.insert(v.begin(), top->val);
                }
                
                if (top->left) q.push_back(top->left);
                if (top->right) q.push_back(top->right);
            }
            size = q.size();
            res.push_back(v);
            order = !order;
        }
    }
    
    return res;
}

