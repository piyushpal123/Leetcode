class Solution {
public:
    bool check(vector<int>& nums) {
        int n=nums.size();
        vector<int>num2(nums);
        sort(num2.begin(),num2.end());
        
     
      for(int k=0;k<n;k++){
         vector<int>ans(n);
         for(int i=0;i<n;i++){
            int index=(i+k)%n;
            ans[index]=nums[i];
         }
         if(ans==num2){
            return true;
         }
      }
         return false;

      
    

       
        
        
    }
};