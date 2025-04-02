class Solution {
public:
long long solve(long long  i,long long j,long long k){
    long long ans=i*k-j*k;
    return ans;
}
    long long maximumTripletValue(vector<int>& nums) {
       
        int n=nums.size();
        long long ans=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                for(int k=j+1;k<n;k++){
                      ans=max(solve(nums[i],nums[j],nums[k]),1LL*ans);
                }
            }
        }
       
return ans;

        
    }
};