class Solution {
public:
    int strStr(string haystack, string needle) {
    int lenNeed = needle.size();
    int lenSt = haystack.size();
    if (lenNeed > lenSt)
        return -1;
    for (int i = 0; i < lenSt; i++)
    {
        string check = haystack.substr(i, lenNeed);
        if (check == needle)
            return i;
    }
    return -1;
}
};