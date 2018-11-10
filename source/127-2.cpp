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


unordered_map<string, int> m;
unordered_set<string> v;
unordered_map <string, unordered_set <string> > ways;
string beginWord;

int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
    
    for (string s : wordList) {
        v.insert(s);
    }
    
    m[beginWord] = 1;
    
    queue<string> q;
    q.push(beginWord);
    while (!q.empty()) {
        
        string x = q.front();
        q.pop();
        
        if (x == endWord) {
            return m[x];
        }
        
        for (int i = 0; i < x.size(); i++) {
            for (char c = 'a'; c <= 'z'; c++) {
                string temp = x;
                temp[i] = c;

                if (v.count(temp) > 0 && m[temp] == 0) {
                    m[temp] = m[x] + 1;
                    q.push(temp);
                }
            }
        }
        
    }
    
    return 0;
}


// almost brute for BFS :D - accepted
//
//bool oneDiff(string s1, string s2) {
//    int count = 0;
//    if (s1.length() != s2.length()) return false;
//
//    for (int i = 0; i < s1.size(); i++) {
//        if (s1[i] != s2[i]) count++;
//    }
//
//    return count == 1;
//}
//
//int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
//
//    queue< pair<string, int> > q;
//    q.push(make_pair(beginWord, 0));
//
//    vector<bool> used (wordList.size(), false);
//
//    int ans = 0;
//
//    while (!q.empty()) {
//        pair<string, int> t = q.front();
//        q.pop();
//
//        string w = t.first;
//
//        if (w == endWord) {
//            ans = min(ans, t.second);
//        }
//
//        for (int i = 0; i < wordList.size(); i++) {
//            string s = wordList[i];
//
//            if (!used[i] && oneDiff(w, s)) {
//                q.push(make_pair(s, t.second + 1));
//                used[i] = true;
//            }
//        }
//    }
//
//    return 0;
//}
