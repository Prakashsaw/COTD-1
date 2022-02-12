//Q.242. Valid Anagram
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size())
            return false;
        int hash1[130] = {0}, hash2[130] = {0};
        int i;
        for(i=0;i<s.size();i++)
        {
            hash1[s[i]]++;
            hash2[t[i]]++;
        }
        for(i=0;i<s.size();i++)
        {
            if(hash1[s[i]] == hash2[s[i]])
                continue;
            else
                return false;
        }
        return true;
    }
};
