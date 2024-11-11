class Solution {
public:
   bool isPrime(int num) {
    if (num <= 1) return false;
    if (num <= 3) return true;
    if (num % 2 == 0 || num % 3 == 0) return false;
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) return false;
    }
    return true;
}

int fun(int n) {
    if (n <= 2) return -1; // No prime numbers less than 2
    for (int i = n - 1; i >= 2; --i) {
        if (isPrime(i)) return i;
    }
    return -1;
}
    bool primeSubOperation(vector<int>& nums) {
        int n=nums.size();
       
             int t = fun(nums[0]);
             if(t!=-1){
                nums[0]-=t;
             }
        
        for(int i=1;i<n;i++){
            if(nums[i]<=nums[i-1]) return false;
            int t=fun(nums[i]);
            while(nums[i]-t<=nums[i-1]){
                t=fun(t);
            }
            if(t!=-1)nums[i]-=t;
            
        }
        return true;
    }
};