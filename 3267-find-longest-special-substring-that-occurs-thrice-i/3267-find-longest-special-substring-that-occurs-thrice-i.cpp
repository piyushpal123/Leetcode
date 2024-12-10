class Solution {
public:
    int maximumLength(string s) {
       int n=s.size();
       unordered_map<string,int>mpp;
       for(int i=0;i<n;i++){
        string curr="";
        for(int j=i;j<n;j++){
        if(curr.empty()||curr.back()==s[j]){
            curr.push_back(s[j]);
            mpp[curr]++;
        }
        else{
            break;
        }
            
        }
       }
       int ans=-1;
        for(auto &it:mpp){
            if(it.second>=3){
                int m=it.first.length();
                ans=max(ans,m);
                
            }
        }
        return ans;
    }
};