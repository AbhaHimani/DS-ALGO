class Solution
{
public:
    int minCostToMoveChips(vector<int> &position)
    {
        int n = position.size();
        int even = 0;
        int odd = 0;
        for (int i = 0; i < n; i++)
        { // value of array name
            if (position[i] % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        int f = min(odd, even);
        return f;
    }
};