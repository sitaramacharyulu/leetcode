class Solution {
public:
    int countUnguarded(int m, int n, vector<vector<int>>& g, vector<vector<int>>& w) {
        vector<vector<int>>vec(m,vector<int>(n,0));
        for(auto& i:g){
            vec[i[0]][i[1]]=2;
        }
          for(auto& i:w){
            vec[i[0]][i[1]]=3;
        }
        for(auto& i:g){
            int row = i[0];
            int col = i[1];
            for(int j = row+1;j<vec.size();j++){
                if(vec[j][col]==3 || vec[j][col]==2){
                    break;
                }
                vec[j][col]=1;
            }
            for(int j = row-1;j>=0;j--){
                if(vec[j][col]==3 || vec[j][col]==2){
                    break;
                }
                vec[j][col]=1;
            }
               for(int j = col+1;j<vec[row].size();j++){
                if(vec[row][j]==3 || vec[row][j]==2){
                    break;
                }
                vec[row][j]=1;
            }
                for(int j = col-1;j>=0;j--){
                if(vec[row][j]==3 || vec[row][j]==2){
                    break;
                }
                vec[row][j]=1;
            }
        }
        int cnt = 0;
        for(int i=0;i<vec.size();i++){
            for(int j=0;j<vec[i].size();j++){
                if(vec[i][j]==0){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};