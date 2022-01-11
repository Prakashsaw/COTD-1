class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        //By brute force approach in complexity O(N);
        int size=letters.size();
        char ans;
        if( target >= letters[size-1] )
            ans = letters[0];
        else
        {
            for(int i=0; i<size; i++)
            {
                if(target == letters[i])
                    target = letters[i];
                if(target < letters[i])
                {
                    ans = letters[i];
                    break;
                }
            }
        }
        return ans;
    }
};

class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        //Second approach by binary search technique, Complexity O(lonN)
        int size=letters.size();
        char ans;
        int s=0;
        int e=size-1;
        int mid;
        if( target >= letters[size-1] )
            ans = letters[0];
        else
        {
            while(s<=e)
            {
                mid = e+(s-e)/2;
                if(letters[mid] <= target)
                    s = mid+1;
                else
                    e = mid-1;
            }
            ans = letters[s];
        }
        return ans;
    }
};