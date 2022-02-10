class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int freq_chars[130]={0};
        int i,sum_length=0;
        for(i=0;i<chars.size();i++)
            freq_chars[chars[i]]++;
        for(i=0;i<words.size();i++)
        {
            string temp = words[i];
            int freq_str[130]={0};
            int j,k;
            for(j=0;j<temp.size();j++)
                freq_str[temp[j]]++;
            for(k=0;k<temp.size();k++)
            {
                if(freq_chars[temp[k]] >= freq_str[temp[k]])
                    continue;
                else
                    break;
            }
            if(k == temp.size()) 
                sum_length += temp.size();
        }
        return sum_length;
    }
};