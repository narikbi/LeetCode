//
//  388.cpp
//  LeetCode
//
//  Created by Narikbi on 22.03.17.
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

using namespace std;

int lengthLongestPath(string input) {
    
    stringstream ss(input);
    string line;
    int result = 0;
    
    vector<int> lengths;
    lengths.push_back(0);
    
    while (getline(ss, line, '\n')) {
        
        int level = 0;
        while (line[level++] == '\t');
        int len = line.size() - level + 1;
        
        if (line.find('.') != string::npos) {
            if (lengths[level-1] + len > result) {
                result = lengths[level-1] + len;
            }
        } else {
            if (lengths.size() <= level) {
                lengths.push_back(0);
            }
            
            lengths[level] = lengths[level-1] + len + 1;
        }
    }
    
    return result;
    
}

//int main(int argc, const char * argv[]) {
//    
//    cout << lengthLongestPath("dir\n\tsubdir1\n\tsubdir2\n\t\tfile.ext");
//    
//    return 0;
//}



