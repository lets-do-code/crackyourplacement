class Solution
{
public:
    vector<vector<int>> fourSum(vector<int> &nums, int target)
    {

        vector<vector<int>> ans;
        set<vector<int>> set;

        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size() - 1; i++)
        {
            for (int j = i + 1; j < nums.size() - 1; j++)
            {
                int s = j + 1;
                int e = nums.size() - 1;
                while (s < e)
                {
                    if (nums[i] + nums[j] + nums[s] + nums[e] == target)
                    {
                        set.insert({nums[i], nums[j], nums[s], nums[e]});
                        s++;
                        e--;
                    }

                    else if (nums[i] + nums[j] + nums[s] + nums[e] > target)
                        e--;
                    else
                        s++;
                }
            }
        }

        for (auto si : set)
        {
            ans.push_back(si);
        }

        return ans;
    }
};