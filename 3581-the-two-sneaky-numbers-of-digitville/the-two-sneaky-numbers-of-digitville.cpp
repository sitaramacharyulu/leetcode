class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int>vec;
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for( auto i : mp){
            if(i.second==2){
                vec.push_back(i.first);
            }
        }
        return vec;
    }
};