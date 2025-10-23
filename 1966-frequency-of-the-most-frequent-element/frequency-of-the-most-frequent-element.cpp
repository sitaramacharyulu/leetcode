class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int l = 0;
        long long pre = 0;
        for(int r=0;r<nums.size();r++){
            long long temp = nums[r];
            pre+=temp;
            if((r-l+1)*temp-pre>k){
                pre-=nums[l];
                l++;
            }
        }
        return nums.size()-l;
    }
};