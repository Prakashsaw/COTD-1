class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        if(name.size() > typed.size())
            return false;
        int i=0,j=0;
        while(i<name.size() && j<typed.size())
        {
            if(name[i] == typed[j])
            {
                i++;
                j++;
            }
            else if(i>0 && name[i-1] == typed[j])
                j++;
            else
                return false;
        }
        while(j<typed.size())
        {
            if(name[i-1] != typed[j])
                return false;
            j++;
        }
        return i<name.size()?false:true;
    }
};