class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int n1,n2;
        n1 = s.size(), n2 = t.size();
        if(n1 != n2)
            return false;
        int i;
        int h1[256]={0}, h2[256]={0};
        for(i=0;i<n1;i++)
        {
            if(!h1[s[i]] && !h2[t[i]])
            {
                h1[s[i]]=t[i];
                h2[t[i]]=s[i];
            }
            else if(h1[s[i]] != t[i])
                return false;
        }
        return true;
    }
};