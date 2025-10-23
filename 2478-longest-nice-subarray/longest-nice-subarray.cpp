class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
        int cnt = 0;
        int ans = 0;
        int r = 0;
        int n = nums.size();
        for(int l=0;l<n;l++){
            while((cnt & nums[l])!=0){
                cnt^=nums[r];
                r++;
            }
            cnt |=nums[l];
            ans=max(ans,l-r+1);
        }
        return ans;
       
    }
};