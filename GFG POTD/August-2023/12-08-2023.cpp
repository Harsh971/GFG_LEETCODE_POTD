class Solution
{
public:
    int longestSubsequence(int n, int a[])
    {
        vector<int> dp;
        
        dp.push_back(a[0]);
        for (int i = 1; i < n; ++i)
        {
            if (a[i] > dp.back())
                dp.push_back(a[i]);
            else
            {
                auto it = lower_bound(dp.begin(), dp.end(), a[i]) - dp.begin();
                dp[it] = a[i];
            }
        }

        return dp.size();
    }
};
