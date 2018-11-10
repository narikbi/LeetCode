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

class NumArray {
private:
    vector <int> b;
    int len = 0;
    vector <int> a;
    
public:
    NumArray(vector<int> nums) {
        this->a = nums;
        int l = (int)sqrt(nums.size());
        
        if (nums.size() == 0) l = 1;
        
        len = ceil(nums.size() / l);
        
//        if (len == 0) len = 1;
//        b = vector<int> (len, 0);
        
        b.resize(len, 0);
        
        for (int i = 0; i < nums.size(); i++) {
            b[i / len] += nums[i];
        }
    }
    
    void update(int i, int val) {
        int bl = i / len;
        b[bl] = b[bl] - a[i] + val;
        a[i] = val;
    }
    
    int sumRange(int i, int j) {
        
        int sum = 0;
        int startBlock = i / len;
        int endBlock = j / len;
        
        if (startBlock == endBlock) {
            for (int k = i; k <= j; k++)
                sum += a[k];
        } else {
            
            for (int k = i; k <= (startBlock + 1) * len - 1; k++)
                sum += a[k];
            
            for (int k = startBlock+1; k <= endBlock - 1; k++)
                sum += b[k];
            
            for (int k = endBlock * len; k <= j; k++)
                sum += a[k];
            
        }
        
        return sum;
    }
};