class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // move zeros pattern
        // Two pointers
        // leading lagging pointer, the values get copied each time condition met
        int j =0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                nums[j++] = nums[i];
            }
        }
        for(;j<nums.size();j++){
            nums[j]=0;
        }
    }
};