//
//  508.cpp
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

int sum(TreeNode *root, map <int, int> &m, int &maxCount) {
    
    if (root == NULL) return 0;
    
    int s = root->val;
    s += sum(root->left, m, maxCount);
    s += sum(root->right, m, maxCount);
    m[s]++;
    maxCount = max(m[s], maxCount);
    
    return s;
}


vector<int> findFrequentTreeSum(TreeNode* root) {
    
    int maxCount = 0;
    map <int, int> m;
    sum(root, m, maxCount);
    
    vector<int> res;
    for (const auto& x : m) {
        if (x.second == maxCount) {
            res.push_back(x.first);
        }
    }
    
    return res;
}




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
//    vector<int> v = findFrequentTreeSum(n1);
//    
//    for (int i = 0; i < v.size(); i++) {
//        cout << v[i] << " ";
//    }
//    
//    return 0;
//}

