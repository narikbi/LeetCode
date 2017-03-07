//
//  35.cpp
//  LeetCode
//
//  Created by Narikbi on 08.03.17.
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


int searchInsert(vector<int>& nums, int target) {
    
    int low = 0, high = nums.size()-1;
    
    while (low <= high) {
        int mid = (low + high) / 2;
        if (nums[mid] == target) {
            return mid;
        } else if (nums[mid] > target) {
            high = mid-1;
        } else {
            low = mid+1;
        }
    }
    
    return low;
}

//int main(int argc, const char * argv[]) {
//    
//    vector<int> v= {1};//, 2, 5, 6};
//    cout << searchInsert(v, 5);
//    
//    
//    return 0;
//}


