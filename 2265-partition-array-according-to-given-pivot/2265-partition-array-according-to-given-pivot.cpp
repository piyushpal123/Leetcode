class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n=nums.size();

        vector<int>ans(n,0);
        int ptr=0;
        int cnt=0;

        
        for(int i=0;i<n;i++){
            if(nums[i]<pivot){ans[ptr++]=nums[i];
            }
          if(nums[i]==pivot)cnt++;


        }
        while(cnt--){
            ans[ptr++]=pivot;
        }
        for(int i=0;i<n;i++){
            if(nums[i]>pivot)ans[ptr++]=nums[i];


        }
        return ans;



        
    }
};