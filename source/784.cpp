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


//class Solution {
//private:
//    vector <string> v;
//    
//public:
//    
//    vector<string> letterCasePermutation(string S) {
//
//        int count = 0;
//        for (char ch : S) {
//            if (isalpha(ch)) count++;
//        }
//        
//        for (int bits = 0; bits < (1 << count); bits++) {
//            int ind = 0;
//            
//            string word = "";
//            for (char ch : S) {
//                if (isalpha(ch)) {
//                    if (((bits >> ind) & 1) == 1) {
//                        word += tolower(ch);
//                    } else {
//                        word += toupper(ch);
//                    }
//                    ind++;
//                } else {
//                    word += ch;
//                }
//                
//                v.push_back(word);
//            }
//        }
//        
//        return v;
//    }
//};


class Solution {
private:
    vector <string> v;
    
public:
    
    bool isLower(char c) {
        return 'a' <= c && c <= 'z';
    }

    bool isUpper(char c) {
        return 'A' <= c && c <= 'Z';
    }
    
    char reverseChar(char c) {
        if (isLower(c)) {
            return toupper(c);
        }
        if (isUpper(c)) {
            return tolower(c);
        }
        
        return c;
    }

    void rec(string s, int i) {
        
        v.push_back(s);

        if (i >= s.size()) return;
        
        for (int k = i; k < s.size(); k++) {
            if (isalpha(s[k])) {
                s[k] = reverseChar(s[k]);
                rec(s, k+1);
                s[k] = reverseChar(s[k]);
            }
        }
        
    }
    
    vector<string> letterCasePermutation(string S) {
        
        rec(S, 0);
        
        vector<string> res (v.begin(), v.end());
        return res;
    }
};