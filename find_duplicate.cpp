class Solution
{
public:
    int findDuplicate(vector<int> &nums)
    {
        int ans = 0;
        for (int i = 0; i < nums.size() - 1; i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (nums[i] == nums[j])
                {
                    ans = nums[i];
                }
            }
        }
        return ans;
    }
};

class Solution
{
public:
    int findDuplicate(vector<int> &nums)
    {
        int ans = 0;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size() - 1; i++)
        {
            if (nums[i] == nums[i + 1])
            {
                ans = nums[i];
            }
        }
        return ans;
    }
};

class Solution
{
public:
    int findDuplicate(vector<int> &nums)
    {

        unordered_map<int, bool> visit;

        for (int num : nums)
        {
            if (visit[num])
            {
                return num;
            }
            visit[num] = true;
        }

        return -1;
    }
};