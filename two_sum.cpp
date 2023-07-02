class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {

        vector<int> ans;

        for (int i = 0; i < nums.size() - 1; i++)
        {
            int find = target - nums[i];

            for (int j = i + 1; j < nums.size(); j++)
            {
                if (find == nums[j])
                {
                    ans.push_back(i);
                    ans.push_back(j);
                    break;
                }
            }
        }
        return ans;
    }
};


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
      unordered_map<int,int>map;

      for(int i=0;i<nums.size();i++){

          if(map.find(target-nums[i])==map.end()){
              map[nums[i]]=i;
          }

          else{
              return {map[target-nums[i]],i};
          }

      }
      return {-1,-1};
    }
};