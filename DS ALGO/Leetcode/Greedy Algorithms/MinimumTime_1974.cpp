class Solution
{
public:
    int minTimeToType(string word)
    {
        // abc
        int ans = word.length();
        int count = 0;
        int l = 26;
        ans = ans + min((26 - abs('a' - word[0])), abs('a' - word[0]));
        char curr = word[0];
        for (int i = 1; i < word.length(); i++)
        {
            int m = min(abs(l - abs(curr - word[i])), abs(curr - word[i]));
            ans = ans + m;
            curr = word[i];
        }
        return ans;
    }
};