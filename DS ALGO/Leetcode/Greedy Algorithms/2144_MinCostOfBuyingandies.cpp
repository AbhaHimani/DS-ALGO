class Solution
{
public:
    int minimumCost(vector<int> &cost)
    {

        sort(cost.begin(), cost.end());
        int n = cost.size();

        int total = 0;
        if (n % 3 == 0)
        {
            for (int i = n - 1; i >= 0; i = i - 3)
            {
                total += cost[i] + cost[i - 1];
            }
        }
        if (n % 3 == 1)
        {
            for (int i = n - 1; i >= 1; i = i - 3)
            {
                total += cost[i] + cost[i - 1];
            }
            total = total + cost[0];
        }
        if (n % 3 == 2)
        {
            for (int i = n - 1; i >= 2; i = i - 3)
            {
                total += cost[i] + cost[i - 1];
            }
            total = total + cost[0] + cost[1];
        }
        return total;
    }
};