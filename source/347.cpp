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
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        map < int, int > m;
        vector < vector<int> > v (nums.size()+1, vector<int>());
        
        for (int x : nums) {
            m[x]++;
        }
        
        for (auto it : m) {
            v[it.second].push_back(it.first);
        }
        
        vector <int> res;
        int pos = nums.size();
        while (k && pos >= 0) {
            
            if (v[pos].size() > 0) {
                for (int x : v[pos]) {
                    if (!k) break;
                    k--;
                    res.push_back(x);
                }
            }
            pos--;
        }
        
        for (int x : res) {
            cout << x << " ";
        }
        
        return res;
    }
};