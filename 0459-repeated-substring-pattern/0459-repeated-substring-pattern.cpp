class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n = s.size();
    vector<int> v (n, 0);
    int i = 1;
    int j = 0;
    while (i < n)
    {
        if (s[i] == s[j])
        {
            j++;
            v[i]= j;
            i++;
        }
        else if (j > 0)
            j = v[j - 1];
        else
        {
            v[i] = 0;
            i++;
        }
    }
    int k = v.size();
    return v[k - 1] > 0 && n % (n - v[k - 1]) == 0 ? true : false;
    }
};