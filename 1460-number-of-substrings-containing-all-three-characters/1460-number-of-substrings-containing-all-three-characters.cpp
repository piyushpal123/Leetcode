class Solution {
public:

    int numberOfSubstrings(string s) {
        int a=0;
        int b=0;
        int c=0;
        int j=0;
        int n=s.size();
        int ans=0;
        int i;
        for(i=0;i<n;i++){
             if(s[i]=='a')a++;
                else if(s[i]=='b')b++;
                else c++;
            while(a>0 && b>0 && c>0){
                ans+=n-i;
                if(s[j]=='a')a--;
                else if(s[j]=='b')b--;
                else c--;
                j++;
            }
        }
        return ans;
    
        
    }
};