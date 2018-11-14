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


struct Pointt {
    int x;
    int y;
    
    bool operator < (Pointt p) {
        return x < p.x || (x == p.x && y < p.y);
    }
    
    bool operator == (Pointt p) {
        return x == p.x && y == p.y;
    }
    
    double dist(Pointt p) {
        return (p.y - y) * (p.y - y) + (p.x - x) * (p.x - x);
    }
    
};

class Solution {
public:
    bool validSquare(vector<int>& v1, vector<int>& v2, vector<int>& v3, vector<int>& v4) {
        
        Pointt p1 = {
            v1[0],
            v1[1],
        };
        
        Pointt p2 = {
            v2[0],
            v2[1],
        };
        
        Pointt p3 = {
            v3[0],
            v3[1],
        };
        
        Pointt p4 = {
            v4[0],
            v4[1],
        };
        
        
        vector<double> lengths;
        lengths.push_back(p1.dist(p2));
        lengths.push_back(p2.dist(p3));
        lengths.push_back(p3.dist(p4));
        lengths.push_back(p4.dist(p1));
        lengths.push_back(p2.dist(p4));
        lengths.push_back(p1.dist(p3));
        
        double diagonal = INT_MIN;
        double side = INT_MIN;
        
        for (int len : lengths) {
            
            if (diagonal < len) {
                diagonal = len;
            } else {
                side = len;
            }
        }
        
        
        int diagonalCount = 0;
        double sideLen = 0;
        for (int len : lengths) {
            if (diagonal == len) {
                diagonalCount++;
            } else {
                sideLen = len;
            }
        }
        
        if (diagonalCount != 2) return false;
        
        for (int len : lengths) {
            if (diagonal != len && len != sideLen) return false;
        }
        return true;
    }
};