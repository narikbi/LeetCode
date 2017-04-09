//
//  88.cpp
//  LeetCode
//
//  Created by Narikbi on 10.04.17.
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

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    
    int ia = m-1;
    int ib = n-1;
    
    for (int i = m+n-1; i >= 0; i--) {
        if (ia >= 0 && ib < 0) {
            break;
        }
        
        if (ia < 0 && ib >= 0) {
            nums1[i] = nums2[ib--];
            continue;
        }
        
        if (ia >= 0 && ib >= 0) {
            if (nums1[ia] > nums2[ib]) {
                nums1[i] = nums1[ia--];
            } else {
                nums1[i] = nums2[ib--];
            }
        }
    }
    
}

