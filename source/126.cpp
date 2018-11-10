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

class Solution {
private:
    vector <vector <string> > paths;
    unordered_map<string, int> m;
    unordered_set<string> v;
    unordered_map <string, unordered_set <string> > ways;
    string beginWord;
    
public:
    
    void getPath(string s, vector <string> path) {
        path.push_back(s);
        if (s == beginWord) {
            paths.push_back(path);
            return;
        }
        for (auto word : ways[s]) {
            getPath(word, path);
        }
        path.pop_back();
    }
    
    vector<vector<string>> findLadders(string beginWord, string endWord, vector<string>& wordList) {
        
        this->beginWord = beginWord;
        
        for (string s : wordList) {
            v.insert(s);
        }
        
        m[beginWord] = 0;
        
        queue<string> q;
        q.push(beginWord);
        while (!q.empty()) {
            
            string x = q.front();
            q.pop();
            
            if (x == endWord) {
                getPath(x, {});
                break;
            }
            
            for (int i = 0; i < x.size(); i++) {
                string temp = x;
                for (char c = 'a'; c <= 'z'; c++) {
                    temp[i] = c;
                    
                    if (v.count(temp) > 0 && (m.count(temp) == 0 || m[temp] >= m[x] + 1)) {
                        m[temp] = m[x] + 1;
                        q.push(temp);
                        ways[temp].insert(x);
                    }
                }
            }
        }
        
        for (int i = 0; i < paths.size(); i++) {
            reverse(paths[i].begin(), paths[i].end());
        }
        
        return paths;
    }
};