class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.size() != t.size())
        return false;
    map<char, char> st;
    map<char, char> ts;
    for (int i = 0; i < s.size(); i++)
    {
        if ((st.count(s[i]) && st[s[i]] != t[i]) || ts.count(t[i]) && ts[t[i]] != s[i])
            return false;
        st[s[i]] = t[i];
        ts[t[i]] = s[i];
    }
    return true;
    }
};