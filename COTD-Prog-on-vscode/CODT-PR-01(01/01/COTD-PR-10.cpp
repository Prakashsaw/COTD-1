class Solution {
public:
    int countGoodSubstrings(string s) {
        unsigned int i,j,k,count=0;
        int t_str[3];
        if(s.size() < 3)
            return 0;
        for(i = 0; i < s.size()-3+1; i++) 
        {
            k = 0;
            for(j = i; j < 3+i; j++)
            {
                t_str[k++] = s[j];
            }
            if(t_str[0] != t_str[1] && t_str[1] != t_str[2] && t_str[2] != t_str[0])
                count++;
        }
        return count;
    }
};