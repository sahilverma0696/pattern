class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {

        // The idea here is to have the right values at right position 
        // the order does not matter

        // so there will always be values misplaced in pairs

        // take two pointers, from even odd pos respectively 
        // increasement till their respective place is not right 
        // swap them;

        for(int i=0,j=1; i<nums.size();i+=2,j+=2){
            while(i<nums.size() && nums[i]%2==0)i+=2;
            while(j<nums.size() && nums[j]%2==1)j+=2;
            if(i<nums.size()) swap(nums[i],nums[j]);
        }
        return nums;

    }
};