class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<int ,vector<int>>pq(gifts.begin(),gifts.end());
        while(k--){
            int element=sqrt(pq.top());
            pq.pop();
            pq.push(floor(element));
        }
        int n=gifts.size();
        long long sum=0;
        while(n--){
            sum+=pq.top();
            pq.pop();
        }
return sum;
        
    }
};