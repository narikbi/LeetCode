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
private:
    unordered_map<char, TrieNode *> children;
    bool endOfWord = false;
    
public:
    TrieNode() {}
    
    TrieNode(char ch) {
        children[ch] = new TrieNode();
    }
    
    bool exists(char ch) {
        return children.find(ch) != children.end();
    }
    
    TrieNode* get(char ch) {
        return children[ch];
    }
    
    void addChild(char ch, TrieNode *node) {
        children[ch] = node;
    }
    
    bool isEndOfWord() {
        return endOfWord;
    }
    
    void setEndOfWord(bool end) {
        endOfWord = end;
    }
    
} root;

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
        
        TrieNode* current = root;
        for (char ch : word) {
            TrieNode* node;
            if (!current->exists(ch)) {
                node = new TrieNode();
                current->addChild(ch, node);
            } else {
                node = current->get(ch);
            }
            current = node;
        }
        current->setEndOfWord(true);
    }
    
    /** Returns if the word is in the trie. */
    bool search(string word) {
        return retrieve(word, true);
    }
    
    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix) {
        return retrieve(prefix, false);
    }
    
    bool retrieve(string word, bool isWord) {
        
        TrieNode * current = root;
        
        for (char ch : word) {
            if (!current->exists(ch)) {
                return false;
            } else {
                current = current->get(ch);
            }
        }
        
        return isWord ? current->isEndOfWord() : true;
    }
};