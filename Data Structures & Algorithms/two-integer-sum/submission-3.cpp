class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int, int>> indexedNums;
        for (int i = 0; i < nums.size(); i++) {
            indexedNums.push_back({nums[i], i});
        }
        int left = 0;
        int right = nums.size() - 1;
        sort(indexedNums.begin(), indexedNums.end());
        while (left < right)
        {
            if (indexedNums[left].first + indexedNums[right].first == target)
                return {min(indexedNums[left].second, indexedNums[right].second),           max(indexedNums[left].second, indexedNums[right].second)};
            else if (indexedNums[left].first + indexedNums[right].first < target)
                left++;
            else
                right--;
        }
        return {};
    }
};