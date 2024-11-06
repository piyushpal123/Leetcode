class Solution {
public:
    int count(int n) {
        int cnt=0;
        while (n) {
            cnt += n & 1;
            n>>=1;
        }
        return cnt;
    }
    bool canSortArray(vector<int>& nums) {
        int n=nums.size();
        for (int i = 0; i < nums.size(); i++) {
            for(int j=0;j<n-i-1;j++){
                if ( nums[j]>nums[j+1]) {
                    if(count(nums[j])==count(nums[j+1])){
                        swap(nums[j],nums[j+1]);
                    }
                    else{
                        return false;
                    }
                
            }

            }
            
            
        }
        
        return true;
    }
};