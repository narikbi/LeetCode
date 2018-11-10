class Solution {
public:
    
    map <string, multiset<string> > m;
    vector <string> route;
    
    void dfs(string airport) {
        
        while (m[airport].size()) {
            string next = *m[airport].begin();
            m[airport].erase(m[airport].begin());
            dfs(next);
        }
        route.push_back(airport);
    }
    
    vector<string> findItinerary(vector<pair<string, string>> tickets) {
        
        for (auto x : tickets) {
            m[x.first].insert(x.second);
        }
        
        dfs("JFK");
        
        vector<string> res = vector<string>(route.rbegin(), route.rend());
        return res;
    }
};