class Solution {
public:
long long count(int mid,vector<int>&piles){
    long long sum=0;
    for(auto p:piles){
        sum+=(p+mid-1)/mid;
    }
    return sum;
}
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxi_el=INT_MIN;
        for(int i=0;i<piles.size();i++){
            maxi_el=max(maxi_el,piles[i]);
        }
        int low=1;
        int high=maxi_el;

            while(low<=high){
                int mid=low+(high-low)/2;
              
                if(h>=count(mid,piles)){
                    high=mid-1;
                }
                else{
                    low=mid+1;
                }
            }

        
        return low;
        
    }
};