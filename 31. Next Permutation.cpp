class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int k;

        for(k = nums.size()-2; k>=0; k--){
            if(nums[k]< nums[k+1]){
                break;
            }
        }

        if(k>=0){
            for(int i=nums.size()-1; i>k; i--){
                if(nums[i]>nums[k]){
                    swap(nums[i], nums[k]);
                    reverse(nums.begin()+k+1,nums.end());
                    break;
                }
            }
        }else{
            reverse(nums.begin(), nums.end());

        }

    }
};
