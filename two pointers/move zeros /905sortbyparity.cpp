class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        // 2 pointers, lagging leading 
        // int j =0;
        // for(int i=0;i<nums.size();i++){
        //     if((nums[i]&1)==0){
        //         swap(nums[i],nums[j++]);
        //     }
        // }
        // return nums;

        auto comparator = [](const int i){return (i&1)==0;};
        partition(nums.begin(),nums.end(),comparator);
        return nums;
        
    }
};