class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
    map<char, char> mp;
    mp['}'] = '{';
    mp[')'] = '(';
    mp[']'] = '[';
    for (int i = 0; i < s.size(); i++)
    {
        if (mp[s[i]])
        {
            if (!st.empty() and st.top() == mp[s[i]])
                st.pop();
            else
                return false;
        } else
            st.push(s[i]);
    }
    if(st.empty())    
        return true;
    return false;
    }
};