class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        long long n=nums.size();
        vector<int>ans;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(nums[i]+nums[j]==target)
                {
                    if(i<j)
                        return {i, j};
                    else
                        return {j, i};
                }
            }
        }
        return {};
    }
};
