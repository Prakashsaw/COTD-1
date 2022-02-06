//Complexity O(NlogN)
class Solution {
public:
    int numRescueBoats(vector<int>& p, int lmt) {
        sort(p.begin(),p.end());
        int count=0,i=0,j=p.size()-1;
        while(i<=j)
        {
            int s=0;
            if(i==j)
            {
                count++;
                break;
            }
            else
            {
                s=p[i]+p[j];
                if(s<=lmt)
                {
                    count++;
                    i++;
                    j--;
                }
                else //s>lmt
                {
                    count++;
                    j--;
                }
            }
        }
        return count;
    }
};