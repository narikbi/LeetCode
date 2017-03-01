//
//  108.cpp
//  LeetCode
//
//  Created by Narikbi on 02.03.17.
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

TreeNode *helper(vector<int> &nums, int low, int high) {
    
    if (low > high) {
        return NULL;
    }
    
    int mid = (low + high) / 2;
    TreeNode *node = new TreeNode(nums[mid]);
    
    node->left = helper(nums, low, mid-1);
    node->right = helper(nums, mid+1, high);
    
    return node;
}

TreeNode* sortedArrayToBST(vector<int>& nums) {
    
    if (nums.size() == 0) return NULL;
    
    TreeNode *head = helper(nums, 0, nums.size()-1);
    
    return head;
    
}


