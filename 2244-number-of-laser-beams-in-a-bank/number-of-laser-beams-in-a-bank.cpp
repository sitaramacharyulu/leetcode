class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int cnt = 0;
        int ans = 0;
        for(int j=0;j<bank[0].size();j++){
            if(bank[0][j]=='1'){
                cnt++;
            }
        }
        for(int i=1;i<bank.size();i++){
            int cnt1 = 0;
            for(int j=0;j<bank[i].size();j++){
                if(bank[i][j]=='1'){
                    cnt1++;
                }
            }
            ans+=cnt*cnt1;
            if(cnt1>0){
            cnt = cnt1;
            }
        }
        return ans;
    }
};