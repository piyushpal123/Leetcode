class Solution {
public:
bool isvalid(vector<int>&nums,int mid,int k){
    int house=0;
    for(int i=0;i<nums.size();i++){
        if(mid>=nums[i]){
            house++;
            i++;
        }
    }
    return house>=k;
   
}
    int minCapability(vector<int>& nums, int k) {
        int n=nums.size();
        int maxi=INT_MIN;
        int mini=INT_MAX;
       for(int i=0;i<n;i++){
        mini=min(mini,nums[i]);
        maxi=max(maxi,nums[i]);
       }
       int l=mini;
       int r=maxi;
           int res=INT_MAX;
       while(l<=r){
        int mid=l+(r-l)/2;
    
        if(isvalid(nums,mid,k)){
            res=mid;
            r=mid-1;
            

        }
        else{
           l=mid+1;
        }
       }
       return res;
        
    }
};