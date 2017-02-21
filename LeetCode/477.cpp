//
//  477.cpp
//  LeetCode
//
//  Created by Narikbi on 22.02.17.
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

int hamming(int x, int y) {
    
    int res = x ^ y;
    int count = 0;
    while (res > 0) {
        count += res & 1;
        res >>= 1;
    }
    
    return count;
}

// brute force
/*
 int totalHammingDistance(vector<int>& nums) {
 
 int total = 0;
 for (int i = 0; i < nums.size(); i++) {
 for (int j = i+1; j < nums.size(); j++) {
 total += hamming(nums[i], nums[j]);
 }
 }
 return total;
 }*/

int totalHammingDistance(vector<int>& nums) {
    
    int total = 0;
    for (int j = 0; j < 32; j++) {
        int bitCount = 0;
        for (int i = 0; i < nums.size(); i++) {
            bitCount += (nums[i] >> j) & 1;
        }
        total += bitCount * (nums.size() - bitCount);
    }
    
    return total;
}


//int main(int argc, const char * argv[]) {
//    
//    vector<int> v = {4, 14, 2};
//    
//    cout << totalHammingDistance(v);
//    
//    return 0;
//}

