class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        if(ransomNote.size()>magazine.size()) return false;
        int ct[26]={0};
        for(char c:magazine) ct[c-'a']++;
        for(char c:ransomNote) 
            if(--ct[c-'a']<0) 
                return false;
        return true; 
    }
};