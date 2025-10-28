class Solution {
public:
    int longestBalanced(string s) {
        int ans = 1;
        for(int i=0;i<s.size();i++){
            unordered_map<int,int>mp;
            int cnt = 0, temp = 0;
            for(int j=i;j<s.size();j++){
                if(mp[s[j]]==0){
                    cnt++;
                }
                mp[s[j]]++;
                temp = max(temp,mp[s[j]]);
                int n = j-i+1;
                if(cnt*temp == n){
                    ans = max(ans,n);
                }
            }
        }
        return ans;
    }
};