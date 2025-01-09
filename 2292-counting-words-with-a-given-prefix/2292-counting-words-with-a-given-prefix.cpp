class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int cnt=0;
        
        for(auto c:words){
            bool check=true;
            if(c.size()<pref.size())check= false;
            else{
            for(int j=0;j<pref.size();j++){
                if(c[j]!=pref[j]){check=false;
                break;}
            }
            }
            if(check)cnt++;
        }
        return cnt;
        
    }
};