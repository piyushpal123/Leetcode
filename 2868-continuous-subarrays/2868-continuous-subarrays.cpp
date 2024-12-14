class Solution {
    #define ll long long 
    #define pii pair<int,int>
public:
    long long continuousSubarrays(vector<int>& nums) {
        int n=nums.size();
        int l=0;
       int r;

        int mini=INT_MAX;
        int maxi=INT_MIN;
        ll count=0;
        ll win_size;

        for(r=0;r<n;r++){
            mini=min(mini,nums[r]);
            maxi=max(maxi,nums[r]);

            if(maxi-mini>2){
                win_size=r-l;
                count+=(win_size*(win_size+1))/2;
                l=r;
                mini=nums[r];
                maxi=nums[r];

                while(abs(nums[r]-nums[l-1])<=2){
                    l--;
                    maxi=max(maxi,nums[l]);
                    mini=min(mini,nums[l]);
                }

                if(l<r){
                    win_size=r-l;
                     count-=(win_size*(win_size+1))/2;
                }
            }
        }
        win_size=r-l;
         count+=(win_size*(win_size+1))/2;
         return count;
    }
};