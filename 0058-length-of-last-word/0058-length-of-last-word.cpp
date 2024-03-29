class Solution {
public:
    int lengthOfLastWord(string s) {
        int end = s.size()-1;
        int ans = 0;
        while (end >= 0 && s[end] == ' ' )
        {
            end--;
        }
        while ( end >= 0 && s[end] != ' ' )
        {
            ans++;
            end--;
        }
        return ans;
    }
};