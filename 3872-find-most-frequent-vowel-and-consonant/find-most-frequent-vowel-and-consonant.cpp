class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char,int>vow;
        unordered_map<char,int>cons;
        for(int i=0;i<s.size();i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
                vow[s[i]]++;
            }
            else{
                cons[s[i]]++;
            }
        }
        int cnt1 = 0;
        int cnt2 = 0;
        for(auto i : vow){
            cnt1 = max(cnt1,i.second);
        }
        for(auto i : cons){
            cnt2 = max(cnt2,i.second);
        }
        return cnt1+cnt2;
    }
};