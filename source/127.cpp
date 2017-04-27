//
//  127.cpp
//  LeetCode
//
//  Created by Narikbi on 28.04.17.
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

int ladderLength(string start, string end, vector<string> &dic) {
    
    map <string , int> dis;
    dis[start] = 1;
    
    queue <string> q;
    q.push(start);
    
    unordered_set<string> dict;
    for (string x : dic) {
        dict.insert(x);
    }
    
    while (!q.empty()) {
        
        string word = q.front();
        q.pop();
        
        if (word == end) break;
        
        for (int i = 0; i < word.size(); i++) {
            string temp = word;
            for (char c = 'a'; c <= 'z'; c++) {
                temp[i] = c;
                if (dict.count(temp) > 0 && dis.count(temp) == 0) {
                    dis[temp] = dis[word] + 1;
                    q.push(temp);
                }
            }
        }
        
    }
    
    return dis.count(end) == 0 ? 0 : dis[end];
}

