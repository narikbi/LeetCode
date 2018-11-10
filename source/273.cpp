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

static string belowTen[10] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
static string belowTwenty[11] = { "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
static string belowHundred[11] = {"", "Ten", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};


class Solution {
public:
    string numberToWords(int num) {
        if (num == 0) return "Zero";
        
        return int2word(num);
    }
    
    string int2word(int num) {
        
        string res = "";
        if (num < 10) {
            res = belowTen[num];
        } else if (num < 20) {
            res = belowTwenty[num % 10];
        } else if (num < 100) {
            res = belowHundred[num / 10] + " " +  int2word(num % 10);
        } else if (num < 1000) {
            res = int2word(num / 100) + " Hundred " + int2word(num % 100);
        } else if (num < 1000000) {
            res = int2word(num / 1000) + " Thousand " + int2word(num % 1000);
        } else if (num < 1000000000) {
            res = int2word(num / 1000000) + " Million " + int2word(num % 1000000);
        } else {
            res = int2word(num / 1000000000) + " Billion " + int2word(num % 1000000000);
        }
        
        if (res.back() == ' ') {
            res.erase(res.end()-1);
        }
        
        return res;
    }
};
