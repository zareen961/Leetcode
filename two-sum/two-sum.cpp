class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> output;
        for(auto i =0; i<nums.size();i++){           
            auto it = find(nums.begin(), nums.end(), target - nums[i]);
            if(it != nums.end() && i != int(it-nums.begin())){
                output = {i, int(it-nums.begin())};
                break;
            }
        }
        return output;
    }
};