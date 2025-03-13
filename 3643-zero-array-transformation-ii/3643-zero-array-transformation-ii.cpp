class Solution {
public:
    int n,m;
    bool check(vector<int>& nums,vector<vector<int>>& q,int mid){
         vector<int>v(n+1,0);
         for(int i=0;i<mid;i++){
            v[q[i][0]]+=q[i][2];
            v[q[i][1]+1]-=q[i][2];
         }
         for(int i=1;i<=n;i++){
            v[i]+=v[i-1];
         }
         bool flag=true;
         for(int i=0;i<n;i++){
             if(v[i]<nums[i]){
                flag=false;
                break;
             }
         }
         return flag;
    }
    int minZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
         n=nums.size();
         m=queries.size();
         int lo=0;
         int hi=m;
         int ans=INT_MAX;
         while(lo<=hi){
            int mid=(lo+hi)/2;
            if(check(nums,queries,mid)){
                ans=min(ans,mid);
                hi=mid-1;
            }else{
                lo=mid+1;
            }
         }
         if(ans==INT_MAX)return -1;
         return ans;
    }
};