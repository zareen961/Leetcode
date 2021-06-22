class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int current = nums[0], best = nums[0];
        for(auto i =1; i<nums.size(); i++){
            
            current = max(nums[i], current+nums[i]);
            best = max(best, current); 
            cout << current << ":" << best << endl;
        }
        return best;
    }
};