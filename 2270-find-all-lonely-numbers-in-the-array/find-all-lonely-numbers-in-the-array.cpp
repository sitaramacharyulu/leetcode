class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        vector<int>vec;
        int n = nums.size();
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(int i=0;i<n;i++){
            if(mp[nums[i]]==1 && !(mp[nums[i]-1]) && !(mp[nums[i]+1])){
                vec.push_back(nums[i]);
            }
        }
        
       return vec;
    }
};