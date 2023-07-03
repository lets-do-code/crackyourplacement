class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {

        set<vector<int>> s;
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++)
        {
            int j = i + 1;
            int k = nums.size() - 1;

            while (j < k)
            {
                if (nums[i] + nums[j] + nums[k] == 0 && i != j && i != k && i != k)
                {
                    s.insert({nums[i], nums[j], nums[k]});
                    j++;
                    k--;
                }
                else if (nums[i] + nums[j] + nums[k] < 0)
                {
                    j++;
                }
                else
                {
                    k--;
                }
            }
        }
        for (auto si : s)
        {
            ans.push_back(si);
        }
        return ans;
    }
};