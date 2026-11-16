class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_set<int> num;
        for(int i=0;i<nums.size();i++)
        {
            num.insert(nums[i]);
        }
        if(num.size()!=nums.size())
            return true;
        else
            return false;
    }
};