class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
    }
};

class Solution
{
public:
    void sortColors(vector<int> &nums)
    {

        int cnt0 = 0, cnt1 = 0, cnt2 = 0;
        int i = 0;
        while (i < nums.size())
        {
            switch (nums[i])
            {
            case 0:
                cnt0++;
                break;
            case 1:
                cnt1++;
                break;
            case 2:
                cnt2++;
                break;
            }
            i++;
        }
        nums.clear();

        while (cnt0--)
        {
            nums.push_back(0);
            i++;
        }
        while (cnt1--)
        {
            nums.push_back(1);
            i++;
        }
        while (cnt2--)
        {
            nums.push_back(2);
            i++;
        }
    }
};