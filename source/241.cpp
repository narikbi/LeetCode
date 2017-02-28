//
//  241.cpp
//  LeetCode
//
//  Created by Narikbi on 01.03.17.
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

vector<int> diffWaysToCompute(string input) {
    
    vector<int> res;
    
    for (int i = 0; i < input.size(); i++) {
        char c = input[i];
        if (c == '-' || c == '+' || c == '*') {
            string part1 = input.substr(0, i);
            string part2 = input.substr(i+1);
            
            vector<int> part1Res = diffWaysToCompute(part1);
            vector<int> part2Res = diffWaysToCompute(part2);
            
            for (int x : part1Res) {
                for (int y : part2Res) {
                    int val = 0;
                    switch (c) {
                        case '+':
                            val = x + y;
                            break;
                        case '-':
                            val = x - y;
                            break;
                        case '*':
                            val = x * y;
                            break;
                            
                        default:
                            break;
                    }
                    res.push_back(val);
                }
            }
        }
    }
    
    if (res.size() == 0) {
        res.push_back(stoi(input));
    }
    
    return res;
}


//int main(int argc, const char * argv[]) {
//    
//    vector<int> v= diffWaysToCompute("2*3-4*5");
//    for (int x : v) {
//        cout << x << endl;
//    }
//    
//    return 0;
//}





