class Solution {
public:
    int maximumBeauty(vector<int>& nums, int k) {
         int n=nums.size();
        vector<int>start(n);
        vector<int>end(n);
        for(int i=0;i<n;i++){
            start[i]=nums[i]-k;
            end[i]=nums[i]+k;
        }
        sort(start.begin(),start.end());
        sort(end.begin(),end.end());
        int i=1;
        int j=0;
        int count=1;
        int ans=1;
        while(i<n && j<n){
           if(start[i]<=end[j]){
            i++;
            count++;
           }
           else{
            j++;
            count--;
           }
           ans=max(count,ans);
        }
        return ans;
    }
};