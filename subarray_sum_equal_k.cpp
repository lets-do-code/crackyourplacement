class Solution
{
public:
    int subarraySum(vector<int> &nums, int k)
    {
        unordered_map<int, int> mp;

        int sum = 0;
        int ans = 0;
        mp[sum] = 1;

        for (int i = 0; i < nums.size(); i++)
        {
            sum += nums[i];
            int remSum = sum - k;

            if (mp.find(remSum) != mp.end())
            {
                ans += mp[remSum];
            }

            mp[sum]++;
        }

        return ans;
    }
};