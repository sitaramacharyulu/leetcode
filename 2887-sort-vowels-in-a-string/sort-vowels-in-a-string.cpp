class Solution {
public:
    string sortVowels(string s) {
        int n=s.size();
        string t = "";
        int cmp=s[1];
        vector<char>vec;
        for(int i=0;i<n;i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i] =='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
               vec.push_back(s[i]);
            }
            }
            sort(vec.begin(),vec.end());
            int j=0;
            for(int i=0;i<n;i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
               t+=vec[j];
               j++;
            }
            else{
                t+=s[i];
            }
            }
            return t;
    }
};