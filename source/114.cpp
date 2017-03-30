//
//  114.cpp
//  LeetCode
//
//  Created by Narikbi on 31.03.17.
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



void flatten(TreeNode* root) {
    
    vector<TreeNode *> v, st;
    
    st.push_back(root);
    
    while (st.size()) {
        TreeNode *node = st.back();
        st.pop_back();
        
        v.push_back(node);
        
        if (node && node->right) {
            st.push_back(node->right);
        }
        if (node && node->left) {
            st.push_back(node->left);
        }
    }
    
    v.push_back(NULL);
    
    for (int i = 0; i < v.size(); i++) {
        if (v[i]) {
            v[i]->left = NULL;
            v[i]->right = v[i+1];
        }
    }
    
}


