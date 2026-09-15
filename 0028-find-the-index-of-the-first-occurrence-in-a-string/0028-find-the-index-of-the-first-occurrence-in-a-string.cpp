class Solution {
public:
    int strStr(string haystack, string needle) {
        const char* h = haystack.c_str();
        const char* pos = strstr(h, needle.c_str());
        return pos ? (int)(pos - h) : -1;
    }
};