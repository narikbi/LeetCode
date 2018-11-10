class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
    
    unordered_map <int, vector <string> > m;
    
    for (int i = 0; i < list1.size(); i++) {
        for (int j = 0; j < list2.size(); j++) {
            if (list1[i] == list2[j]) {
                int sum = i + j;
                m[sum].push_back(list1[i]);
            }
        }
    }
        
    int minSum = INT_MAX;
    vector <string> res;
    for (auto it : m) {
        if (minSum > it.first) {
            minSum = it.first;
            res = it.second;
        }
    }
        
    return res;

}
};