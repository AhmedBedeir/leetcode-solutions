class RandomizedSet {
private:
    set<int> s;
public:
    RandomizedSet() {
    }

    bool insert(int val) {
        // need to check if val is already present in the set
        if (s.find(val) == s.end()) {
            s.insert(val);
            return true;
        }
        return false;
    }

    bool remove(int val) {
        if (s.find(val) != s.end()) {
            s.erase(val);
            return true;
        }
        return false;

    }

    int getRandom() {
        int r = rand() % s.size();
        auto it = s.begin();
        advance(it, r);
        return *it;

    }
};