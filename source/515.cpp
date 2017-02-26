//
//  515.cpp
//  LeetCode
//
//  Created by Narikbi on 17.02.17.
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

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};


vector<int> largestValues(TreeNode* root) {
    
    if (root == NULL) {
        return {};
    }
    
    deque <TreeNode *> queue;
    vector <int> res;
    
    queue.push_back(root);
    
    while (!queue.empty()) {
        int mx = INT_MIN;
        
        deque <TreeNode *> newRow;
        
        for (int i = 0; i < queue.size(); i++) {
            TreeNode *node = queue[i];
            mx = max(node->val, mx);
            
            if (node->left) {
                newRow.push_back(node->left);
            }
            if (node->right) {
                newRow.push_back(node->right);
            }
        }
        res.push_back(mx);
        queue = newRow;
    }
    
    return res;
}


//
//int main(int argc, const char * argv[]) {
//    
//    TreeNode *n1 = new TreeNode(1);
//    TreeNode *n2 = new TreeNode(2);
//    TreeNode *n3 = new TreeNode(3);
//    
//    TreeNode *n4 = new TreeNode(5);
//    TreeNode *n5 = new TreeNode(3);
//    TreeNode *n6 = new TreeNode(9);
//    
//    n1->left = n2;
//    n1->right = n3;
//    
//    n2->left = n4;
//    n2->right = n5;
//    
//    n3->right = n6;
//    
//    vector<int> v = largestValues(n1);
//    
//    for (int i = 0; i < v.size(); i++) {
//        cout << v[i] << " ";
//    }
//    
//    return 0;
//}
//




