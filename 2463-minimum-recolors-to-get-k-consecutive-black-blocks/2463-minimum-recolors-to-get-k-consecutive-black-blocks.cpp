class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int n=blocks.size();
        int l=0,r=0;
        int cnt=0;
        int mx=INT_MAX;
        while(r<n){
             if(blocks[r]=='W')cnt++;
            if(r-l+1==k)
            {
                mx=min(cnt,mx);
                if(blocks[l]=='W')
                    cnt--;
                l++;
                
                }

           
            r++;

        }
     
        if(mx==INT_MAX)return 0;
        return mx;
    }
};