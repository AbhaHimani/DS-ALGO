bool cmp(vector<int> &a, vector<int> &b)
{
    return a[1] > b[1];
}
class Solution
{
public:
    int maximumUnits(vector<vector<int>> &boxTypes, int truckSize)
    {

        vector<int> ratio;
        int s = boxTypes.size();
        int units = 0;
        sort(boxTypes.begin(), boxTypes.end(), cmp);
        int i = 1;
        for (int i = 0; i < boxTypes.size(); i++)
        {
            if (boxTypes[i][0] <= truckSize)
            {
                units += (boxTypes[i][0] * boxTypes[i][1]);
                truckSize -= boxTypes[i][0];
            }
            else
            {
                units += (truckSize * boxTypes[i][1]);
                truckSize = 0;
                break;
            }
        }
        return units;
    }
};