//
//  382.cpp
//  LeetCode
//
//  Created by Narikbi on 18.02.17.
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

using namespace std;

struct ListNode {
public:
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
private:
    ListNode *head;
    
public:
    Solution(ListNode* head) {
        this->head = head;
    }
    
    int getRandom() {
        ListNode *node = head->next;
        int i = 2;
        int ans = head->val;
        while (node != NULL) {
            int val = rand() % i;
            
            if (val == 0) {
                ans = node->val;
            }
            
            i++;
            node = node->next;
        }
        
        return ans;
    }
};

//int main(int argc, const char * argv[]) {
//    
//    ListNode *node = new ListNode(4);
//    Solution *obj = new Solution(node);
//    int param_1 = obj->getRandom();
//    cout << param_1 << endl;
//    
//    return 0;
//}
