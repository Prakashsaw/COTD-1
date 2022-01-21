class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int i, size = piles.size();
        int max = 1000000000;
        int s, ans, mid, min = 1;
        while(min<=max)
        {
            mid = min + (max - min) / 2;
            //cout << mid << "\n";
            s = 0;
            for(i = 0; i < size; i++)
            {
                s = s + ceil(1.0 * piles[i] / mid);
            }
            //cout << s << "\n";
            if(s <= h)
            {
                ans = mid;
                max = mid - 1;
            }
            else
                min = mid + 1;
        }
        return ans;
    }
};
//complexity is O(NlogN).