class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int> M;
        for(auto i = 0; i<nums.size(); i++){
            M[nums[i]]++;
        }
        int freq = M[nums[0]], n= nums[0] ;
        for(auto i:M){
            if(freq < int((i.second))){
                freq= int(i.second);
                n= int(i.first);
            }
        } 
        return n;
    }
};