class Solution {
public:
    int strStr(string haystack, string needle) {
      if (needle == "")return 0;
    for (int i = 0; i < haystack.size(); i++)
    {
        string sub = haystack.substr(i, needle.size());
        if (sub == needle)
        {
            return i;
        }
    }
    return -1;
}};