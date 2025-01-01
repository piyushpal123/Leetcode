class Solution {
public:
    int maxScore(string s) {
    int maxi=0;
    int z=0;int o=0;
    for(auto c:s){
        if(c=='1')o++;
    }
    for(int i=0;i<s.size()-1;i++){

        if(s[i]=='0')z++;
        else{
            o--;
        }
        int sum=o+z;
        maxi=max(maxi,sum);
    }
       return maxi; 
    }
};