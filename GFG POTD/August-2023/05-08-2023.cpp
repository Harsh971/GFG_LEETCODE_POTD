class Solution {
public:
    long long findMinDiff(vector<long long> a, long long n, long long m) {
        sort(a.begin(), a.end());
        long long minDiff = a[m - 1] - a[0];
        for (int i = 1; i <= n - m; ++i) {
            minDiff = min(minDiff, a[m + i - 1] - a[i]);
        }
        return minDiff;
    }   
};
