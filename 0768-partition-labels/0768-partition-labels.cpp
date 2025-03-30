class Solution {
public:
    vector<int> partitionLabels(string s) {
        int n=s.size();
      vector<int>mpp(26,-1);
        for(int i=0;i<n;i++){
           mpp[s[i]-'a']=i;
        }
        vector<int>ans;
       int l=0,r=0;
       
       while(l<n){
        int last_ch=mpp[s[l]-'a'];
        int r=l;
        while(r<last_ch){
            last_ch=max(last_ch,mpp[s[r]-'a']);
            r++;

        }
        ans.push_back(r-l+1);
    l=r+1;
       }
       
       
        return ans;
        
    }
};