//
//  481.cpp
//  LeetCode
//
//  Created by Narikbi on 19.02.17.
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

int magicalString(int n) {
    
    if (n <= 0) return 0;
    if (n <= 3) return 1;
    
    vector<int> a (n);
    a[0] = 1;
    a[1] = 2;
    a[2] = 2;
    
    int count = 1;
    int head = 2;
    int tail = 3;
    int num = 1;
    
    while (tail < n) {
        for (int i = 0; i < a[head]; i++) {
            a[tail] = num;
            if (a[tail] == 1 && tail < n) count++;
            tail++;
        }
        
        num ^= 3;
        head++;
        
//        cout << num << endl;
    }
    
    return count;
}

//int main(int argc, const char * argv[]) {
//    
//    cout << magicalString(100) << endl;
//    
//    return 0;
//}


