class Solution {
public:
    bool isPalindrome(string s) {
        int size = s.size();
        int i,j = 0;
        char str[size + 1];
        for(i = 0; s[i] != '\0'; i++)
        {
            if(s[i] >= 65 && s[i] <= 90)
                s[i] = s[i] + 32;
            if((s[i] >= 97 && s[i] <= 122) || (s[i] >= 48 && s[i] <= 57))
                str[j++] = s[i];
            
        }
        str[j]='\0';
        int length = 0;
        for(i = 0; str[i] != '\0'; i++)
            length++;
        if(length == 0)
            return true;
        int start = 0, end = length - 1;
        for(i = 0; i <= length / 2; i++)
        {
            if(str[start] == str[end])
            {
                start++;
                end--;
            }
            else
                return false;
        }
        return true;
    }
};