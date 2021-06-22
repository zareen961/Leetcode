class Solution {
public:
    int searchBinary(vector<int>& nums, int lb, int ub, int target){
        int mid = (ub+ lb)/2;
        if(mid < nums.size() && mid >= 0 && nums[mid] == target)
           return mid;
        if(lb >= ub){
            if(nums[lb] < target){
                return lb +1;
            }else{
                return lb;
            }
        }
        
        if(nums[mid] > target)
            return searchBinary(nums, lb, mid-1,target);
        else 
            return searchBinary(nums, mid+1, ub, target);
        
        
    }
    int searchInsert(vector<int>& nums, int target) {        
        return searchBinary(nums, 0, nums.size()-1, target);        
    }
};