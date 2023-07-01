class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {

        int s = 0;
        int e = 0;

        while (s < nums.size())
        {

            if (nums[s] != 0)
            {
                swap(nums[s], nums[e++]);
            }
            s++;
        }
    }
};