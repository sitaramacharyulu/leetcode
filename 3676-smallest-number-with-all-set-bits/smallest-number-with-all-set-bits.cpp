class Solution {
public:
    int smallestNumber(int n) {
        int i = 1;
        while(i){
            if((pow(2,i))>n){
                break;
            }
            i++;
        }
        return pow(2,i)-1;
    }
};