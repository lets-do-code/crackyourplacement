class Solution
{
public:
    int subarraysDivByK(vector<int> &nums, int k)
    {

        int cnt = 0;

        unordered_map<int, int> map;

        int sum = 0;
        map[0]++;

        for (auto s : nums)
        {
            sum += s;
            if (map[(sum % k + k) % k] > 0)
            {
                cnt += map[(sum % k + k) % k];
            }
            map[(sum % k + k) % k]++;
        }
        return cnt;
    }
};