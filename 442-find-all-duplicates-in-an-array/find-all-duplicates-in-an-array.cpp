class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>vec;
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
            if(mp[nums[i]]==2){
                vec.push_back(nums[i]);
            }
        }
        return vec;
    }
};