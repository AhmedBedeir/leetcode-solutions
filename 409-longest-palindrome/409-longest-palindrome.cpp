class Solution {
public:
    int longestPalindrome(string s) {
        bool take1 = false;
    int freq[300] = {0};
    int ans = 0;
    for (int i = 0; i < s.size(); i++)
        freq[s[i]]++;
    for (int i = 0; i < s.size(); i++)
    {
        if (freq[s[i]] == 1 && !take1)
        {
            ans++;
            take1 = true;
            freq[s[i]] = 0;
        }
        else {
            if (freq[s[i]] % 2 == 0) {
                ans += freq[s[i]];
                freq[s[i]] = 0;
            } else {
                ans += freq[s[i]] - 1;
                freq[s[i]] = 1;
            }
        }
    }
    return ans;
    }
};