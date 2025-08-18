class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        int n = nums2.size();
        int m = nums1.size();
       
        int ans = 0;
        for(int i=0;i<m;i++){
             int low = 0;
             int high = n-1;
             int curr = i-1;
        while(low<=high){
            int mid = low+(high-low)/2;
            if(nums2[mid]>=nums1[i]){
                curr = mid;
                low =mid+1;
            }
            else{
                high = mid-1;
            }
             }
              if(curr>=i){
                ans=max(ans,curr-i);
            }
        }
        return ans;
    }
};