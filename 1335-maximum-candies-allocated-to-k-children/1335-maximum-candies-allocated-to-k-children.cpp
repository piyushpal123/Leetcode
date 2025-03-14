class Solution {
public:

bool isdristibute(int &mid,vector<int>&candies,long long k){
    long long cnt=0;
    for(auto c:candies){
        cnt+=(c/mid);
     
    }
    return cnt>=k;

}
    int maximumCandies(vector<int>& candies, long long k) {
        int l=1;
        int maxi=*max_element(candies.begin(), candies.end());
       
       int r=maxi;
     
       int res=0;
       while(l<=r){
       int mid=l+(r-l)/2;
        if(isdristibute(mid,candies,k)){
            res=mid;

        l=mid+1;
        }
        else{
            r=mid-1;
        }

       }


        
    
      return res;


    }
};