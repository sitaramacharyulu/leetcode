class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long cnt = 0;
        long long n = nums.size();
        long long i=0,j=0;
         for(int i=0;i<n;i++){
            if(nums[i]==0){
               j++;
               cnt+=j;
            }
            else{
                j=0;
            }
         }
        return cnt;
    }
};