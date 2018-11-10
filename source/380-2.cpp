class RandomizedSet {
private:
    unordered_map <int, bool> m;
    
public:
    /** Initialize your data structure here. */
    RandomizedSet() {
        srand(time_t(0));
    }
    
    /** Inserts a value to the set. Returns true if the set did not already contain the specified element. */
    bool insert(int val) {
        
        if (m.find(val) != m.end()) {
            return false;
        }
        
        m[val] = true;
        
        return true;
    }
    
    /** Removes a value from the set. Returns true if the set contained the specified element. */
    bool remove(int val) {
        if (m.find(val) != m.end()) {
            m.erase(val);
            return true;
        }
        return false;
    }
    
    /** Get a random element from the set. */
    int getRandom() {
        
        auto it = m.begin();
        advance(it, rand() % m.size());
        return it->first;
    }
};