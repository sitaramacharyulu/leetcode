class Solution {
public:
    int totalMoney(int n) {
        int dollar = 1;
        int temp = 0;
        int ans = 0;
        for(int i=1;i<=n;i++){
            if(i%7==1 && i!=1){
                dollar=dollar+1;
                temp = dollar;
            }
            else{
                temp++;
            }
             ans+=temp;
        }
        return ans;
    }
};