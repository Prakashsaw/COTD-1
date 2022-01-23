class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x = 0, i, size = operations.size();
        for(i = 0;i < size; i++)
        {
            if(operations[i] == "++X" || operations[i] == "X++")
                x++;
            else //operations[i] == --X" || operations[i] == "X--"
                x--;
        }
        return x;
    }
};
