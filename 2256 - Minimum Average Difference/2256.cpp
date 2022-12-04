class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        int n = nums.size();
        vector<long long> preSum(n+1, 0);
        for (int i = 1; i <= n; i++)
            preSum[i] = preSum[i-1] + nums[i-1];
        long long minAvgDiff = preSum[n];
        int ansIdx=0;
        for (int i = 0; i < n; i++) {
            long long avg1 = preSum[i+1]/(i+1);
            long long avg2 = (n-i-1) ? (preSum[n]-preSum[i+1])/(n-i-1) : 0;
            long long avgDiff = abs(avg1 - avg2);
            if (minAvgDiff > avgDiff) {
                minAvgDiff = avgDiff;
                ansIdx = i;
            }
        }
        return ansIdx;
    }
};