//
//  383.cpp
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

bool canConstruct(string ransomNote, string magazine) {
    
    map <char, int> m;
    for (char c : magazine) m[c]++;
    
    for (int i = 0; i < ransomNote.size(); i++) {
        if (m.count(ransomNote[i]) && m[ransomNote[i]] > 0) {
            m[ransomNote[i]]--;
        } else {
            return false;
        }
    }
    
    return true;
}

//int main(int argc, const char * argv[]) {
//    
//    cout << canConstruct("aa", "ab");
//    
//    return 0;
//}

