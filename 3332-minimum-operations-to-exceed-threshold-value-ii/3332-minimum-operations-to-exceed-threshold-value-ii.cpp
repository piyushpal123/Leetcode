class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int n=nums.size();
     
    
        priority_queue<long long,vector<long long>,greater<long long>>pq(nums.begin(),nums.end());
        long long ans=0,i=0;
        while(pq.top()<k){
            long long a=pq.top();
            pq.pop();
            long long b=pq.top();
            pq.pop();
            ans=min(a,b)*2+max(a,b);
            pq.push(ans);
            i++;
        }
        return i;
        
    }
};