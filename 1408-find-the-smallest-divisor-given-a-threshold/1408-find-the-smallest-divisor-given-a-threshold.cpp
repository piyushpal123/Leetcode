class Solution {
public:
        int solve(vector<int>&nums,int m){
            int ans=0;
            for(int i=0;i<nums.size();i++){
                ans+=ceil((double)nums[i]/m);
            }
            return ans;
        }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int l=1;
        int h=INT_MIN;
        for(auto c:nums)h=max(h,c);
        int mid=l+(h-l)/2;
        int res=h;
        while(l<=h){
            mid=l+(h-l)/2;
            int ans=solve(nums,mid);
            if(ans>threshold){
                l=mid+1;
            }

            else{
               res=mid;
               h=mid-1;

                
            }


        }
        return res;
         
        
    }
};