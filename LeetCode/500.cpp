//
//  500.cpp
//  LeetCode
//
//  Created by Narikbi on 15.02.17.
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

using namespace std;


vector<string> findWords(vector<string>& words) {
    
    string row1 = "qwertyuiopQWERTYUIOP";
    string row2 = "asdfghjklASDFGHJKL";
    string row3 = "zxcvbnmZXCVBNM";
    
    vector<string> res;
    for (int i = 0; i < words.size(); i++) {
        string s = words[i];
        bool ok1 = true;
        bool ok2 = true;
        bool ok3 = true;
        
        for (int j = 0; j < s.size(); j++) {
            if (row1.find(s[j]) == string::npos) {
                ok1 = false;
            }
            if (row2.find(s[j]) == string::npos) {
                ok2 = false;
            }
            if (row3.find(s[j]) == string::npos) {
                ok3 = false;
            }
        }
        
        if (ok1 || ok2 || ok3) {
            res.push_back(s);
        }
    }
    
    return res;
}

//int main(int argc, const char * argv[]) {
//
//    vector<string> v= {"Hello", "Alaska", "Dad", "Peace"};
//    vector<string> res = findWords(v);
//    
//    for(int i = 0; i < res.size(); i++) {
//        cout << res[i] << endl;
//    }
//
//    return 0;
//}
