class Solution
{
public:
    bool canJump(vector<int> &nums)
    {

        int i = 0;
        int max_reach = 0;
        int reach = 0;

        while (i < nums.size() && i <= max_reach)
        {

            reach = i + nums[i];
            max_reach = max(reach, max_reach);
            i++;
        }

        if (i == nums.size())
        {
            return true;
        }
        return false;
    }
};