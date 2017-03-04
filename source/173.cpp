//
//  173.cpp
//  LeetCode
//
//  Created by Narikbi on 05.03.17.
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


class BSTIterator {
public:
    vector<int> v;
    int pos = 0;
    
    BSTIterator(TreeNode *root) {
        
        vector<TreeNode *> stack;
        while (stack.size() > 0 || root != NULL) {
            
            if (root) {
                stack.push_back(root);
                root = root->left;
            } else {
                
                root = stack.back();
                stack.pop_back();
                v.push_back(root->val);
                root = root->right;
            }
        }
    }
    
    /** @return whether we have a next smallest number */
    bool hasNext() {
        return pos < v.size();
    }
    
    /** @return the next smallest number */
    int next() {
        return v[pos++];
    }
};






