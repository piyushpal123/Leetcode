class Solution {
public:
     bool check(vector<int>& nums,int m,int c){
         int a=0;
         for(int i=0;i<nums.size();i++){
            int g=nums[i]/c;
            if(nums[i]%c!=0)g++;
            if(g>=1)a+=(g-1);
         }
         if(m>=a) return true;
         return false;
    }
    int minimumSize(vector<int>& nums, int m) {
          int n=nums.size();
          int hi=1;
          for(int i=0;i<n;i++){
            hi=max(nums[i],hi);
          }
          int lo=1;
          int ans=hi;
          while(lo<=hi){
            int mid=(hi+lo)/2;
            if(check(nums,m,mid)){
                ans=min(ans,mid);
                hi=mid-1;
            }
            else{
                lo=mid+1;
            }
          }
          return ans;
    }
};