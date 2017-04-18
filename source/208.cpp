//
//  208.cpp
//  LeetCode
//
//  Created by Narikbi on 19.04.17.
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

class TrieNode {
public:
    TrieNode():isWord(false) {}
    unordered_map<char, TrieNode *> children;
    bool isWord;
};

class Trie {
private:
    TrieNode *root;
public:
    /** Initialize your data structure here. */
    Trie() {
        root = new TrieNode();
    }
    
    /** Inserts a word into the trie. */
    void insert(string word) {
        if (word.size() <= 0) return;
        
        TrieNode *node = root;
        for (int i = 0; i < word.size(); i++) {
            if (node->children.find(word[i]) == node->children.end()) {
                node->children[word[i]] = new TrieNode();
            }
            node = node->children[word[i]];
        }
        node->isWord = true;
    }
    
    /** Returns if the word is in the trie. */
    bool search(string word) {
        return retrieve(word, true);
    }
    
    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix) {
        return retrieve(prefix, false);
    }
    
    bool retrieve(const string &key, bool isWord) {
        if (key.size() <= 0) {
            return false;
        }
        
        TrieNode *node = root;
        for (int i = 0; i < key.size(); i++) {
            if (node->children.find(key[i]) == node->children.end()) {
                return false;
            }
            
            node = node->children[key[i]];
        }
        
        return isWord ? node->isWord : true;
    }
};



