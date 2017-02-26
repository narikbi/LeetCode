//
//  318.cpp
//  LeetCode
//
//  Created by Narikbi on 27.02.17.
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

bool isShareLetters(string a, string b) {
    
    map <char, int> m;
    for (char c : a) {
        m[c]++;
    }
    for (char c : b) {
        if (m[c] > 0) return true;
    }
    
    return false;
}

int maxProduct(vector<string>& words) {
    
    vector<int> checker (words.size());
    for (int i = 0; i < checker.size(); i++) {
        int num = 0;
        for (int j = 0; j < words[i].length(); j++) {
            num |= 1 << (words[i][j] - 'a');
        }
        checker[i] = num;
    }
    
    
    int mx = 0;
    for (int i = 0; i < words.size(); i++) {
        for (int j = i+1; j < words.size(); j++) {
            if ((checker[i] & checker[j]) == 0) {
                int len = words[i].length() * words[j].length();
                mx = max(mx, len);
            }
        }
    }
    return mx;
    
}

//int main(int argc, const char * argv[]) {
//    
//    vector<string> v= {"abcw", "baz", "foo", "bar", "xtfn", "abcdef"};
//    
//    cout << maxProduct(v) << endl;
//
//    return 0;
//}
