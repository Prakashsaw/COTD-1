class Solution {
public:
    int canBeTypedWords(string text, string bltr) {
        int hash[150] = {0};
        int i;
        for(i = 0; i < bltr.size(); i++)
            hash[bltr[i]] = 1;
        
        int num = 0, count = 0;
        for(i = 0; i <= text.size(); i++)
        {
            if(text[i] == ' ' || i == text.size())
            {
                if(count == 0)
                    num++;
                count = 0;
            }  
            else if(hash[text[i]] != 0)
                count = 1;
        }
        return num;
    }    
};