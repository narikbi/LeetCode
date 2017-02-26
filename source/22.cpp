//
//  22.cpp
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

string insertParent(string s, int t) {
    string left = s.substr(0, t+1);
    string right = s.substr(t+1);
    return left + "()" + right;
}

vector<string> generateParenthesis(int n) {
    
    set <string> res;
    
    if (n == 0) {
        res.insert("");
    } else {
        
        vector<string> prev = generateParenthesis(n-1);
        for (int i = 0; i < prev.size(); i++) {
            string str = prev[i];
            for (int j = 0; j < str.size(); j++) {
                if (str[j] == '(') {
                    string var = insertParent(str, j);
                    //                    if (find(res.begin(),res.end(), var) == res.end()) {
                    res.insert(var);
                    //                    }
                }
            }
            
            string var = str + "()";
            //            if (find(res.begin(),res.end(), var) == res.end()) {
            res.insert(var);
            //            }
        }
    }
    
    vector<string> v(res.begin(), res.end());
    
    return v;
}

//int main(int argc, const char * argv[]) {
//    
//    vector<string> s= generateParenthesis(3);
//    for (string x : s) {
//        cout << x << endl;
//    }
//    
//    return 0;
//}


